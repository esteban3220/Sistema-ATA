#include "remolques.hpp"

remolques::remolques(void)
{
}

remolques::~remolques()
{
}

unsigned remolques::getsize(std::string bd)
{
    unsigned size;
    MYSQL *con = dat->con(bd);
    if (mysql_query(con, "select no_economico from cat_tra_remolques"))
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

void remolques::carga_datos(std::string bd){
    MYSQL *con = dat->con(bd);
    if (mysql_query(con, "select * from cat_tra_remolques"))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    dat->res = mysql_use_result(con);
    while ((dat->row = mysql_fetch_row(dat->res)) != NULL)
    {
        set_no_eco(dat->row[0]);
        set_marca(dat->row[1]);
        set_modelo(dat->row[2]);
        set_no_placas(dat->row[3]);
        set_no_tc(dat->row[4]);
        set_fo_verificacion(dat->row[5]);
    }
    mysql_free_result(dat->res);
    mysql_close(con);
}

void remolques::add_remolque(std::string id,std::string marca, std::string modelo, std::string no_placas, std::string no_tc, std::string fo_verifica)
{
    MYSQL *con = dat->con(id);
    std::string query = "insert into cat_tra_remolques values (null,'" + marca + "'," + modelo + ",'" + no_placas + "'," + no_tc + "," + fo_verifica + ")";
    if (mysql_query(con, query.c_str()))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    mysql_close(con);
}

void remolques::update_remolque(std::string bd,std::string no_economico,std::string marca, std::string modelo, std::string no_placas, std::string no_tc, std::string fo_verifica){
    MYSQL *con = dat->con(bd);
    std::string query = "update cat_tra_remolques set marca = '" + marca + "', modelo = " + modelo + ", no_placas = '" + no_placas + "', no_tc = " + no_tc + ", fo_verificacion = " + fo_verifica + " where no_economico = " + no_economico + "";
    if (mysql_query(con, query.c_str()))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    mysql_close(con);
}

void remolques::remove_remolque(std::string bd,std::string no_economico){
    MYSQL *con = dat->con(bd);
    std::string query = "delete from cat_tra_remolques where no_economico = " + no_economico + "";
    if (mysql_query(con, query.c_str()))
    {
        mysql_close(con);
        throw std::runtime_error(mysql_error(con));
    }
    mysql_close(con);
}

void remolques::vaciar(){
    No_eco.clear();
    Marca.clear();
    Modelo.clear();
    No_placas.clear();
    No_tc.clear();
    Fo_verifica.clear();
}