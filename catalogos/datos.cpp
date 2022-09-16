#pragma once
#include <mysql.h>
#include "../coneccion.cpp"

class datos : public coneccion
{
private:
    MYSQL *conn;
    std::string user, pass, socket, server;
    config *conf2 = new config();

public:
    MYSQL_RES *res;
    MYSQL_ROW row;
    datos(/* args */);
    ~datos();
    MYSQL *con(std::string bd);
};

datos::datos(/* args */)
{
    conf2->lee_configuracion();
    this->user = conf2->get_user();
    this->pass = conf2->get_password();
    this->server = conf2->get_server();
    this->socket = conf2->get_socket();
}

datos::~datos()
{
}

MYSQL *datos::con(std::string bd){
    conn = mysql_init(NULL);
	if (!mysql_real_connect(conn, server.c_str(), this->user.c_str(), this->pass.c_str(), bd.c_str(), atoi(socket.c_str()), NULL, 0))
	{
		mysql_close(conn);
		throw std::runtime_error(mysql_error(conn));
	}
    return conn;
}