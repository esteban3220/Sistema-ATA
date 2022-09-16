#include "win_main.hpp"

win_main::win_main(std::string id)
{
    this->id = id;
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
    m_connection_timeout = Glib::signal_timeout().connect(sigc::mem_fun(*this, &win_main::on_timeout), 75);
    win_operacion->signal_delete_event().connect(sigc::mem_fun(*this, &win_main::cierra_app));
}

win_main::~win_main()
{
}

void win_main::run(void)
{
    win_operacion->show_all();
    hilo = new std::thread([this]()
                           { 
                                llena_tractor(); 
                                llena_remolque();
                                llena_operadores();
                                llena_ayudantes();
                                llena_poblaciones();
                                llena_rutas();
                                m_bActivityMode = false; 
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
    tree6->append_column("Kilometros", columns_rutas.Kms);
    tree6->append_column("Kilometros Reparto", columns_rutas.Kms_reparto);
    tree6->append_column("Kilometros Cobro", columns_rutas.Kms_cobro);
    rut->carga_datos(id);
    for (size_t i = 0; i < rut->get_id().size(); i++)
    {
        row = *(ListRutas->append());
        row[columns_rutas.Id] = rut->get_id()[i];
        row[columns_rutas.Origen] = rut->get_origen()[i];
        row[columns_rutas.Destino] = rut->get_destino()[i];
        row[columns_rutas.Distancia] = rut->get_distancia()[i];
        row[columns_rutas.Kms] = rut->get_kms()[i];
        row[columns_rutas.Kms_reparto] = rut->get_kms_reparto()[i];
        row[columns_rutas.Kms_cobro] = rut->get_kms_cobro()[i];
    }
}