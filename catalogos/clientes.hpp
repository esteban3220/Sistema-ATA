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

    inline void set_id(std::string id)
    {
        this->id.push_back(id);
    }
    inline void set_razon_social(std::string razon_social)
    {
        this->razon_social.push_back(razon_social);
    }
    inline void set_rfc(std::string rfc)
    {
        this->rfc.push_back(rfc);
    }
    inline void set_giro(std::string giro)
    {
        this->giro.push_back(giro);
    }
    inline void set_direccion_fiscal(std::string direccion_fiscal)
    {
        this->direccion_fiscal.push_back(direccion_fiscal);
    }
    inline void set_tarifa(std::string tarifa)
    {
        this->tarifa.push_back(tarifa);
    }
    inline void set_tipo_cliente(std::string tipo_cliente)
    {
        this->tipo_cliente.push_back(tipo_cliente);
    }
    inline void set_domicilio(std::string domicilio)
    {
        this->domicilio.push_back(domicilio);
    }

public:
    clientes(/* args */);
    ~clientes();
    void carga_datos(std::string bd);
    inline std::vector<std::string> get_id()
    {
        return this->id;
    }
    inline std::vector<std::string> get_razon_social()
    {
        return this->razon_social;
    }
    inline std::vector<std::string> get_rfc()
    {
        return this->rfc;
    }
    inline std::vector<std::string> get_giro()
    {
        return this->giro;
    }
    inline std::vector<std::string> get_direccion_fiscal()
    {
        return this->direccion_fiscal;
    }
    inline std::vector<std::string> get_tarifa()
    {
        return this->tarifa;
    }
    inline std::vector<std::string> get_tipo_cliente()
    {
        return this->tipo_cliente;
    }
    inline std::vector<std::string> get_domicilio()
    {
        return this->domicilio;
    }
    unsigned getsize(std::string bd);
    void add_cliente(std::string bd, std::string razon_social, std::string rfc, std::string giro, std::string direccion_fiscal, std::string tarifa, std::string tipo_cliente, std::string domicilio);
    void update_cliente(std::string bd, std::string id, std::string razon_social, std::string rfc, std::string giro, std::string direccion_fiscal, std::string tarifa, std::string tipo_cliente, std::string domicilio);
    void remove_cliente(std::string bd, std::string id);
    void vaciar();
};