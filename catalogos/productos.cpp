#include "productos.hpp"


productos::productos(/* args */)
{
}

productos::~productos()
{
}

void productos::carga_datos(std::string bd)
{
    MYSQL *con = dat->con(bd);
    if (mysql_query(con, "select * from catalogo_productos"))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    dat->res = mysql_use_result(con);
    while ((dat->row = mysql_fetch_row(dat->res)) != NULL)
    {
        set_id(dat->row[0]);
        set_nombre(dat->row[1]);
        set_unidad(dat->row[2]);
        set_tarifa(dat->row[3]);
        set_otro(dat->row[4]);
    }
    mysql_free_result(dat->res);
    mysql_close(con);
}

unsigned productos::getsize(std::string bd)
{
    unsigned size;
    MYSQL *con = dat->con(bd);
    if (mysql_query(con, "select id from catalogo_productos"))
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

void productos::add_producto(std::string id, std::string nombre, std::string unidad, std::string tarifa, std::string otro)
{
    MYSQL *con = dat->con(id);
    std::string query = "insert into catalogo_productos values (null,'" + nombre + "','" + unidad + "','" + tarifa + "','" + otro + "')";
    if (mysql_query(con, query.c_str()))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    mysql_close(con);
}

void productos::update_producto(std::string bd,std::string id, std::string nombre, std::string unidad, std::string tarifa, std::string otro){
    MYSQL *con = dat->con(bd);
    std::string query = "update catalogo_productos set nombre = '" + nombre + "', unidad = '" + unidad + "', tarifa = '" + tarifa + "', otro = '" + otro + "' where id = " + id;
    if (mysql_query(con, query.c_str()))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    mysql_close(con);
}

void productos::remove_producto(std::string bd, std::string id){
    MYSQL *con = dat->con(bd);
    std::string query = "delete from catalogo_productos where id = " + id;
    if (mysql_query(con, query.c_str()))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    mysql_close(con);
}