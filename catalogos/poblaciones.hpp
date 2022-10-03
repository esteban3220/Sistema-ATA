#include "datos.cpp"

class poblaciones
{
private:
    datos *dat = new datos();
    std::vector<std::string> id;
    std::vector<std::string> nombre;
    std::vector<std::string> estado;
    std::vector<std::string> distancia;

    inline void set_id(const char *id){
        this->id.push_back(id);
    }
    inline void set_nombre(const char *nombre){
        this->nombre.push_back(nombre);
    }
    inline void set_estado(const char *estado){
        this->estado.push_back(estado);
    }
    inline void set_distancia(const char *distancia){
        this->distancia.push_back(distancia);
    }
public:
    poblaciones(/* args */);
    ~poblaciones();
    inline std::vector<std::string> get_id(){
        return this->id;
    }
    inline std::vector<std::string> get_nombre(){
        return this->nombre;
    }
    inline std::vector<std::string> get_estado(){
        return this->estado;
    }
    inline std::vector<std::string> get_distancia(){
        return this->distancia;
    }

    void carga_datos(std::string id);
    unsigned getsize(std::string bd);
    void add_poblacion(std::string id, std::string nombre, std::string estado, std::string distancia);
    void update_poblacion(std::string bd,std::string id, std::string nombre, std::string estado, std::string distancia);
    void remove_poblacion(std::string bd,std::string id);
    void vaciar();   
};

