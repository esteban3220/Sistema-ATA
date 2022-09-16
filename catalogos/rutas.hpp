#include "datos.cpp"

class rutas
{
private:
    datos *dat = new datos();
    std::vector<std::string> id;
    std::vector<std::string> origen;
    std::vector<std::string> destino;
    std::vector<std::string> distancia;
    std::vector<std::string> kms;
    std::vector<std::string> kms_reparto;
    std::vector<std::string> kms_cobro;

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
    void set_kms(const char *kms){
        this->kms.push_back(kms);
    }
    void set_kms_reparto(const char *kms_reparto){
        this->kms_reparto.push_back(kms_reparto);
    }
    void set_kms_cobro(const char *kms_cobro){
        this->kms_cobro.push_back(kms_cobro);
    }
public:
    rutas(void);
    ~rutas();
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
    std::vector<std::string> get_kms(){
        return this->kms;
    }
    std::vector<std::string> get_kms_reparto(){
        return this->kms_reparto;
    }
    std::vector<std::string> get_kms_cobro(){
        return this->kms_cobro;
    }

    void carga_datos(std::string id);
};