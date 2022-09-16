#pragma once
#include "coneccion.hpp"

coneccion::coneccion()
{
	try
	{
		conf->lee_configuracion();
		this->user = conf->get_user();
		this->pass = conf->get_password();
		this->server = conf->get_server();
		this->socket = conf->get_socket();
		this->database = conf->get_bd();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}

coneccion::~coneccion()
{
}

bool coneccion::verifica_server()
{
	conn = mysql_init(NULL);
	if (!mysql_real_connect(conn, server.c_str(), user.c_str(), pass.c_str(), database.c_str(), atoi(socket.c_str()), NULL, 0))
	{
		mysql_close(conn);
		return 0;
		throw std::runtime_error(mysql_error(conn));
	}
	else
	{
		mysql_close(conn);
		return 1;
	}
}

bool coneccion::verifica_actualizacion()
{
	conn = mysql_init(NULL);
	double ver = 0;
	if (!mysql_real_connect(conn, server.c_str(), user.c_str(), pass.c_str(), "version", atoi(socket.c_str()), NULL, 0))
	{
		mysql_close(conn);
		throw std::runtime_error(mysql_error(conn));
	}
	else
	{
		if (mysql_query(conn, "select ver_updt from actualizacion"))
		{
			throw std::runtime_error(mysql_error(conn));
			mysql_close(conn);
		}
		else
		{
			res = mysql_use_result(conn);
			// version obtenida del servidor
			while ((row = mysql_fetch_row(res)) != NULL)
			{
				ver = atof(row[0]);
			}
			mysql_close(conn);
			mysql_free_result(res);
			// comparacion la que se tiene actualmente
			return ver > atof(conf->get_version().c_str()) ? true : false;
		}
	}
}

std::vector<std::string> coneccion::secion(std::string user, std::string pass)
{
	std::vector<std::string> status;
	std::string query = "select status,bd from bind_users where user='" + user + "' and password = md5('" + pass + "')";
	conn = mysql_init(NULL);
	if (!mysql_real_connect(conn, server.c_str(), this->user.c_str(), this->pass.c_str(), database.c_str(), atoi(socket.c_str()), NULL, 0))
	{
		mysql_close(conn);
		throw std::runtime_error(mysql_error(conn));
	}
	if (mysql_query(conn, query.c_str()))
	{
		mysql_close(conn);
		throw std::runtime_error(mysql_error(conn));
	}
	res = mysql_use_result(conn);
	while ((row = mysql_fetch_row(res)) != NULL)
	{
		status.push_back(row[0]);
		status.push_back(row[1]);
	}
	if ((mysql_fetch_row(res)) == NULL)
	{
		status.push_back("");
		status.push_back("");
	}
	mysql_free_result(res);
	mysql_close(conn);
	return status;
}