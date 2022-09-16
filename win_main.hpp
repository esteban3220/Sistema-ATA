#include "builder.hpp"
#include "catalogos/tractores.cpp"
#include "catalogos/remolques.cpp"
#include "catalogos/operador.cpp"
#include "catalogos/ayudantes.cpp"
#include "catalogos/poblaciones.cpp"
#include "catalogos/rutas.cpp"
#include <thread>

class win_main
{
private:
    std::string id;
    std::thread *hilo;
    builder *ui = new builder();
    tractores *tra = new tractores();
    remolques *remo = new remolques();
    operador *ope = new operador();
    ayudantes *ayu = new ayudantes();
    poblaciones *pob = new poblaciones();
    rutas *rut = new rutas();
    Gtk::Window *win_operacion;
    Gtk::TreeView *tree1, *tree2, *tree3, *tree4, *tree5, *tree6, *tree7, *tree8, *tree9, *tree10;
    Gtk::ProgressBar *progress_view;
    bool m_bActivityMode;
    sigc::connection m_connection_timeout;
    bool on_timeout();
    // init tablas
    void llena_tractor();
    void llena_remolque();
    void llena_operadores();
    void llena_ayudantes();
    void llena_poblaciones();
    void llena_rutas();
    void llena_productos();
    void llena_clientes();
    void llena_tarifas();
    void llena_sueldos();
    // lista_tablas
    Gtk::TreeModel::Row row;
    Glib::RefPtr<Gtk::ListStore> ListTractor;
    Glib::RefPtr<Gtk::ListStore> ListRemolque;
    Glib::RefPtr<Gtk::ListStore> ListOperador;
    Glib::RefPtr<Gtk::ListStore> ListAyudante;
    Glib::RefPtr<Gtk::ListStore> ListPoblacion;
    Glib::RefPtr<Gtk::ListStore> ListRutas;
    Glib::RefPtr<Gtk::ListStore> ListProductos;
    Glib::RefPtr<Gtk::ListStore> ListClientes;
    Glib::RefPtr<Gtk::ListStore> ListTarifas;
    Glib::RefPtr<Gtk::ListStore> ListSueldos;
    /*======================================== Inicio ========================================*/
    // Columna tractores
    class ModelTractor : public Gtk::TreeModel::ColumnRecord
    {
    public:
        ModelTractor()
        {
            add(No_economico);
            add(Marca);
            add(Modelo);
            add(No_placas);
            add(No_tc);
            add(Folio_verificacion);
        }

        Gtk::TreeModelColumn<Glib::ustring> No_economico;
        Gtk::TreeModelColumn<Glib::ustring> Marca;
        Gtk::TreeModelColumn<Glib::ustring> Modelo;
        Gtk::TreeModelColumn<Glib::ustring> No_placas;
        Gtk::TreeModelColumn<Glib::ustring> No_tc;
        Gtk::TreeModelColumn<Glib::ustring> Folio_verificacion;
    } columns_tractor;

    // Columna remolque
    class ModelRemolque : public Gtk::TreeModel::ColumnRecord
    {
    public:
        ModelRemolque()
        {
            add(No_economico);
            add(Marca);
            add(Modelo);
            add(No_placas);
            add(No_tc);
            add(Folio_verificacion);
        }

        Gtk::TreeModelColumn<Glib::ustring> No_economico;
        Gtk::TreeModelColumn<Glib::ustring> Marca;
        Gtk::TreeModelColumn<Glib::ustring> Modelo;
        Gtk::TreeModelColumn<Glib::ustring> No_placas;
        Gtk::TreeModelColumn<Glib::ustring> No_tc;
        Gtk::TreeModelColumn<Glib::ustring> Folio_verificacion;
    } columns_remolque;

    // Columna operador
    class ModelOperador : public Gtk::TreeModel::ColumnRecord
    {
    public:
        ModelOperador()
        {
            add(Id);
            add(Nombre);
            add(Rfc);
            add(Curp);
            add(No_imss);
            add(No_licen);
            add(Fecha);
        }

        Gtk::TreeModelColumn<Glib::ustring> Id;
        Gtk::TreeModelColumn<Glib::ustring> Nombre;
        Gtk::TreeModelColumn<Glib::ustring> Rfc;
        Gtk::TreeModelColumn<Glib::ustring> Curp;
        Gtk::TreeModelColumn<Glib::ustring> No_imss;
        Gtk::TreeModelColumn<Glib::ustring> No_licen;
        Gtk::TreeModelColumn<Glib::ustring> Fecha;
    } columns_operador;

    // Columna ayudante
    class ModelAyudante : public Gtk::TreeModel::ColumnRecord
    {
    public:
        ModelAyudante()
        {
            add(Id);
            add(Nombre);
            add(Rfc);
            add(No_imss);
            add(Otro);
        }

        Gtk::TreeModelColumn<Glib::ustring> Id;
        Gtk::TreeModelColumn<Glib::ustring> Nombre;
        Gtk::TreeModelColumn<Glib::ustring> Rfc;
        Gtk::TreeModelColumn<Glib::ustring> No_imss;
        Gtk::TreeModelColumn<Glib::ustring> Otro;
    } columns_ayudante;

    // Columna poblacion
    class ModelPoblacion : public Gtk::TreeModel::ColumnRecord
    {
    public:
        ModelPoblacion()
        {
            add(Id);
            add(Nombre);
            add(Estado);
            add(Distancia);
        }

        Gtk::TreeModelColumn<Glib::ustring> Id;
        Gtk::TreeModelColumn<Glib::ustring> Nombre;
        Gtk::TreeModelColumn<Glib::ustring> Estado;
        Gtk::TreeModelColumn<Glib::ustring> Distancia;
    } columns_poblacion;

    // Columna rutas
    class ModelRutas : public Gtk::TreeModel::ColumnRecord
    {
    public:
        ModelRutas()
        {
            add(Id);
            add(Origen);
            add(Destino);
            add(Distancia);
            add(Kms);
            add(Kms_reparto);
            add(Kms_cobro);
        }

        Gtk::TreeModelColumn<Glib::ustring> Id;
        Gtk::TreeModelColumn<Glib::ustring> Origen;
        Gtk::TreeModelColumn<Glib::ustring> Destino;
        Gtk::TreeModelColumn<Glib::ustring> Distancia;
        Gtk::TreeModelColumn<Glib::ustring> Kms;
        Gtk::TreeModelColumn<Glib::ustring> Kms_reparto;
        Gtk::TreeModelColumn<Glib::ustring> Kms_cobro;
    } columns_rutas;
    /*======================================== Fin ==============================================*/
    bool cierra_app(GdkEventAny *event);

public:
    void run(void);
    win_main(std::string id);
    ~win_main();
};