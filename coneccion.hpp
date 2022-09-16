#include <mysql.h>
#include "herramienta_conf/leer_config.cpp"
#include <vector>

class coneccion
{
private:
    config *conf = new config();
    MYSQL *conn;
    MYSQL_RES *res;
    MYSQL_ROW row;
    std::string user, pass, socket, server, database;

public:
    bool verifica_server();
    bool verifica_actualizacion();
    coneccion();
    std::vector<std::string> secion(std::string user, std::string pass);
    ~coneccion();
};