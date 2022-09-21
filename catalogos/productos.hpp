#include "datos.cpp"

class productos
{
private:
    datos *dat = new datos();
    std::vector<std::string> id;
    std::vector<std::string> nombre;
    std::vector<std::string> unidad;
    std::vector<std::string> tarifa;
    std::vector<std::string> otro;

    void set_id(std::string id)
    {
        this->id.push_back(id);
    }
    void set_nombre(std::string nombre)
    {
        this->nombre.push_back(nombre);
    }
    void set_unidad(std::string unidad)
    {
        this->unidad.push_back(unidad);
    }
    void set_tarifa(std::string tarifa)
    {
        this->tarifa.push_back(tarifa);
    }
    void set_otro(std::string otro)
    {
        this->otro.push_back(otro);
    }
public:
    productos(/* args */);
    ~productos();
    void carga_datos(std::string bd);
    std::vector<std::string> get_id()
    {
        return this->id;
    }
    std::vector<std::string> get_nombre()
    {
        return this->nombre;
    }
    std::vector<std::string> get_unidad()
    {
        return this->unidad;
    }
    std::vector<std::string> get_tarifa()
    {
        return this->tarifa;
    }
    std::vector<std::string> get_otro()
    {
        return this->otro;
    }
    unsigned getsize(std::string bd);
};