/* =========================================================================
 * File:        hpdftbl_errstr.c
 * Description: Utility module to translate HPDF error codes to human readable
 *              strings.
 * Author:      Johan Persson (johan162@gmail.com)
 *
 * Copyright (C) 2022 Johan Persson
 *
 * Released under the MIT License
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 * =========================================================================
 */

/**
 * @file hpdftbl_errstr.c
 * @brief Utility module to translate HPDF error codes to human readable strings
 *
 */

#include <stdio.h>
#include <hpdf.h>
#include "hpdftbl.h"

/**
 * @brief An entry in the error string table
 */
struct hpdftbl_errcode_entry {
    char *errstr;  /**< Pointer to the error string */
    unsigned errcode; /**< The error code from HPDF library */
};

/**
 * @brief Human readable error strings corresponding to error code of table routines
 */
static char *error_descriptions[] = {
        "No error",                                     /* 0 */
        "Cell is part of another spanning cell",        /* 1 */
        "Cell row and column exceeds table dimension",  /* 2 */
        "Table handle is NULL",                         /* 3 */
        "Text encoding error",                          /* 4 */
        "Out of memory",                                /* 5 */
        "Invalid table handle",                         /* 6 */
        "Cell spanning will exceed table dimension",    /* 7 */
        "Use of undefined line style",                  /* 8 */
        "Invalid theme handler",                        /* 9 */
        "No auto height available",                     /* 10  */
        "Internal error. Unknown error code",           /* 11  */
        "Total column width exceeds 100%",              /* 12  */
        "Calculated width of columns too small",        /* 13  */
        "Dynamic callback not located"                  /* 14  */
};


/**
 * @brief Number of error messages
 */
static const size_t NUM_ERR_MSG = sizeof(error_descriptions) / sizeof(char *);

/** @brief Error code for unknown error */
#define ERR_UNKNOWN 11


/** @brief Stores the last generated error code. */
int hpdftbl_err_code = 0;

/** @brief The row where the last error was generated.  */
int hpdftbl_err_row = -1;

/** @brief The column where the last error was generated.  */
int hpdftbl_err_col = -1;

/** @brief Hold the line number of the last error occurred */
int hpdftbl_err_lineno = 0;

/** @brief Hold the file name where the last error occurred */
char *hpdftbl_err_file = NULL;

/** @brief Extra info that may be specified at the point of error */
char hpdftbl_err_extrainfo[1024] = {0};



/**
 * @brief A table with all the error strings from the
 * hpdf core library corresponding to error codes
 *
 */
