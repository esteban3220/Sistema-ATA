#include "builder.hpp"
#include "catalogos/tractores.cpp"
#include "catalogos/remolques.cpp"
#include "catalogos/operador.cpp"
#include "catalogos/ayudantes.cpp"
#include "catalogos/poblaciones.cpp"
#include "catalogos/rutas.cpp"
#include "catalogos/productos.cpp"
#include "catalogos/clientes.cpp"
#include "catalogos/tarifas.cpp"
#include <thread>
#include <mutex>

class win_main
{
private:
    std::string id;
    std::thread *hilo;
    std::mutex *mutex;
    builder *ui = new builder();
    tractores *tra = new tractores();
    remolques *remo = new remolques();
    operador *ope = new operador();
    ayudantes *ayu = new ayudantes();
    poblaciones *pob = new poblaciones();
    rutas *rut = new rutas();
    productos *pro = new productos();
    clientes *cli = new clientes();
    tarifas *tar = new tarifas();
    Gtk::Window *win_operacion;
    Gtk::InfoBar *bar_info;
    Gtk::TreeView *tree1, *tree2, *tree3, *tree4, *tree5, *tree6, *tree7, *tree8, *tree9, *tree10;
    Gtk::Button *btn_add1, *btn_add2, *btn_add3, *btn_add4, *btn_add5, *btn_add6, *btn_add7, *btn_add8, *btn_add9, *btn_add10;
    Gtk::Button *btn_edit_1, *btn_edit_2, *btn_edit_3, *btn_edit_4, *btn_edit_5, *btn_edit_6, *btn_edit_7, *btn_edit_8, *btn_edit_9, *btn_edit_10;
    Gtk::Button *btn_remove_1, *btn_remove_2, *btn_remove_3, *btn_remove_4, *btn_remove_5, *btn_remove_6, *btn_remove_7, *btn_remove_8, *btn_remove_9, *btn_remove_10;
    Gtk::Button *btn_back_1, *btn_back_2, *btn_back_3, *btn_back_4, *btn_back_5, *btn_back_6, *btn_back_7, *btn_back_8, *btn_back_9, *btn_back_10;
    Gtk::Button *btn_print,*btn_excel;
    Gtk::ButtonBox *box_opcion1, *box_opcion2, *box_opcion3, *box_opcion4, *box_opcion5, *box_opcion6, *box_opcion7, *box_opcion8, *box_opcion9, *box_opcion10;
    Gtk::SpinButton *spin_pob_distancia, *spin_rut_hora, *spin_rut_min, *spin_rut_seg, *spin_pro_tarifa, *spin_cli_tarifa,
        *spin_tar_tonelada, *spin_tar_litro, *spin_tar_viaje, *spin_tar_otro, *spin_tar_verificacion, *spin_remo_verificacion, *spin_ope_licencia;
    Gtk::ComboBoxText *cb_pro_unidad, *cb_cli_tipo, *cb_rut_origen, *cb_rut_destino;
    Gtk::Entry *ety_tra_marca, *ety_tra_modelo, *ety_tra_placas, *ety_tra_tarjeta;
    Gtk::Entry *ety_remo_marca, *ety_remo_modelo, *ety_remo_placas, *ety_remo_tarjeta;
    Gtk::Entry *ety_ope_nombre, *ety_ope_rfc, *ety_ope_curp, *ety_ope_imss, *ety_ope_fecha;
    Gtk::Entry *ety_ayu_nombre, *ety_ayu_rfc, *ety_ayu_imss, *ety_ayu_otro;
    Gtk::Entry *ety_pob_nombre, *ety_pob_estado;
    Gtk::Entry *ety_rut_distancia;
    Gtk::Entry *ety_pro_nombre, *ety_pro_otro;
    Gtk::Entry *ety_cli_razon, *ety_cli_rfc, *ety_cli_giro, *ety_cli_direccion, *ety_cli_domicilio;
    Gtk::Label *lbl1, *lbl2, *lbl3, *lbl4, *lbl5, *lbl6, *lbl7, *lbl8, *lbl9, *lbl10,*lbl_info;
    Gtk::Revealer *reveal1,*reveal2,*reveal3,*reveal4,*reveal5,*reveal6,*reveal7,*reveal8,*reveal9,*reveal10,*reveal_info;
    Gtk::Stack *stack_cat_1, *stack_cat_2, *stack_cat_3, *stack_cat_4, *stack_cat_5, *stack_cat_6, *stack_cat_7, *stack_cat_8, *stack_cat_9, *stack_cat_10;
    Gtk::Popover *pop_cal;
    Gtk::Calendar *cal;
    Gtk::ToggleButton *toogle_sidebar;
    Gtk::ProgressBar *progress_view;
    Gtk::Spinner *spinner_login;
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

