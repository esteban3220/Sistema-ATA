#include <podofo/podofo.h>

using namespace PoDoFo;

void PrintHelp()
{
    std::cout << "This is a example application for the PoDoFo PDF library." << std::endl
              << "It creates a small PDF file containing the text >Hello World!<" << std::endl
              << "Please see http://podofo.sf.net for more information" << std::endl
              << std::endl;
    std::cout << "Usage:" << std::endl;
    std::cout << "  examplehelloworld [outputfile.pdf]" << std::endl
              << std::endl;
}

void HelloWorld(const char *pszFilename)
{
    PdfStreamedDocument document(pszFilename);
    PdfPainter painter;
    PdfTable table = PoDoFo::PdfTable(2, 4);
    PoDoFo::PdfSimpleTableModel *tablemodel1 = new PoDoFo::PdfSimpleTableModel(2, 4);
    PdfPage *pPage;
    PdfFont *pFont;

    try
    {

        pPage = document.CreatePage(PdfPage::CreateStandardPageSize(ePdfPageSize_A4));

        if (!pPage)
        {
            PODOFO_RAISE_ERROR(ePdfError_InvalidHandle);
        }

        painter.SetPage(pPage);

        pFont = document.CreateFont("Arial");

        if (!pFont)
        {
            PODOFO_RAISE_ERROR(ePdfError_InvalidHandle);
        }

        pFont->SetFontSize(18.0);

        painter.SetFont(pFont);
        painter.SetColor(0.0, 0.0, 0.0);
        tablemodel1->SetFont(pFont);
        tablemodel1->SetForegroundColor(PoDoFo::PdfColor(0.0, 0.0, 0.0));
        tablemodel1->SetBorderEnabled(true);
        tablemodel1->SetBorderWidth(0.5);
        tablemodel1->SetAlignment(PoDoFo::EPdfVerticalAlignment::ePdfVerticalAlignment_Top);
        tablemodel1->SetWordWrapEnabled(true);
        tablemodel1->SetText(1, 1, "text");
        table.SetModel(tablemodel1);
        table.Draw(20, pPage->GetPageSize().GetHeight()- 40, &painter);

        painter.FinishPage();
        document.GetInfo()->SetCreator(PdfString("examplahelloworld - A PoDoFo test application"));
        document.GetInfo()->SetAuthor(PdfString("Dominik Seichter"));
        document.GetInfo()->SetTitle(PdfString("Hello World"));
        document.GetInfo()->SetSubject(PdfString("Testing the PoDoFo PDF Library"));
        document.GetInfo()->SetKeywords(PdfString("Test;PDF;Hello World;"));

        document.Close();
    }
    catch (PdfError &e)
    {
        try
        {
            painter.FinishPage();
        }
        catch (...)
        {
        }

        throw e;
    }
}