static struct hpdftbl_errcode_entry err_code_entries[] = {
{"HPDF_ARRAY_COUNT_ERR", 0x1001},
{"HPDF_ARRAY_ITEM_NOT_FOUND", 0x1002},
{"HPDF_ARRAY_ITEM_UNEXPECTED_TYPE", 0x1003},
{"HPDF_BINARY_LENGTH_ERR", 0x1004},
{"HPDF_CANNOT_GET_PALLET", 0x1005},
{"HPDF_DICT_COUNT_ERR", 0x1007},
{"HPDF_DICT_ITEM_NOT_FOUND", 0x1008},
{"HPDF_DICT_ITEM_UNEXPECTED_TYPE", 0x1009},
{"HPDF_DICT_STREAM_LENGTH_NOT_FOUND", 0x100A},
{"HPDF_DOC_ENCRYPTDICT_NOT_FOUND", 0x100B},
{"HPDF_DOC_INVALID_OBJECT", 0x100C},
{"HPDF_DUPLICATE_REGISTRATION", 0x100E},
{"HPDF_EXCEED_JWW_CODE_NUM_LIMIT", 0x100F},
{"HPDF_ENCRYPT_INVALID_PASSWORD", 0x1011},
{"HPDF_ERR_UNKNOWN_CLASS", 0x1013},
{"HPDF_EXCEED_GSTATE_LIMIT", 0x1014},
{"HPDF_FAILD_TO_ALLOC_MEM", 0x1015},
{"HPDF_FILE_IO_ERROR", 0x1016},
{"HPDF_FILE_OPEN_ERROR", 0x1017},
{"HPDF_FONT_EXISTS", 0x1019},
{"HPDF_FONT_INVALID_WIDTHS_TABLE", 0x101A},
{"HPDF_INVALID_AFM_HEADER", 0x101B},
{"HPDF_INVALID_ANNOTATION", 0x101C},
{"HPDF_INVALID_BIT_PER_COMPONENT", 0x101E},
{"HPDF_INVALID_CHAR_MATRICS_DATA", 0x101F},
{"HPDF_INVALID_COLOR_SPACE", 0x1020},
{"HPDF_INVALID_COMPRESSION_MODE", 0x1021},
{"HPDF_INVALID_DATE_TIME", 0x1022},
{"HPDF_INVALID_DESTINATION", 0x1023},
{"HPDF_INVALID_DOCUMENT", 0x1025},
{"HPDF_INVALID_DOCUMENT_STATE", 0x1026},
{"HPDF_INVALID_ENCODER", 0x1027},
{"HPDF_INVALID_ENCODER_TYPE", 0x1028},
{"HPDF_INVALID_ENCODING_NAME", 0x102B},
{"HPDF_INVALID_ENCRYPT_KEY_LEN", 0x102C},
{"HPDF_INVALID_FONTDEF_DATA", 0x102D},
{"HPDF_INVALID_FONTDEF_TYPE", 0x102E},
{"HPDF_INVALID_FONT_NAME", 0x102F},
{"HPDF_INVALID_IMAGE", 0x1030},
{"HPDF_INVALID_JPEG_DATA", 0x1031},
{"HPDF_INVALID_N_DATA", 0x1032},
{"HPDF_INVALID_OBJECT", 0x1033},
{"HPDF_INVALID_OBJ_ID", 0x1034},
{"HPDF_INVALID_OPERATION", 0x1035},
{"HPDF_INVALID_OUTLINE", 0x1036},
{"HPDF_INVALID_PAGE", 0x1037},
{"HPDF_INVALID_PAGES", 0x1038},
{"HPDF_INVALID_PARAMETER", 0x1039},
{"HPDF_INVALID_PNG_IMAGE", 0x103B},
{"HPDF_INVALID_STREAM", 0x103C},
{"HPDF_MISSING_FILE_NAME_ENTRY", 0x103D},
{"HPDF_INVALID_TTC_FILE", 0x103F},
{"HPDF_INVALID_TTC_INDEX", 0x1040},
{"HPDF_INVALID_WX_DATA", 0x1041},
{"HPDF_ITEM_NOT_FOUND", 0x1042},
{"HPDF_LIBPNG_ERROR", 0x1043},
{"HPDF_NAME_INVALID_VALUE", 0x1044},
{"HPDF_NAME_OUT_OF_RANGE", 0x1045},
{"HPDF_PAGE_INVALID_PARAM_COUNT", 0x1048},
{"HPDF_PAGES_MISSING_KIDS_ENTRY", 0x1049},
{"HPDF_PAGE_CANNOT_FIND_OBJECT", 0x104A},
{"HPDF_PAGE_CANNOT_GET_ROOT_PAGES", 0x104B},
{"HPDF_PAGE_CANNOT_RESTORE_GSTATE", 0x104C},
{"HPDF_PAGE_CANNOT_SET_PARENT", 0x104D},
{"HPDF_PAGE_FONT_NOT_FOUND", 0x104E},
{"HPDF_PAGE_INVALID_FONT", 0x104F},
{"HPDF_PAGE_INVALID_FONT_SIZE", 0x1050},
{"HPDF_PAGE_INVALID_GMODE", 0x1051},
{"HPDF_PAGE_INVALID_INDEX", 0x1052},
{"HPDF_PAGE_INVALID_ROTATE_VALUE", 0x1053},
{"HPDF_PAGE_INVALID_SIZE", 0x1054},
{"HPDF_PAGE_INVALID_XOBJECT", 0x1055},
{"HPDF_PAGE_OUT_OF_RANGE", 0x1056},
{"HPDF_REAL_OUT_OF_RANGE", 0x1057},
{"HPDF_STREAM_EOF", 0x1058},
{"HPDF_STREAM_READLN_CONTINUE", 0x1059},
{"HPDF_STRING_OUT_OF_RANGE", 0x105B},
{"HPDF_THIS_FUNC_WAS_SKIPPED", 0x105C},
{"HPDF_TTF_CANNOT_EMBEDDING_FONT", 0x105D},
{"HPDF_TTF_INVALID_CMAP", 0x105E},
{"HPDF_TTF_INVALID_FOMAT", 0x105F},
{"HPDF_TTF_MISSING_TABLE", 0x1060},
{"HPDF_UNSUPPORTED_FONT_TYPE", 0x1061},
{"HPDF_UNSUPPORTED_FUNC", 0x1062},
{"HPDF_UNSUPPORTED_JPEG_FORMAT", 0x1063},
{"HPDF_UNSUPPORTED_TYPE1_FONT", 0x1064},
{"HPDF_XREF_COUNT_ERR", 0x1065},
{"HPDF_ZLIB_ERROR", 0x1066},
{"HPDF_INVALID_PAGE_INDEX", 0x1067},
{"HPDF_INVALID_URI", 0x1068},
{"HPDF_PAGE_LAYOUT_OUT_OF_RANGE", 0x1069},
{"HPDF_PAGE_MODE_OUT_OF_RANGE", 0x1070},
{"HPDF_PAGE_NUM_STYLE_OUT_OF_RANGE", 0x1071},
{"HPDF_ANNOT_INVALID_ICON", 0x1072},
{"HPDF_ANNOT_INVALID_BORDER_STYLE", 0x1073},
{"HPDF_PAGE_INVALID_DIRECTION", 0x1074},
{"HPDF_INVALID_FONT", 0x1075},
{"HPDF_PAGE_INSUFFICIENT_SPACE", 0x1076},
{"HPDF_PAGE_INVALID_DISPLAY_TIME", 0x1077},
{"HPDF_PAGE_INVALID_TRANSITION_TIME", 0x1078},
{"HPDF_INVALID_PAGE_SLIDESHOW_TYPE", 0x1079},
{"HPDF_EXT_GSTATE_OUT_OF_RANGE", 0x1080},
{"HPDF_INVALID_EXT_GSTATE", 0x1081},
{"HPDF_EXT_GSTATE_READ_ONLY", 0x1082},
{"HPDF_INVALID_U3D_DATA", 0x1083},
{"HPDF_NAME_CANNOT_GET_NAMES", 0x1084},
{"HPDF_INVALID_ICC_COMPONENT_NUM", 0x1085 }};

