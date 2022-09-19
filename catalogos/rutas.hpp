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
    void set_id(const char *id){
        this->id.push_back(id);
    }
    void set_origen(const char *origen){
        this->origen.push_back(origen);
    }
    void set_destino(const char *destino){
        this->destino.push_back(destino);
    }
    void set_distancia(const char *distancia){
        this->distancia.push_back(distancia);
    }
    void set_tiempo(const char *tiempo_estimado){
        this->tiempo_estimado.push_back(tiempo_estimado);
    }
public:
    rutas(void);
    ~rutas();
    void carga_datos(std::string id);
    std::vector<std::string> get_id(){
        return this->id;
    }
    std::vector<std::string> get_origen(){
        return this->origen;
    }
    std::vector<std::string> get_destino(){
        return this->destino;
    }
    std::vector<std::string> get_distancia(){
        return this->distancia;
    }
    std::vector<std::string> get_tiempo_estimado(){
        return this->tiempo_estimado;
    }
};