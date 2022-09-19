#include "poblaciones.hpp"

poblaciones::poblaciones(/* args */)
{
}

poblaciones::~poblaciones()
{
}

void poblaciones::carga_datos(std::string id)
{
    MYSQL *con = dat->con(id);
    if (mysql_query(con, "select * from catalogo_poblaciones"))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    dat->res = mysql_use_result(con);
    while ((dat->row = mysql_fetch_row(dat->res)) != NULL)
    {
        set_id(dat->row[0]);
        set_nombre(dat->row[1]);
        set_estado(dat->row[2]);
        set_distancia(dat->row[3]);
    }
    mysql_free_result(dat->res);
    mysql_close(con);
}