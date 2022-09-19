#include "tarifas.hpp"

tarifas::tarifas(/* args */)
{
}

tarifas::~tarifas()
{
}

void tarifas::carga_datos(std::string bd)
{
    MYSQL *con = dat->con(bd);
    if (mysql_query(con, "select * from catalogo_tarifa"))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    dat->res = mysql_use_result(con);
    while ((dat->row = mysql_fetch_row(dat->res)) != NULL)
    {
        set_id(dat->row[0]);
        set_tarifa_tonelada(dat->row[1]);
        set_tarifa_litro(dat->row[2]);
        set_tarifa_viaje(dat->row[3]);
        set_otro(dat->row[4]);
    }
    mysql_free_result(dat->res);
    mysql_close(con);
}