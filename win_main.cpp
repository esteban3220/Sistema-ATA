#include "win_main.hpp"

win_main::win_main(std::string id)
{
    this->id = id;
    llena_widgets();
    conecta_senales();
}

win_main::~win_main()
{
}

void win_main::llena_widgets(){
    ui->constructor->get_widget("win_operacion", win_operacion);
    ui->constructor->get_widget("tree1", tree1);
    ui->constructor->get_widget("tree2", tree2);
    ui->constructor->get_widget("tree3", tree3);
    ui->constructor->get_widget("tree4", tree4);
    ui->constructor->get_widget("tree5", tree5);
    ui->constructor->get_widget("tree6", tree6);
    ui->constructor->get_widget("tree7", tree7);
    ui->constructor->get_widget("tree8", tree8);
    ui->constructor->get_widget("tree9", tree9);
    ui->constructor->get_widget("tree10", tree10);
    ui->constructor->get_widget("progress_view", progress_view);
    ui->constructor->get_widget("spinner_login", spinner_login);
    ui->constructor->get_widget("lbl1", lbl1);
    ui->constructor->get_widget("lbl2", lbl2);
    ui->constructor->get_widget("lbl3", lbl3);
    ui->constructor->get_widget("lbl4", lbl4);
    ui->constructor->get_widget("lbl5", lbl5);
    ui->constructor->get_widget("lbl6", lbl6);
    ui->constructor->get_widget("lbl7", lbl7);
    ui->constructor->get_widget("lbl8", lbl8);
    ui->constructor->get_widget("lbl9", lbl9);
    ui->constructor->get_widget("lbl10", lbl10);
    ui->constructor->get_widget("lbl_info", lbl_info);
    ui->constructor->get_widget("btn_add1", btn_add1);
    ui->constructor->get_widget("btn_add2", btn_add2);
    ui->constructor->get_widget("btn_add3", btn_add3);
    ui->constructor->get_widget("btn_add4", btn_add4);
    ui->constructor->get_widget("btn_add5", btn_add5);
    ui->constructor->get_widget("btn_add6", btn_add6);
    ui->constructor->get_widget("btn_add7", btn_add7);
    ui->constructor->get_widget("btn_add8", btn_add8);
    ui->constructor->get_widget("btn_add9", btn_add9);
    ui->constructor->get_widget("btn_add10", btn_add10);
    ui->constructor->get_widget("ety_tra_marca", ety_tra_marca);
    ui->constructor->get_widget("ety_tra_modelo", ety_tra_modelo);
    ui->constructor->get_widget("ety_tra_placas", ety_tra_placas);
    ui->constructor->get_widget("ety_tra_tarjeta", ety_tra_tarjeta);
    ui->constructor->get_widget("ety_remo_marca", ety_remo_marca);
    ui->constructor->get_widget("ety_remo_modelo", ety_remo_modelo);
    ui->constructor->get_widget("ety_remo_placas", ety_remo_placas);
    ui->constructor->get_widget("ety_remo_tarjeta", ety_remo_tarjeta);
    ui->constructor->get_widget("ety_ope_nombre", ety_ope_nombre);
    ui->constructor->get_widget("ety_ope_rfc", ety_ope_rfc);
    ui->constructor->get_widget("ety_ope_curp", ety_ope_curp);
    ui->constructor->get_widget("ety_ope_imss", ety_ope_imss);
    ui->constructor->get_widget("ety_ope_fecha", ety_ope_fecha);
    ui->constructor->get_widget("ety_ayu_nombre", ety_ayu_nombre);
    ui->constructor->get_widget("ety_ayu_rfc", ety_ayu_rfc);
    ui->constructor->get_widget("ety_ayu_imss", ety_ayu_imss);
    ui->constructor->get_widget("ety_ayu_otro", ety_ayu_otro);
    ui->constructor->get_widget("ety_pob_nombre", ety_pob_nombre);
    ui->constructor->get_widget("ety_pob_estado", ety_pob_estado);
    ui->constructor->get_widget("ety_rut_distancia", ety_rut_distancia);
    ui->constructor->get_widget("ety_pro_nombre", ety_pro_nombre);
    ui->constructor->get_widget("ety_pro_otro", ety_pro_otro);
    ui->constructor->get_widget("ety_cli_razon", ety_cli_razon);
    ui->constructor->get_widget("ety_cli_rfc", ety_cli_rfc);
    ui->constructor->get_widget("ety_cli_domicilio", ety_cli_domicilio);
    ui->constructor->get_widget("ety_cli_direccion", ety_cli_direccion);
    ui->constructor->get_widget("ety_cli_giro", ety_cli_giro);
    ui->constructor->get_widget("cb_rut_origen", cb_rut_origen);
    ui->constructor->get_widget("cb_rut_destino", cb_rut_destino);
    ui->constructor->get_widget("cb_pro_unidad", cb_pro_unidad);
    ui->constructor->get_widget("cb_cli_tipo", cb_cli_tipo);
    ui->constructor->get_widget("spin_tar_verificacion", spin_tar_verificacion);
    ui->constructor->get_widget("spin_remo_verificacion", spin_remo_verificacion);
    ui->constructor->get_widget("spin_ope_licencia", spin_ope_licencia);
    ui->constructor->get_widget("spin_pob_distancia", spin_pob_distancia);
    ui->constructor->get_widget("spin_rut_hora", spin_rut_hora);
    ui->constructor->get_widget("spin_rut_min", spin_rut_min);
    ui->constructor->get_widget("spin_rut_seg", spin_rut_seg);
    ui->constructor->get_widget("spin_pro_tarifa", spin_pro_tarifa);
    ui->constructor->get_widget("spin_cli_tarifa", spin_cli_tarifa);
    ui->constructor->get_widget("spin_tar_tonelada", spin_tar_tonelada);
    ui->constructor->get_widget("spin_tar_litro", spin_tar_litro);
    ui->constructor->get_widget("spin_tar_viaje", spin_tar_viaje);
    ui->constructor->get_widget("spin_tar_otro", spin_tar_otro);
    ui->constructor->get_widget("toogle_sidebar", toogle_sidebar);
    ui->constructor->get_widget("reveal1", reveal1);
    ui->constructor->get_widget("reveal2", reveal2);
    ui->constructor->get_widget("reveal3", reveal3);
    ui->constructor->get_widget("reveal4", reveal4);
    ui->constructor->get_widget("reveal5", reveal5);
    ui->constructor->get_widget("reveal6", reveal6);
    ui->constructor->get_widget("reveal7", reveal7);
    ui->constructor->get_widget("reveal8", reveal8);
    ui->constructor->get_widget("reveal9", reveal9);
    ui->constructor->get_widget("reveal10", reveal10);
    ui->constructor->get_widget("reveal_info", reveal_info);
    ui->constructor->get_widget("bar_info", bar_info);
}

