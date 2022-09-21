#include "operador.hpp"

operador::operador(void)
{
}

operador::~operador()
{
}

void operador::carga_datos(std::string bd){
    MYSQL *con = dat->con(bd);
    if (mysql_query(con, "select * from catalogo_operador"))
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
        set_curp(dat->row[3]);
        set_no_imss(dat->row[4]);
        set_no_licensia(dat->row[5]);
        set_fecha_ingreso(dat->row[6]);
    }
    mysql_free_result(dat->res);
    mysql_close(con);
}

unsigned operador::getsize(std::string bd){
    unsigned size;
    MYSQL *con = dat->con(bd);
    if (mysql_query(con, "select count(*) from catalogo_operador"))
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