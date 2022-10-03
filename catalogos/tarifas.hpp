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

    inline void set_id(std::string id)
    {
        this->id.push_back(id);
    }
    inline void set_tarifa_tonelada(std::string tarifa_tonelada)
    {
        this->tafifa_tonelada.push_back(tarifa_tonelada);
    }
    inline void set_tarifa_litro(std::string tarifa_litro)
    {
        this->tarifa_litro.push_back(tarifa_litro);
    }
    inline void set_tarifa_viaje(std::string tarifa_viaje)
    {
        this->tarifa_viaje.push_back(tarifa_viaje);
    }
    inline void set_otro(std::string otro)
    {
        this->otro.push_back(otro);
    }

public:
    tarifas(/* args */);
    ~tarifas();
    void carga_datos(std::string bd);
    inline std::vector<std::string> get_id()
    {
        return this->id;
    }
    inline std::vector<std::string> get_tarifa_tonelada()
    {
        return this->tafifa_tonelada;
    }
    inline std::vector<std::string> get_tarifa_litro()
    {
        return this->tarifa_litro;
    }
    inline std::vector<std::string> get_tarifa_viaje()
    {
        return this->tarifa_viaje;
    }
    inline std::vector<std::string> get_otro()
    {
        return this->otro;
    }
    unsigned getsize(std::string bd);
    void add_tarifa(std::string id, std::string tarifa_tonelada, std::string tarifa_litro, std::string tarifa_viaje, std::string otro);
    void update_tarifa(std::string bd,std::string id, std::string tarifa_tonelada, std::string tarifa_litro, std::string tarifa_viaje, std::string otro);
    void remove_tarifa(std::string bd, std::string id);
    void vaciar();
};