/**
 * @brief Number of error strings in error table
 */
static const size_t num_errors = sizeof(err_code_entries)/sizeof(struct hpdftbl_errcode_entry);

/**
 * @brief Function to return a human readable error string for an error code from Core HPDF library
 *
 * The various error codes given by the HPDF library can be translated back to a string by
 * the usage of this function. The function will return a pointer to a static string that can
 * not be manipulated.
 *
 * @param err_code The error code
 * @return A pointer to an error string, NULL if the error code is invalid
 *
 * @see hpdftbl_get_errstr()
 */
const char *
hpdftbl_hpdf_get_errstr(const HPDF_STATUS err_code) {

    for(size_t i=0; i < num_errors; i++) {
        if (err_code == err_code_entries[i].errcode)
            return err_code_entries[i].errstr;
    }

    return NULL;
}


/**
 * @brief Translate a table error code to a human readable string.
 *
 * The function returns a pointer to a static string that cannot be modified.
 * It will translate both internal table error messages as well as generic
 * HPDF library error codes.
 *
 * @param err The error code to be translated
 * @return Static pointer to string for valid error code, NULL otherwise
 *
 * @see hpdftbl_hpdf_get_errstr()
 */
const char *
hpdftbl_get_errstr(int err) {
    if (err < 0) {
        if (((size_t) (-hpdftbl_err_code) < NUM_ERR_MSG))
            return error_descriptions[-err];
        else
            return NULL;
    } else {
        // Must be a core HPDF error if > 0
        return hpdftbl_hpdf_get_errstr(err);
    }
}

#ifndef _MSC_VER
// Silent gcc about unused "arg" in the callback and error functions
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
#endif

/**
 * @brief A basic default table error handler.
 *
 * This error handler is used as a callback that outputs the error to stderr
 * in human readable format and quits the process.
 *
 * @param t Table where the error happened (can be NULL)
 * @param r Cell row
 * @param c Cell column
 * @param err The error code
 * @see hpdftbl_set_errhandler()
 */
void
hpdftbl_default_table_error_handler(hpdftbl_t t, int r, int c, int err) {
    if (r > -1 && c > -1) {
        fprintf(stderr, "*** Table Error: [%d] \"%s\" at cell (%d, %d)\n", err, hpdftbl_get_errstr(err), r, c);
    } else {
        fprintf(stderr, "*** Table Error: [%d] \"%s\" \n", err, hpdftbl_get_errstr(err));
    }
    exit(1);
}


#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif

/**
 * @brief Return last error code.
 *
 * Return last error code. if errstr is not NULL a human
 * readable string describing the error will be copied to
 * the string.
 * The error code will be reset after call.
 *
 * @param errstr A string buffer where the error string
 * is written to
 * @param row The row where the error was found
 * @param col The col where the error was found
 * @return The last error code
 */
int
hpdftbl_get_last_errcode(const char **errstr, int *row, int *col) {
    int old_err_code;
    if (errstr) {
        *errstr = hpdftbl_get_errstr(hpdftbl_err_code);
        if (*errstr == NULL) {
            *errstr = error_descriptions[ERR_UNKNOWN];
            old_err_code = hpdftbl_err_code;
            hpdftbl_err_row = -1;
            hpdftbl_err_col = -1;
            return ERR_UNKNOWN;
        }
    }
    *row = hpdftbl_err_row;
    *col = hpdftbl_err_col;
    old_err_code = hpdftbl_err_code;
    hpdftbl_err_code = 0;
    hpdftbl_err_row = -1;
    hpdftbl_err_col = -1;
    return old_err_code;
}

/**
 * @brief Get the filename and line number where the last error occurred.
 *
 * @param lineno Set to the line number where the error occurred
 * @param file Set to the file where the error occurred
 * @param extrainfo Extra info string that may be set at the point of error
 */
void
hpdftbl_get_last_err_file(int *lineno, char **file, char **extrainfo) {
    *lineno = hpdftbl_err_lineno;
    *file = hpdftbl_err_file;
    *extrainfo = hpdftbl_err_extrainfo;
}

/**
 * @brief Specify errhandler for the table routines
 *
 * Note: The library provides a basic default error handler that can be used,
 *
 * @param err_handler
 * @return The old error handler or NULL if non exists
 * @see hpdftbl_default_table_error_handler()
 */
hpdftbl_error_handler_t
hpdftbl_set_errhandler(hpdftbl_error_handler_t err_handler) {
    hpdftbl_error_handler_t old_err_handler = hpdftbl_err_handler;
    hpdftbl_err_handler = err_handler;
    return old_err_handler;
}
