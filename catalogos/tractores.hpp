#include "datos.cpp"

class tractores
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
    void set_no_eco(const char *a)
    {
        No_eco.push_back(a);
    }
    void set_marca(const char *a)
    {
        Marca.push_back(a);
    }
    void set_modelo(const char *a)
    {
        Modelo.push_back(a);
    }
    void set_no_placas(const char *a)
    {
        No_placas.push_back(a);
    }
    void set_no_tc(const char *a)
    {
        No_tc.push_back(a);
    }
    void set_fo_verificacion(const char *a)
    {
        Fo_verifica.push_back(a);
    }
public:
    tractores(void);
    ~tractores();
    void carga_datos(std::string bd);
    // retorno de valores tractor
    std::vector<std::string> getNo_eco()
    {
        return No_eco;
    }
    std::vector<std::string> getmarca()
    {
        return Marca;
    }
    std::vector<std::string> getmodelo()
    {
        return Modelo;
    }
    std::vector<std::string> getno_placas()
    {
        return No_placas;
    }
    std::vector<std::string> getno_tc()
    {
        return No_tc;
    }
    std::vector<std::string> getfo_verifica()
    {
        return Fo_verifica;
    }
};