void win_main::conecta_senales(){
    m_connection_timeout = Glib::signal_timeout().connect(sigc::mem_fun(*this, &win_main::on_timeout), 75);
    win_operacion->signal_delete_event().connect(sigc::mem_fun(*this, &win_main::cierra_app));
    toogle_sidebar->signal_toggled().connect(sigc::mem_fun(*this, &win_main::on_toogle_sidebar_toggled));
    btn_add1->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_add1_clicked));
}
void win_main::run(void)
{
    win_operacion->show_all();
    hilo = new std::thread([this]()
                           { 
                                spinner_login->start();
                                llena_tractor(); 
                                llena_remolque();
                                llena_operadores();
                                llena_ayudantes();
                                llena_poblaciones();
                                llena_rutas();
                                llena_productos();
                                llena_clientes();
                                llena_tarifas();
                                //llena_sueldos();
                                m_bActivityMode = false; 
                                spinner_login->stop();
                            });
}

bool win_main::cierra_app(GdkEventAny *event)
{
    Gtk::MessageDialog mensaje(*win_operacion, "¿Desea cerrar la aplicación?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_OK_CANCEL, true);
    mensaje.set_title("ATA");
    mensaje.set_icon_name("dialog-information");
    mensaje.set_secondary_text("Los datos no guardado se pueden perder.");
    if (mensaje.run() == Gtk::RESPONSE_OK)
        Gtk::Main::quit();
    return true;
}

bool win_main::on_timeout()
{
    double new_val;
    if (m_bActivityMode)
        progress_view->pulse();
    else
    {
        new_val = progress_view->get_fraction() + 0.1;
        if (new_val > 1.0)
            new_val = 0.0;
        progress_view->set_fraction(new_val);
    }
    return new_val > 0.99 ? false : true;
}

void win_main::llena_tractor()
{
    ListTractor = Gtk::ListStore::create(columns_tractor);
    tree1->set_model(ListTractor);
    tree1->append_column("No. Economico", columns_tractor.No_economico);
    tree1->append_column("Marcas", columns_tractor.Marca);
    tree1->append_column("Modelo", columns_tractor.Modelo);
    tree1->append_column("No. Placas", columns_tractor.No_placas);
    tree1->append_column("No. Tarjeta de Circulacion", columns_tractor.No_tc);
    tree1->append_column("Folio de Verificacion", columns_tractor.Folio_verificacion);
    tra->carga_datos(id);
    for (size_t i = 0; i < tra->getNo_eco().size(); i++)
    {
        row = *(ListTractor->append());
        row[columns_tractor.No_economico] = tra->getNo_eco()[i];
        row[columns_tractor.Marca] = tra->getmarca()[i];
        row[columns_tractor.Modelo] = tra->getmodelo()[i];
        row[columns_tractor.No_placas] = tra->getno_placas()[i];
        row[columns_tractor.No_tc] = tra->getno_tc()[i];
        row[columns_tractor.Folio_verificacion] = tra->getfo_verifica()[i];
    }
}

void win_main::llena_remolque()
{
    ListRemolque = Gtk::ListStore::create(columns_remolque);
    tree2->set_model(ListRemolque);
    tree2->append_column("No. Economico", columns_remolque.No_economico);
    tree2->append_column("Marcas", columns_remolque.Marca);
    tree2->append_column("Modelo", columns_remolque.Modelo);
    tree2->append_column("No. Placas", columns_remolque.No_placas);
    tree2->append_column("No. Tarjeta de Circulacion", columns_remolque.No_tc);
    tree2->append_column("Folio de Verificacion", columns_remolque.Folio_verificacion);
    remo->carga_datos(id);
    for (size_t i = 0; i < remo->getNo_eco().size(); i++)
    {
        row = *(ListRemolque->append());
        row[columns_remolque.No_economico] = remo->getNo_eco()[i];
        row[columns_remolque.Marca] = remo->getmarca()[i];
        row[columns_remolque.Modelo] = remo->getmodelo()[i];
        row[columns_remolque.No_placas] = remo->getno_placas()[i];
        row[columns_remolque.No_tc] = remo->getno_tc()[i];
        row[columns_remolque.Folio_verificacion] = remo->getfo_verifica()[i];
    }
}

void win_main::llena_operadores()
{
    ListOperador = Gtk::ListStore::create(columns_operador);
    tree3->set_model(ListOperador);
    tree3->append_column("ID", columns_operador.Id);
    tree3->append_column("Nombre", columns_operador.Nombre);
    tree3->append_column("RFC", columns_operador.Rfc);
    tree3->append_column("Curp", columns_operador.Curp);
    tree3->append_column("No. IMSS", columns_operador.No_imss);
    tree3->append_column("No. Licensia", columns_operador.No_licen);
    tree3->append_column("Fecha de Ingreso", columns_operador.Fecha);
    ope->carga_datos(id);
    for (size_t i = 0; i < ope->getid().size(); i++)
    {
        row = *(ListOperador->append());
        row[columns_operador.Id] = ope->getid()[i];
        row[columns_operador.Nombre] = ope->getnombre()[i];
        row[columns_operador.Rfc] = ope->getrfc()[i];
        row[columns_operador.Curp] = ope->getcurp()[i];
        row[columns_operador.No_imss] = ope->getno_imss()[i];
        row[columns_operador.No_licen] = ope->getno_licensia()[i];
        row[columns_operador.Fecha] = ope->getfecha()[i];
    }
}

void win_main::llena_ayudantes()
{
    ListAyudante = Gtk::ListStore::create(columns_ayudante);
    tree4->set_model(ListAyudante);
    tree4->append_column("ID", columns_ayudante.Id);
    tree4->append_column("Nombre", columns_ayudante.Nombre);
    tree4->append_column("RFC", columns_ayudante.Rfc);
    tree4->append_column("No. IMSS", columns_ayudante.No_imss);
    tree4->append_column("Otro", columns_ayudante.Otro);
    ayu->carga_datos(id);
    for (size_t i = 0; i < ayu->get_id().size(); i++)
    {
        row = *(ListAyudante->append());
        row[columns_ayudante.Id] = ayu->get_id()[i];
        row[columns_ayudante.Nombre] = ayu->get_nombre()[i];
        row[columns_ayudante.Rfc] = ayu->get_rfc()[i];
        row[columns_ayudante.No_imss] = ayu->get_no_imss()[i];
        row[columns_ayudante.Otro] = ayu->get_otro()[i];
    }
}

void win_main::llena_poblaciones()
{
    ListPoblacion = Gtk::ListStore::create(columns_poblacion);
    tree5->set_model(ListPoblacion);
    tree5->append_column("ID", columns_poblacion.Id);
    tree5->append_column("Nombre", columns_poblacion.Nombre);
    tree5->append_column("Estado", columns_poblacion.Estado);
    tree5->append_column("Distancia", columns_poblacion.Distancia);
    pob->carga_datos(id);
    for (size_t i = 0; i < pob->get_id().size(); i++)
    {
        row = *(ListPoblacion->append());
        row[columns_poblacion.Id] = pob->get_id()[i];
        row[columns_poblacion.Nombre] = pob->get_nombre()[i];
        row[columns_poblacion.Estado] = pob->get_estado()[i];
        row[columns_poblacion.Distancia] = pob->get_distancia()[i];
    }
}

void win_main::llena_rutas()
{
    ListRutas = Gtk::ListStore::create(columns_rutas);
    tree6->set_model(ListRutas);
    tree6->append_column("ID", columns_rutas.Id);
    tree6->append_column("Origen", columns_rutas.Origen);
    tree6->append_column("Destino", columns_rutas.Destino);
    tree6->append_column("Distancia", columns_rutas.Distancia);
    tree6->append_column("Tiempo Estimado", columns_rutas.Kms);
    rut->carga_datos(id);
    for (size_t i = 0; i < rut->get_id().size(); i++)
    {
        row = *(ListRutas->append());
        row[columns_rutas.Id] = rut->get_id()[i];
        row[columns_rutas.Origen] = rut->get_origen()[i];
        row[columns_rutas.Destino] = rut->get_destino()[i];
        row[columns_rutas.Distancia] = rut->get_distancia()[i];
        row[columns_rutas.Kms] = rut->get_tiempo_estimado()[i];
    }
}

void win_main::llena_productos(){
    ListProductos = Gtk::ListStore::create(columns_productos);
    tree7->set_model(ListProductos);
    tree7->append_column("ID", columns_productos.Id);
    tree7->append_column("Nombre", columns_productos.Nombre);
    tree7->append_column("Unidad", columns_productos.Unidad);
    tree7->append_column("Tarifa", columns_productos.Tarifa);
    tree7->append_column("Otro", columns_productos.Otro);
    pro->carga_datos(id);
    for (size_t i = 0; i < pro->get_id().size(); i++)
    {
        row = *(ListProductos->append());
        row[columns_productos.Id] = pro->get_id()[i];
        row[columns_productos.Nombre] = pro->get_nombre()[i];
        row[columns_productos.Unidad] = pro->get_unidad()[i];
        row[columns_productos.Tarifa] = pro->get_tarifa()[i];
        row[columns_productos.Otro] = pro->get_otro()[i];
    }
}

void win_main::llena_clientes(){
    ListClientes = Gtk::ListStore::create(columns_clientes);
    tree8->set_model(ListClientes);
    tree8->append_column("ID", columns_clientes.Id);
    tree8->append_column("Razon Social", columns_clientes.Razon_social);
    tree8->append_column("RFC", columns_clientes.Rfc);
    tree8->append_column("Giro", columns_clientes.Giro);
    tree8->append_column("Direccion Fiscal", columns_clientes.Direccion_fiscal);
    tree8->append_column("Tarifa", columns_clientes.Tarifa);
    tree8->append_column("T. Cliente", columns_clientes.Tipo_cliente);
    tree8->append_column("Domicilio", columns_clientes.Domicilio);
    cli->carga_datos(id);
    for (size_t i = 0; i < cli->get_id().size(); i++)
    {
        row = *(ListClientes->append());
        row[columns_clientes.Id] = cli->get_id()[i];
        row[columns_clientes.Razon_social] = cli->get_razon_social()[i];
        row[columns_clientes.Rfc] = cli->get_rfc()[i];
        row[columns_clientes.Giro] = cli->get_giro()[i];
        row[columns_clientes.Direccion_fiscal] = cli->get_direccion_fiscal()[i];
        row[columns_clientes.Tarifa] = cli->get_tarifa()[i];
        row[columns_clientes.Tipo_cliente] = cli->get_tipo_cliente()[i];
        row[columns_clientes.Domicilio] = cli->get_domicilio()[i];
    }
}

void win_main::llena_tarifas(){
    ListTarifas = Gtk::ListStore::create(columns_tarifas);
    tree9->set_model(ListTarifas);
    tree9->append_column("ID", columns_tarifas.Id);
    tree9->append_column("Tarifa Tonelada", columns_tarifas.Tarifa_tonelada);
    tree9->append_column("Tarifa Litro", columns_tarifas.Tarifa_litro);
    tree9->append_column("Tarifa Viaje", columns_tarifas.Tarifa_viaje);
    tree9->append_column("Otro", columns_tarifas.Otro);
    tar->carga_datos(id);
    for (size_t i = 0; i < tar->get_id().size(); i++)
    {
        row = *(ListTarifas->append());
        row[columns_tarifas.Id] = tar->get_id()[i];
        row[columns_tarifas.Tarifa_tonelada] = tar->get_tarifa_tonelada()[i];
        row[columns_tarifas.Tarifa_litro] = tar->get_tarifa_litro()[i];
        row[columns_tarifas.Tarifa_viaje] = tar->get_tarifa_viaje()[i];
        row[columns_tarifas.Otro] = tar->get_otro()[i];
    }
}

void win_main::vacia_campos_tractor(){
    ety_tra_marca->set_text("");
    ety_tra_modelo->set_text("");
    ety_tra_placas->set_text("");
    ety_tra_tarjeta->set_text("");
    spin_tar_verificacion->set_value(0);
}

void win_main::vacia_campos_remolque(){
    ety_remo_marca->set_text("");
    ety_remo_modelo->set_text("");
    ety_remo_placas->set_text("");
    ety_remo_tarjeta->set_text("");
    spin_remo_verificacion->set_value(0);
}

void win_main::vacia_campos_operador(){
    ety_ope_nombre->set_text("");
    ety_ope_rfc->set_text("");
    ety_ope_curp->set_text("");
    ety_ope_imss->set_text("");
    spin_ope_licencia->set_value(0);
    ety_ope_fecha->set_text("");
}

void win_main::vacia_campos_ayudante(){
    ety_ayu_nombre->set_text("");
    ety_ayu_rfc->set_text("");
    ety_ayu_imss->set_text("");
    ety_ayu_otro->set_text("");
}

void win_main::vacia_campos_poblacion(){
    ety_pob_nombre->set_text("");
    ety_pob_estado->set_text("");
    spin_pob_distancia->set_value(0);
}

void win_main::vacia_campos_ruta(){
    cb_rut_origen->set_active(0);
    cb_rut_destino->set_active(0);
    ety_rut_distancia->set_text("");
    spin_rut_hora->set_value(0);
    spin_rut_min->set_value(0);
    spin_rut_seg->set_value(0);
}

void win_main::vacia_campos_producto(){
    ety_pro_nombre->set_text("");
    cb_pro_unidad->set_active(0);
    spin_pro_tarifa->set_value(0);
    ety_pro_otro->set_text("");
}

void win_main::vacia_campos_cliente(){
    ety_cli_razon->set_text("");
    ety_cli_rfc->set_text("");
    ety_cli_giro->set_text("");
    ety_cli_direccion->set_text("");
    spin_cli_tarifa->set_value(0);
    cb_cli_tipo->set_active(0);
    ety_cli_domicilio->set_text("");
}

void win_main::vacia_campos_tarifa(){
    spin_tar_tonelada->set_value(0);
    spin_tar_litro->set_value(0);
    spin_tar_viaje->set_value(0);
    spin_tar_otro->set_text("");
}

void win_main::add_tractor(std::string marca, std::string modelo, std::string placas, std::string tarjeta, std::string folio){
    char size[11];
    unsigned x = tra->getsize(id);
    snprintf(size, sizeof(size), "%010d", x);
    std::string no_eco = size;
    row = *(ListTractor->append());
    row[columns_tractor.No_economico] = no_eco;
    row[columns_tractor.Marca] = marca;
    row[columns_tractor.Modelo] = modelo;
    row[columns_tractor.No_placas] = placas;
    row[columns_tractor.No_tc] = tarjeta;
    row[columns_tractor.Folio_verificacion] = folio;
}

void win_main::add_remolque(std::string marca, std::string modelo, std::string placas, std::string tarjeta, std::string folio){
    char size[11];
    unsigned x = remo->getsize(id);
    snprintf(size, sizeof(size), "%010d", x);
    std::string no_eco = size;
    row = *(ListRemolque->append());
    row[columns_remolque.No_economico] = no_eco;
    row[columns_remolque.Marca] = marca;
    row[columns_remolque.Modelo] = modelo;
    row[columns_remolque.No_placas] = placas;
    row[columns_remolque.No_tc] = tarjeta;
    row[columns_remolque.Folio_verificacion] = folio;
}

void win_main::add_operador(std::string nombre, std::string rfc, std::string curp, std::string imss, std::string licencia, std::string fecha){
    char size[11];
    unsigned x = ope->getsize(id);
    snprintf(size, sizeof(size), "%010d", x);
    std::string no_eco = size;
    row = *(ListOperador->append());
    row[columns_operador.Id] = no_eco;
    row[columns_operador.Nombre] = nombre;
    row[columns_operador.Rfc] = rfc;
    row[columns_operador.Curp] = curp;
    row[columns_operador.No_imss] = imss;
    row[columns_operador.No_licen] = licencia;
    row[columns_operador.Fecha] = fecha;
}

void win_main::add_ayudante(std::string nombre, std::string rfc, std::string imss, std::string otro){
    char size[11];
    unsigned x = ayu->getsize(id);
    snprintf(size, sizeof(size), "%010d", x);
    std::string no_eco = size;
    row = *(ListAyudante->append());
    row[columns_ayudante.Id] = no_eco;
    row[columns_ayudante.Nombre] = nombre;
    row[columns_ayudante.Rfc] = rfc;
    row[columns_ayudante.No_imss] = imss;
    row[columns_ayudante.Otro] = otro;
}

void win_main::add_poblacion(std::string nombre, std::string estado, std::string distancia){
    char size[11];
    unsigned x = pob->getsize(id);
    snprintf(size, sizeof(size), "%010d", x);
    std::string no_eco = size;
    row = *(ListPoblacion->append());
    row[columns_poblacion.Id] = no_eco;
    row[columns_poblacion.Nombre] = nombre;
    row[columns_poblacion.Estado] = estado;
    row[columns_poblacion.Distancia] = distancia;
}

void win_main::add_ruta(std::string origen, std::string destino, std::string distancia, std::string fecha){
    char size[11];
    unsigned x = rut->getsize(id);
    snprintf(size, sizeof(size), "%010d", x);
    std::string no_eco = size;
    row = *(ListRutas->append());
    row[columns_rutas.Id] = no_eco;
    row[columns_rutas.Origen] = origen;
    row[columns_rutas.Destino] = destino;
    row[columns_rutas.Distancia] = distancia;
    row[columns_rutas.Kms] = fecha;
}

void win_main::add_producto(std::string nombre, std::string unidad, std::string tarifa, std::string otro){
    char size[11];
    unsigned x = pro->getsize(id);
    snprintf(size, sizeof(size), "%010d", x);
    std::string no_eco = size;
    row = *(ListProductos->append());
    row[columns_productos.Id] = no_eco;
    row[columns_productos.Nombre] = nombre;
    row[columns_productos.Unidad] = unidad;
    row[columns_productos.Tarifa] = tarifa;
    row[columns_productos.Otro] = otro;
}

void win_main::add_cliente(std::string razon, std::string rfc, std::string giro, std::string tipo, std::string direccion, std::string domicilio, std::string tarifa){
    char size[11];
    unsigned x = cli->getsize(id);
    snprintf(size, sizeof(size), "%010d", x);
    std::string no_eco = size;
    row = *(ListClientes->append());
    row[columns_clientes.Id] = no_eco;
    row[columns_clientes.Razon_social] = razon;
    row[columns_clientes.Rfc] = rfc;
    row[columns_clientes.Giro] = giro;
    row[columns_clientes.Direccion_fiscal] = direccion;
    row[columns_clientes.Tarifa] = tarifa;
    row[columns_clientes.Tipo_cliente] = tipo;
    row[columns_clientes.Domicilio] = domicilio;
}

void win_main::add_tarifa(std::string tonelada, std::string litro, std::string viaje, std::string otro){
    char size[11];
    unsigned x = tar->getsize(id);
    snprintf(size, sizeof(size), "%010d", x);
    std::string no_eco = size;
    row = *(ListTarifas->append());
    row[columns_tarifas.Id] = no_eco;
    row[columns_tarifas.Tarifa_tonelada] = tonelada;
    row[columns_tarifas.Tarifa_litro] = litro;
    row[columns_tarifas.Tarifa_viaje] = viaje;
    row[columns_tarifas.Otro] = otro;
}

void win_main::on_toogle_sidebar_toggled(){
    if (toogle_sidebar->get_active()){
        reveal1->set_reveal_child(true);
        reveal2->set_reveal_child(true);
        reveal3->set_reveal_child(true);
        reveal4->set_reveal_child(true);
        reveal5->set_reveal_child(true);
        reveal6->set_reveal_child(true);
        reveal7->set_reveal_child(true);
        reveal8->set_reveal_child(true);
        reveal9->set_reveal_child(true);
        reveal10->set_reveal_child(true);
    }else{
        reveal1->set_reveal_child(false);
        reveal2->set_reveal_child(false);
        reveal3->set_reveal_child(false);
        reveal4->set_reveal_child(false);
        reveal5->set_reveal_child(false);
        reveal6->set_reveal_child(false);
        reveal7->set_reveal_child(false);
        reveal8->set_reveal_child(false);
        reveal9->set_reveal_child(false);
        reveal10->set_reveal_child(false);
    }
}

void win_main::on_btn_add1_clicked(){
    reveal_info->set_reveal_child(false);
    if (ety_tra_marca->get_text() == "" && ety_tra_modelo->get_text() == "" && ety_tra_placas->get_text() == "" && ety_tra_tarjeta->get_text() == ""){
        Gtk::MessageDialog dialog(*win_operacion, "Faltan Daatos.", false, Gtk::MESSAGE_WARNING, Gtk::BUTTONS_OK);
        dialog.set_title("ATA");
        dialog.set_secondary_text("No se puede dejar ningun campo vacio");
        dialog.run();
    }else{
        try
        {
            tra->add_tractor(id, ety_tra_marca->get_text(), ety_tra_modelo->get_text(), ety_tra_placas->get_text(), ety_tra_tarjeta->get_text(), spin_tar_verificacion->get_text());
            add_tractor(ety_tra_marca->get_text(), ety_tra_modelo->get_text(), ety_tra_placas->get_text(), ety_tra_tarjeta->get_text(), spin_tar_verificacion->get_text());
            lbl_info->set_text("Tractor Agregado Correctamente");
            vacia_campos_tractor();
            bar_info->set_message_type(Gtk::MESSAGE_INFO);
            reveal_info->set_reveal_child(true);
        }
        catch(const std::exception& e)
        {
            g_printerr(e.what());
            lbl_info->set_text("Error al agregar tractor");
            bar_info->set_message_type(Gtk::MESSAGE_ERROR);
            reveal_info->set_reveal_child(true);
        }
    }
    
}

void win_main::on_btn_add2_clicked(){  
    
}