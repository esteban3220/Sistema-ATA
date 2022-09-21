#include "datos.cpp"

class clientes
{
private:
    datos *dat = new datos();
    std::vector<std::string> id;
    std::vector<std::string> razon_social;
    std::vector<std::string> rfc;
    std::vector<std::string> giro;
    std::vector<std::string> direccion_fiscal;
    std::vector<std::string> tarifa;
    std::vector<std::string> tipo_cliente;
    std::vector<std::string> domicilio;

    void set_id(std::string id)
    {
        this->id.push_back(id);
    }
    void set_razon_social(std::string razon_social)
    {
        this->razon_social.push_back(razon_social);
    }
    void set_rfc(std::string rfc)
    {
        this->rfc.push_back(rfc);
    }
    void set_giro(std::string giro)
    {
        this->giro.push_back(giro);
    }
    void set_direccion_fiscal(std::string direccion_fiscal)
    {
        this->direccion_fiscal.push_back(direccion_fiscal);
    }
    void set_tarifa(std::string tarifa)
    {
        this->tarifa.push_back(tarifa);
    }
    void set_tipo_cliente(std::string tipo_cliente)
    {
        this->tipo_cliente.push_back(tipo_cliente);
    }
    void set_domicilio(std::string domicilio)
    {
        this->domicilio.push_back(domicilio);
    }

public:
    clientes(/* args */);
    ~clientes();
    void carga_datos(std::string bd);
    std::vector<std::string> get_id()
    {
        return this->id;
    }
    std::vector<std::string> get_razon_social()
    {
        return this->razon_social;
    }
    std::vector<std::string> get_rfc()
    {
        return this->rfc;
    }
    std::vector<std::string> get_giro()
    {
        return this->giro;
    }
    std::vector<std::string> get_direccion_fiscal()
    {
        return this->direccion_fiscal;
    }
    std::vector<std::string> get_tarifa()
    {
        return this->tarifa;
    }
    std::vector<std::string> get_tipo_cliente()
    {
        return this->tipo_cliente;
    }
    std::vector<std::string> get_domicilio()
    {
        return this->domicilio;
    }
    unsigned getsize(std::string bd);
};