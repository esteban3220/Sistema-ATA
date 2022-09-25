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

unsigned tarifas::getsize(std::string bd)
{
    unsigned size;
    MYSQL *con = dat->con(bd);
    if (mysql_query(con, "select id from catalogo_tarifa"))
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

void tarifas::add_tarifa(std::string bd, std::string tarifa_tonelada, std::string tarifa_litro, std::string tarifa_viaje, std::string otro)
{
    MYSQL *con = dat->con(bd);
    std::string query = "insert into catalogo_tarifa (ta_tonelada, ta_litro, ta_viaje, otro) values (" + tarifa_tonelada + ", " + tarifa_litro + ", " + tarifa_viaje + ", " + otro + ")";
    if (mysql_query(con, query.c_str()))
    {
        mysql_close(con);
        std::cerr << mysql_error(con);
        throw std::runtime_error(mysql_error(con));
    }
    mysql_close(con);
}

void tarifas::update_tarifa(std::string bd,std::string id, std::string tarifa_tonelada, std::string tarifa_litro, std::string tarifa_viaje, std::string otro){
    MYSQL *con = dat->con(bd);
    std::string query = "update catalogo_tarifa set ta_tonelada = " + tarifa_tonelada + ", ta_litro = " + tarifa_litro + ", ta_viaje = " + tarifa_viaje + ", otro = " + otro + " where id = " + id;
    if (mysql_query(con, query.c_str()))
    {
        mysql_close(con);
        std::cerr << mysql_error(con);
        throw std::runtime_error(mysql_error(con));
    }
    mysql_close(con);
}

void tarifas::remove_tarifa(std::string bd, std::string id){
    MYSQL *con = dat->con(bd);
    std::string query = "delete from catalogo_tarifa where id = " + id;
    if (mysql_query(con, query.c_str()))
    {
        mysql_close(con);
        std::cerr << mysql_error(con);
        throw std::runtime_error(mysql_error(con));
    }
    mysql_close(con);
}