#include "datos.cpp"

class poblaciones
{
private:
    datos *dat = new datos();
    std::vector<std::string> id;
    std::vector<std::string> nombre;
    std::vector<std::string> estado;
    std::vector<std::string> distancia;

    void set_id(const char *id){
        this->id.push_back(id);
    }
    void set_nombre(const char *nombre){
        this->nombre.push_back(nombre);
    }
    void set_estado(const char *estado){
        this->estado.push_back(estado);
    }
    void set_distancia(const char *distancia){
        this->distancia.push_back(distancia);
    }
public:
    poblaciones(/* args */);
    ~poblaciones();
    std::vector<std::string> get_id(){
        return this->id;
    }
    std::vector<std::string> get_nombre(){
        return this->nombre;
    }
    std::vector<std::string> get_estado(){
        return this->estado;
    }
    std::vector<std::string> get_distancia(){
        return this->distancia;
    }

    void carga_datos(std::string id);
    unsigned getsize(std::string bd);
    void add_poblacion(std::string id, std::string nombre, std::string estado, std::string distancia);
    void update_poblacion(std::string bd,std::string id, std::string nombre, std::string estado, std::string distancia);
    void remove_poblacion(std::string bd,std::string id);
};

