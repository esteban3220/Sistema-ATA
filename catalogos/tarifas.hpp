#include "datos.cpp"

class tarifas
{
private:
    datos *dat = new datos();
    std::vector<std::string> id;
    std::vector<std::string> tafifa_tonelada; 
    std::vector<std::string> tarifa_litro;
    std::vector<std::string> tarifa_viaje;
    std::vector<std::string> otro;

    void set_id(std::string id)
    {
        this->id.push_back(id);
    }
    void set_tarifa_tonelada(std::string tarifa_tonelada)
    {
        this->tafifa_tonelada.push_back(tarifa_tonelada);
    }
    void set_tarifa_litro(std::string tarifa_litro)
    {
        this->tarifa_litro.push_back(tarifa_litro);
    }
    void set_tarifa_viaje(std::string tarifa_viaje)
    {
        this->tarifa_viaje.push_back(tarifa_viaje);
    }
    void set_otro(std::string otro)
    {
        this->otro.push_back(otro);
    }

public:
    tarifas(/* args */);
    ~tarifas();
    void carga_datos(std::string bd);
    std::vector<std::string> get_id()
    {
        return this->id;
    }
    std::vector<std::string> get_tarifa_tonelada()
    {
        return this->tafifa_tonelada;
    }
    std::vector<std::string> get_tarifa_litro()
    {
        return this->tarifa_litro;
    }
    std::vector<std::string> get_tarifa_viaje()
    {
        return this->tarifa_viaje;
    }
    std::vector<std::string> get_otro()
    {
        return this->otro;
    }
    unsigned getsize(std::string bd);
};
