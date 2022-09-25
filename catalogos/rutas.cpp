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

unsigned rutas::getsize(std::string bd)
{
    unsigned size;
    MYSQL *con = dat->con(bd);
    if (mysql_query(con, "select id from catalogo_rutas"))
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

void rutas::add_ruta(std::string id, std::string origen, std::string destino, std::string distancia, std::string tiempo)
{
    MYSQL *con = dat->con(id);
    std::string query = "insert into catalogo_rutas values (null,'" + origen + "','" + destino + "','" + distancia + "','" + tiempo + "')";
    if (mysql_query(con, query.c_str()))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    mysql_close(con);
}

void rutas::update_ruta(std::string bd ,std::string id, std::string origen, std::string destino, std::string distancia, std::string tiempo_estimado){
    MYSQL *con = dat->con(bd);
    std::string query = "update catalogo_rutas set origen = '" + origen + "', destino = '" + destino + "', distancia = '" + distancia + "', tiempo_estimado = '" + tiempo_estimado + "' where id = " + id;
    if (mysql_query(con, query.c_str()))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    mysql_close(con);
}

void rutas::remove_ruta(std::string bd, std::string id){
    MYSQL *con = dat->con(bd);
    std::string query = "delete from catalogo_rutas where id = " + id;
    if (mysql_query(con, query.c_str()))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    mysql_close(con);
}