#include "datos.cpp"

class rutas
{
private:
    datos *dat = new datos();
    std::vector<std::string> id;
    std::vector<std::string> origen;
    std::vector<std::string> destino;
    std::vector<std::string> distancia;
    std::vector<std::string> tiempo_estimado;
/*
    std::string _id;
    std::string _origen;
    std::string _destino;
    std::string _distancia;
    std::string _tiempo_estimado;
*/
    inline void set_id(const char *id){
        this->id.push_back(id);
    }
    inline void set_origen(const char *origen){
        this->origen.push_back(origen);
    }
    inline void set_destino(const char *destino){
        this->destino.push_back(destino);
    }
    inline void set_distancia(const char *distancia){
        this->distancia.push_back(distancia);
    }
    inline void set_tiempo(const char *tiempo_estimado){
        this->tiempo_estimado.push_back(tiempo_estimado);
    }
public:
    rutas(void);
    ~rutas();
    void carga_datos(std::string id);
    inline std::vector<std::string> get_id(){
        return this->id;
    }
    inline std::vector<std::string> get_origen(){
        return this->origen;
    }
    inline std::vector<std::string> get_destino(){
        return this->destino;
    }
    inline std::vector<std::string> get_distancia(){
        return this->distancia;
    }
    inline std::vector<std::string> get_tiempo_estimado(){
        return this->tiempo_estimado;
    }
    unsigned getsize(std::string bd);
    void add_ruta(std::string id, std::string origen, std::string destino, std::string distancia, std::string tiempo_estimado);
    void update_ruta(std::string bd ,std::string id, std::string origen, std::string destino, std::string distancia, std::string tiempo_estimado);
    void remove_ruta(std::string bd,std::string id);
    void vaciar();
};