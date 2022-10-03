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
    if (mysql_query(con, "select id from catalogo_operador"))
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

void operador::add_operador(std::string id, std::string nombre, std::string rfc, std::string curp, std::string no_imss, std::string no_licensia, std::string fecha_ingreso){
    MYSQL *con = dat->con(id);
    std::string query = "insert into catalogo_operador values(null,'" + nombre + "','" + rfc + "','" + curp + "','" + no_imss + "','" + no_licensia + "','" + fecha_ingreso + "')";
    if (mysql_query(con, query.c_str()))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    mysql_close(con);
}

void operador::update_operador(std::string bd,std::string id, std::string nombre, std::string rfc, std::string curp, std::string no_imss, std::string no_licensia, std::string fecha_ingreso){
    MYSQL *con = dat->con(bd);
    std::string query = "update catalogo_operador set nombre = '" + nombre + "', rfc = '" + rfc + "', curp = '" + curp + "', no_imss = '" + no_imss + "', no_licensia = '" + no_licensia + "', fecha_ingreso = '" + fecha_ingreso + "' where id = " + id;
    if (mysql_query(con, query.c_str()))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    mysql_close(con);
}

void operador::remove_operador(std::string bd, std::string id){
    MYSQL *con = dat->con(bd);
    std::string query = "delete from catalogo_operador where id = " + id;
    if (mysql_query(con, query.c_str()))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    mysql_close(con);
}

void operador::vaciar(){
    id.clear();
    nombre.clear();
    rfc.clear();
    curp.clear();
    no_imss.clear();
    no_licensia.clear();
    fecha_ingreso.clear();
}