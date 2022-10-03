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
    if (mysql_query(con, "select id from catalogo_ayudantes"))
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

void ayudantes::add_ayudante(std::string id, std::string nombre, std::string rfc, std::string no_imss, std::string otro)
{
    MYSQL *con = dat->con(id);
    std::string query = "insert into catalogo_ayudantes values (null,'" + nombre + "','" + rfc + "','" + no_imss + "','" + otro + "')";
    if (mysql_query(con, query.c_str()))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    mysql_close(con);
}

void ayudantes::update_ayudante(std::string bd ,std::string id, std::string nombre, std::string rfc, std::string no_imss, std::string otro){
    MYSQL *con = dat->con(bd);
    std::string query = "update catalogo_ayudantes set nombre = '" + nombre + "', rfc = '" + rfc + "', no_imss = '" + no_imss + "', otro = '" + otro + "' where id = " + id;
    if (mysql_query(con, query.c_str()))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    mysql_close(con);
}

void ayudantes::remove_ayudante(std::string bd, std::string id){
    MYSQL *con = dat->con(bd);
    std::string query = "delete from catalogo_ayudantes where id = " + id;
    if (mysql_query(con, query.c_str()))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    mysql_close(con);
}

void ayudantes::vaciar(){
    id.clear();
    nombre.clear();
    rfc.clear();
    no_imss.clear();
    otro.clear();
}