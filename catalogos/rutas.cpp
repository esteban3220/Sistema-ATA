#include "rutas.hpp"

rutas::rutas(void)
{
}

rutas::~rutas()
{
}

void rutas::carga_datos(std::string id)
{
    MYSQL *con = dat->con(id);
    if (mysql_query(con, "select * from catalogo_rutas"))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    dat->res = mysql_use_result(con);
    while ((dat->row = mysql_fetch_row(dat->res)) != NULL)
    {
        set_id(dat->row[0]);
        set_origen(dat->row[1]);
        set_destino(dat->row[2]);
        set_distancia(dat->row[3]);
        set_tiempo(dat->row[4]);
    }
    mysql_free_result(dat->res);
    mysql_close(con);
}