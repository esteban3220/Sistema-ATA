#include "remolques.hpp"

remolques::remolques(void)
{
}

remolques::~remolques()
{
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