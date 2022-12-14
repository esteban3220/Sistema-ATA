#include "datos.cpp"
class operador
{
private:
    datos *dat = new datos();
    std::vector<std::string> id;
    std::vector<std::string> nombre;
    std::vector<std::string> rfc;
    std::vector<std::string> curp;
    std::vector<std::string> no_imss;
    std::vector<std::string> no_licensia;
    std::vector<std::string> fecha_ingreso;

    inline void set_id(const char *a)
    {
        id.push_back(a);
    }
    inline void set_nombre(const char *a)
    {
        nombre.push_back(a);
    }
    inline void set_rfc(const char *a)
    {
        rfc.push_back(a);
    }
    inline void set_curp(const char *a)
    {
        curp.push_back(a);
    }
    inline void set_no_imss(const char *a)
    {
        no_imss.push_back(a);
    }
    inline void set_no_licensia(const char *a)
    {
        no_licensia.push_back(a);
    }
    inline void set_fecha_ingreso(const char *a)
    {
        fecha_ingreso.push_back(a);
    }
public:
    operador(void);
    ~operador();
    inline std::vector<std::string> getid()
    {
        return id;
    }
    inline std::vector<std::string> getnombre()
    {
        return nombre;
    }
    inline std::vector<std::string> getrfc()
    {
        return rfc;
    }
    inline std::vector<std::string> getcurp()
    {
        return curp;
    }
    inline std::vector<std::string> getno_imss()
    {
        return no_imss;
    }
    inline std::vector<std::string> getno_licensia()
    {
        return no_licensia;
    }
    inline std::vector<std::string> getfecha()
    {
        return fecha_ingreso;
    }
    void add_operador(std::string id, std::string nombre, std::string rfc, std::string curp, std::string no_imss, std::string no_licensia, std::string fecha_ingreso);
    void update_operador(std::string bd,std::string id, std::string nombre, std::string rfc, std::string curp, std::string no_imss, std::string no_licensia, std::string fecha_ingreso);
    void remove_operador(std::string bd,std::string id);
    void carga_datos(std::string bd);
    unsigned getsize(std::string bd);
    void vaciar();
};