    void vacia_campos_tractor();
    void vacia_campos_remolque();
    void vacia_campos_operador();
    void vacia_campos_ayudante();
    void vacia_campos_poblacion();
    void vacia_campos_ruta();
    void vacia_campos_producto();
    void vacia_campos_cliente();
    void vacia_campos_tarifa();

    void llena_widgets();
    void conecta_senales();
    void on_ety_ope_fecha_icon_press(Gtk::EntryIconPosition icon_pos, const GdkEventButton *event);
    void on_cal_day_selected_double_click();
    void on_bar_info_response(int response_id);
    void on_treeview1_selection_changed();
    void on_treeview2_selection_changed();
    void on_treeview3_selection_changed();
    void on_treeview4_selection_changed();
    void on_treeview5_selection_changed();
    void on_treeview6_selection_changed();
    void on_treeview7_selection_changed();
    void on_treeview8_selection_changed();
    void on_treeview9_selection_changed();
    void on_treeview10_selection_changed();

    void add_tractor(std::string marca, std::string modelo, std::string placas, std::string tarjeta, std::string verificacion);
    void add_remolque(std::string marca, std::string modelo, std::string placas, std::string tarjeta, std::string verificacion);
    void add_operador(std::string nombre, std::string rfc, std::string curp, std::string imss, std::string licencia, std::string fecha);
    void add_ayudante(std::string nombre, std::string rfc, std::string imss, std::string otro);
    void add_poblacion(std::string nombre, std::string estado, std::string distancia);
    void add_ruta(std::string nombre, std::string origen, std::string destino, std::string fecha);
    void add_producto(std::string nombre, std::string unidad, std::string tarifa, std::string otro);
    void add_cliente(std::string razon, std::string rfc, std::string giro, std::string tipo, std::string direccion, std::string domicilio, std::string tarifa);
    void add_tarifa(std::string tonelada, std::string litro, std::string viaje, std::string otro);
    void add_sueldo();

    void edit_tractor(std::string marca, std::string modelo, std::string placas, std::string tarjeta, std::string verificacion);
    void edit_remolque(std::string marca, std::string modelo, std::string placas, std::string tarjeta, std::string verificacion);
    void edit_operador(std::string nombre, std::string rfc, std::string curp, std::string imss, std::string licencia, std::string fecha);
    void edit_ayudante(std::string nombre, std::string rfc, std::string imss, std::string otro);
    void edit_poblacion(std::string nombre, std::string estado, std::string distancia);
    void edit_ruta(std::string nombre, std::string origen, std::string destino, std::string fecha);
    void edit_producto(std::string nombre, std::string unidad, std::string tarifa, std::string otro);
    void edit_cliente(std::string razon, std::string rfc, std::string giro, std::string tipo, std::string direccion, std::string domicilio, std::string tarifa);
    void edit_tarifa(std::string tonelada, std::string litro, std::string viaje, std::string otro);
    void edit_sueldo();

