#include "datos.cpp"

class ayudantes
{
private:
    datos *dat = new datos();
    std::vector<std::string> id;
    std::vector<std::string> nombre;
    std::vector<std::string> rfc;
    std::vector<std::string> no_imss;
    std::vector<std::string> otro;

    inline void set_id(const char *id){
        this->id.push_back(id);
    }
    inline void set_nombre(const char *nombre){
        this->nombre.push_back(nombre);
    }
    inline void set_rfc(const char *rfc){
        this->rfc.push_back(rfc);
    }
    inline void set_no_imss(const char *no_imss){
        this->no_imss.push_back(no_imss);
    }
    inline void set_otro(const char *otro){
        this->otro.push_back(otro);
    }
public:
    ayudantes(void);
    ~ayudantes();
    inline std::vector<std::string> get_id(){
        return this->id;
    }
    inline std::vector<std::string> get_nombre(){
        return this->nombre;
    }
    inline std::vector<std::string> get_rfc(){
        return this->rfc;
    }
    inline std::vector<std::string> get_no_imss(){
        return this->no_imss;
    }
    inline std::vector<std::string> get_otro(){
        return this->otro;
    }
    void add_ayudante(std::string id, std::string nombre, std::string rfc, std::string no_imss, std::string otro);
    void update_ayudante(std::string bd ,std::string id, std::string nombre, std::string rfc, std::string no_imss, std::string otro);
    void remove_ayudante(std::string bd, std::string id);
    void carga_datos(std::string id);
    unsigned getsize(std::string bd);
    void vaciar();
};


