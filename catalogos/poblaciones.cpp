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

unsigned poblaciones::getsize(std::string bd)
{
    unsigned size;
    MYSQL *con = dat->con(bd);
    if (mysql_query(con, "select id from catalogo_poblaciones"))
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

void poblaciones::add_poblacion(std::string id, std::string nombre, std::string estado, std::string distancia)
{
    MYSQL *con = dat->con(id);
    std::string query = "insert into catalogo_poblaciones values (null,'" + nombre + "','" + estado + "','" + distancia + "')";
    if (mysql_query(con, query.c_str()))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    mysql_close(con);
}

void poblaciones::update_poblacion(std::string bd,std::string id, std::string nombre, std::string estado, std::string distancia){
    MYSQL *con = dat->con(bd);
    std::string query = "update catalogo_poblaciones set nombre = '" + nombre + "', estado = '" + estado + "', distancia = '" + distancia + "' where id = " + id;
    if (mysql_query(con, query.c_str()))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    mysql_close(con);
}

void poblaciones::remove_poblacion(std::string bd,std::string id){
    MYSQL *con = dat->con(bd);
    std::string query = "delete from catalogo_poblaciones where id = " + id;
    if (mysql_query(con, query.c_str()))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    mysql_close(con);
}