    //señales
    void on_btn_add1_clicked();
    void on_btn_add2_clicked();
    void on_btn_add3_clicked();
    void on_btn_add4_clicked();
    void on_btn_add5_clicked();
    void on_btn_add6_clicked();
    void on_btn_add7_clicked();
    void on_btn_add8_clicked();
    void on_btn_add9_clicked();
    //void on_btn_add10_clicked();
    void on_btn_edit_1_clicked();
    void on_btn_edit_2_clicked();
    void on_btn_edit_3_clicked();
    void on_btn_edit_4_clicked();
    void on_btn_edit_5_clicked();
    void on_btn_edit_6_clicked();
    void on_btn_edit_7_clicked();
    void on_btn_edit_8_clicked();
    void on_btn_edit_9_clicked();
    //void on_btn_edit_10_clicked();
    void on_btn_remove_1_clicked();
    void on_btn_remove_2_clicked();
    void on_btn_remove_3_clicked();
    void on_btn_remove_4_clicked();
    void on_btn_remove_5_clicked();
    void on_btn_remove_6_clicked();
    void on_btn_remove_7_clicked();
    void on_btn_remove_8_clicked();
    void on_btn_remove_9_clicked();
    //void on_btn_remove_10_clicked();
    void on_btn_back_1_clicked();
    void on_btn_back_2_clicked();
    void on_btn_back_3_clicked();
    void on_btn_back_4_clicked();
    void on_btn_back_5_clicked();
    void on_btn_back_6_clicked();
    void on_btn_back_7_clicked();
    void on_btn_back_8_clicked();
    void on_btn_back_9_clicked();
    //void on_btn_back_10_clicked();
    void on_toogle_sidebar_toggled();
    void on_btn_print_clicked();
    void on_btn_excel_clicked();

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
        }

        Gtk::TreeModelColumn<Glib::ustring> Id;
        Gtk::TreeModelColumn<Glib::ustring> Origen;
        Gtk::TreeModelColumn<Glib::ustring> Destino;
        Gtk::TreeModelColumn<Glib::ustring> Distancia;
        Gtk::TreeModelColumn<Glib::ustring> Kms;
    } columns_rutas;

    // Columna productos
    class ModelProductos : public Gtk::TreeModel::ColumnRecord
    {
    public:
        ModelProductos()
        {
            add(Id);
            add(Nombre);
            add(Unidad);
            add(Tarifa);
            add(Otro);
        }

        Gtk::TreeModelColumn<Glib::ustring> Id;
        Gtk::TreeModelColumn<Glib::ustring> Nombre;
        Gtk::TreeModelColumn<Glib::ustring> Unidad;
        Gtk::TreeModelColumn<Glib::ustring> Tarifa;
        Gtk::TreeModelColumn<Glib::ustring> Otro;
    } columns_productos;

    // Columna clientes
    class ModelClientes : public Gtk::TreeModel::ColumnRecord
    {
    public:
        ModelClientes()
        {
            add(Id);
            add(Razon_social);
            add(Rfc);
            add(Giro);
            add(Direccion_fiscal);
            add(Tarifa);
            add(Tipo_cliente);
            add(Domicilio);
        }

        Gtk::TreeModelColumn<Glib::ustring> Id;
        Gtk::TreeModelColumn<Glib::ustring> Razon_social;
        Gtk::TreeModelColumn<Glib::ustring> Rfc;
        Gtk::TreeModelColumn<Glib::ustring> Giro;
        Gtk::TreeModelColumn<Glib::ustring> Direccion_fiscal;
        Gtk::TreeModelColumn<Glib::ustring> Tarifa;
        Gtk::TreeModelColumn<Glib::ustring> Tipo_cliente;
        Gtk::TreeModelColumn<Glib::ustring> Domicilio;
    } columns_clientes;

    // Columna tarifas
    class ModelTarifas : public Gtk::TreeModel::ColumnRecord
    {
    public:
        ModelTarifas()
        {
            add(Id);
            add(Tarifa_tonelada);
            add(Tarifa_litro);
            add(Tarifa_viaje);
            add(Otro);
        }

        Gtk::TreeModelColumn<Glib::ustring> Id;
        Gtk::TreeModelColumn<Glib::ustring> Tarifa_tonelada;
        Gtk::TreeModelColumn<Glib::ustring> Tarifa_litro;
        Gtk::TreeModelColumn<Glib::ustring> Tarifa_viaje;
        Gtk::TreeModelColumn<Glib::ustring> Otro;
    } columns_tarifas;
    /*======================================== Fin ==============================================*/
    bool cierra_app(GdkEventAny *event);

public:
    void run(void);
    win_main(std::string id);
    ~win_main();
};