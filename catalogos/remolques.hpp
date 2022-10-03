#include "datos.cpp"

class remolques
{
private:
    datos *dat = new datos();
    // vectores tractor
    std::vector<std::string> No_eco;
    std::vector<std::string> Marca;
    std::vector<std::string> Modelo;
    std::vector<std::string> No_placas;
    std::vector<std::string> No_tc;
    std::vector<std::string> Fo_verifica;
    // setter´s
    inline void set_no_eco(const char *a)
    {
        No_eco.push_back(a);
    }
    inline void set_marca(const char *a)
    {
        Marca.push_back(a);
    }
    inline void set_modelo(const char *a)
    {
        Modelo.push_back(a);
    }
    inline void set_no_placas(const char *a)
    {
        No_placas.push_back(a);
    }
    inline void set_no_tc(const char *a)
    {
        No_tc.push_back(a);
    }
    inline void set_fo_verificacion(const char *a)
    {
        Fo_verifica.push_back(a);
    }
public:
    remolques(void);
    ~remolques();
    void carga_datos(std::string bd);
    // retorno de valores tractor
    inline std::vector<std::string> getNo_eco()
    {
        return No_eco;
    }
    inline std::vector<std::string> getmarca()
    {
        return Marca;
    }
    inline std::vector<std::string> getmodelo()
    {
        return Modelo;
    }
    inline std::vector<std::string> getno_placas()
    {
        return No_placas;
    }
    inline std::vector<std::string> getno_tc()
    {
        return No_tc;
    }
    inline std::vector<std::string> getfo_verifica()
    {
        return Fo_verifica;
    }
    void add_remolque(std::string id,std::string marca, std::string modelo, std::string no_placas, std::string no_tc, std::string fo_verifica);
    void update_remolque(std::string bd,std::string no_economico,std::string marca, std::string modelo, std::string no_placas, std::string no_tc, std::string fo_verifica);
    void remove_remolque(std::string bd,std::string no_economico);
    unsigned getsize(std::string bd);
    void vaciar();
};