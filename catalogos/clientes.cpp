#include "clientes.hpp"

clientes::clientes(/* args */)
{
}

clientes::~clientes()
{
}

void clientes::carga_datos(std::string bd)
{
    MYSQL *con = dat->con(bd);
    if (mysql_query(con, "select * from catalogo_clientes"))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    dat->res = mysql_use_result(con);
    while ((dat->row = mysql_fetch_row(dat->res)) != NULL)
    {
        set_id(dat->row[0]);
        set_razon_social(dat->row[1]);
        set_rfc(dat->row[2]);
        set_giro(dat->row[3]);
        set_direccion_fiscal(dat->row[4]);
        set_tarifa(dat->row[5]);
        set_tipo_cliente(dat->row[6]);
        set_domicilio(dat->row[7]);
    }
    mysql_free_result(dat->res);
    mysql_close(con);
}

unsigned clientes::getsize(std::string bd)
{
    unsigned size;
    MYSQL *con = dat->con(bd);
    if (mysql_query(con, "select id from catalogo_clientes"))
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

void clientes::add_cliente(std::string bd, std::string razon_social, std::string rfc, std::string giro, std::string direccion_fiscal, std::string tarifa, std::string tipo_cliente, std::string domicilio)
{
    MYSQL *con = dat->con(bd);
    std::string query = "insert into catalogo_clientes (razon_social, rfc, giro, direccion, tarifa, tipo_cliente, domicilio) values ('" + razon_social + "', '" + rfc + "', '" + giro + "', '" + direccion_fiscal + "', " + tarifa + ", '" + tipo_cliente + "', '" + domicilio + "')";
    if (mysql_query(con, query.c_str()))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    mysql_close(con);
}

void clientes::update_cliente(std::string bd, std::string id, std::string razon_social, std::string rfc, std::string giro, std::string direccion_fiscal, std::string tarifa, std::string tipo_cliente, std::string domicilio)
{
    MYSQL *con = dat->con(bd);
    std::string query = "update catalogo_clientes set razon_social = '" + razon_social + "', rfc = '" + rfc + "', giro = '" + giro + "', direccion = '" + direccion_fiscal + "', tarifa = " + tarifa + ", tipo_cliente = '" + tipo_cliente + "', domicilio = '" + domicilio + "' where id = " + id;
    if (mysql_query(con, query.c_str()))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    mysql_close(con);
}

void clientes::remove_cliente(std::string bd, std::string id)
{
    MYSQL *con = dat->con(bd);
    std::string query = "delete from catalogo_clientes where id = " + id;
    if (mysql_query(con, query.c_str()))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    mysql_close(con);
}