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

    inline void set_id(std::string id)
    {
        this->id.push_back(id);
    }
    inline void set_nombre(std::string nombre)
    {
        this->nombre.push_back(nombre);
    }
    inline void set_unidad(std::string unidad)
    {
        this->unidad.push_back(unidad);
    }
    inline void set_tarifa(std::string tarifa)
    {
        this->tarifa.push_back(tarifa);
    }
    inline void set_otro(std::string otro)
    {
        this->otro.push_back(otro);
    }
public:
    productos(/* args */);
    ~productos();
    void carga_datos(std::string bd);
    inline std::vector<std::string> get_id()
    {
        return this->id;
    }
    inline std::vector<std::string> get_nombre()
    {
        return this->nombre;
    }
    inline std::vector<std::string> get_unidad()
    {
        return this->unidad;
    }
    inline std::vector<std::string> get_tarifa()
    {
        return this->tarifa;
    }
    inline std::vector<std::string> get_otro()
    {
        return this->otro;
    }
    unsigned getsize(std::string bd);
    void add_producto(std::string id, std::string nombre, std::string unidad, std::string tarifa, std::string otro);
    void update_producto(std::string bd,std::string id, std::string nombre, std::string unidad, std::string tarifa, std::string otro);
    void remove_producto(std::string bd, std::string id);
    void vaciar();
};