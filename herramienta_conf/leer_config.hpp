#include <iostream>
#include "../binario.hpp"
class config
{
private:
    std::binaryfile myFile = "config.bin";
    std::string user;
    std::string server;
    std::string password;
    std::string socket;
public:
    std::string get_server();
    std::string get_user();
    std::string get_password();
    std::string get_data_pc();
    void escribe_configuracion(std::string _user, std::string _password ,std::string _server, std::string _socket);
    void lee_configuracion();
    void inserta_usuario(std::string tipo,std::string nombre, std::string password);
    config();
    ~config();
};