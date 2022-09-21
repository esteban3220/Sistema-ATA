#include "ayudantes.hpp"

ayudantes::ayudantes(/* args */)
{
}

ayudantes::~ayudantes()
{
}

void ayudantes::carga_datos(std::string id)
{
    MYSQL *con = dat->con(id);
    if (mysql_query(con, "select * from catalogo_ayudantes"))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    dat->res = mysql_use_result(con);
    while ((dat->row = mysql_fetch_row(dat->res)) != NULL)
    {
        set_id(dat->row[0]);
        set_nombre(dat->row[1]);
        set_rfc(dat->row[2]);
        set_no_imss(dat->row[3]);
        set_otro(dat->row[4]);
    }
    mysql_free_result(dat->res);
    mysql_close(con);
}

unsigned ayudantes::getsize(std::string bd)
{
    unsigned size;
    MYSQL *con = dat->con(bd);
    if (mysql_query(con, "select count(*) from catalogo_ayudantes"))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    dat->res = mysql_use_result(con);
    while ((dat->row = mysql_fetch_row(dat->res)) != NULL){
        size = atoi(dat->row[0]);
    }
    mysql_free_result(dat->res);
    mysql_close(con);
    return size;
}