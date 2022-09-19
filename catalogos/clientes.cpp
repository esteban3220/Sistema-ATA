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