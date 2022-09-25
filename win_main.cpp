#include "win_main.hpp"
//#include "hpdf.h"
#include <xlnt/xlnt.hpp>
#include "pdf/pdf.hpp"

win_main::win_main(std::string id)
{
	this->id = id;
	llena_widgets();
	conecta_senales();
}

win_main::~win_main()
{
}

void win_main::llena_widgets()
{
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
	ui->constructor->get_widget("cal", cal);
	ui->constructor->get_widget("pop_cal", pop_cal);
	ui->constructor->get_widget("stack_cat_1", stack_cat_1);
	ui->constructor->get_widget("stack_cat_2", stack_cat_2);
	ui->constructor->get_widget("stack_cat_3", stack_cat_3);
	ui->constructor->get_widget("stack_cat_4", stack_cat_4);
	ui->constructor->get_widget("stack_cat_5", stack_cat_5);
	ui->constructor->get_widget("stack_cat_6", stack_cat_6);
	ui->constructor->get_widget("stack_cat_7", stack_cat_7);
	ui->constructor->get_widget("stack_cat_8", stack_cat_8);
	ui->constructor->get_widget("stack_cat_9", stack_cat_9);
	ui->constructor->get_widget("stack_cat_10", stack_cat_10);
	ui->constructor->get_widget("btn_edit_1", btn_edit_1);
	ui->constructor->get_widget("btn_edit_2", btn_edit_2);
	ui->constructor->get_widget("btn_edit_3", btn_edit_3);
	ui->constructor->get_widget("btn_edit_4", btn_edit_4);
	ui->constructor->get_widget("btn_edit_5", btn_edit_5);
	ui->constructor->get_widget("btn_edit_6", btn_edit_6);
	ui->constructor->get_widget("btn_edit_7", btn_edit_7);
	ui->constructor->get_widget("btn_edit_8", btn_edit_8);
	ui->constructor->get_widget("btn_edit_9", btn_edit_9);
	ui->constructor->get_widget("btn_edit_10", btn_edit_10);
	ui->constructor->get_widget("btn_remove_1", btn_remove_1);
	ui->constructor->get_widget("btn_remove_2", btn_remove_2);
	ui->constructor->get_widget("btn_remove_3", btn_remove_3);
	ui->constructor->get_widget("btn_remove_4", btn_remove_4);
	ui->constructor->get_widget("btn_remove_5", btn_remove_5);
	ui->constructor->get_widget("btn_remove_6", btn_remove_6);
	ui->constructor->get_widget("btn_remove_7", btn_remove_7);
	ui->constructor->get_widget("btn_remove_8", btn_remove_8);
	ui->constructor->get_widget("btn_remove_9", btn_remove_9);
	ui->constructor->get_widget("btn_remove_10", btn_remove_10);
	ui->constructor->get_widget("box_opcion1", box_opcion1);
	ui->constructor->get_widget("box_opcion2", box_opcion2);
	ui->constructor->get_widget("box_opcion3", box_opcion3);
	ui->constructor->get_widget("box_opcion4", box_opcion4);
	ui->constructor->get_widget("box_opcion5", box_opcion5);
	ui->constructor->get_widget("box_opcion6", box_opcion6);
	ui->constructor->get_widget("box_opcion7", box_opcion7);
	ui->constructor->get_widget("box_opcion8", box_opcion8);
	ui->constructor->get_widget("box_opcion9", box_opcion9);
	ui->constructor->get_widget("box_opcion10", box_opcion10);
	ui->constructor->get_widget("btn_print", btn_print);
	ui->constructor->get_widget("btn_excel", btn_excel);
	ui->constructor->get_widget("btn_back_1", btn_back_1);
	ui->constructor->get_widget("btn_back_2", btn_back_2);
	ui->constructor->get_widget("btn_back_3", btn_back_3);
	ui->constructor->get_widget("btn_back_4", btn_back_4);
	ui->constructor->get_widget("btn_back_5", btn_back_5);
	ui->constructor->get_widget("btn_back_6", btn_back_6);
	ui->constructor->get_widget("btn_back_7", btn_back_7);
	ui->constructor->get_widget("btn_back_8", btn_back_8);
	ui->constructor->get_widget("btn_back_9", btn_back_9);
	ui->constructor->get_widget("btn_back_10", btn_back_10);
}

void win_main::conecta_senales()
{
	m_connection_timeout = Glib::signal_timeout().connect(sigc::mem_fun(*this, &win_main::on_timeout), 75);
	win_operacion->signal_delete_event().connect(sigc::mem_fun(*this, &win_main::cierra_app));
	toogle_sidebar->signal_toggled().connect(sigc::mem_fun(*this, &win_main::on_toogle_sidebar_toggled));
	btn_add1->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_add1_clicked));
	btn_add2->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_add2_clicked));
	btn_add3->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_add3_clicked));
	btn_add4->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_add4_clicked));
	btn_add5->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_add5_clicked));
	btn_add6->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_add6_clicked));
	btn_add7->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_add7_clicked));
	btn_add8->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_add8_clicked));
	btn_add9->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_add9_clicked));
	btn_edit_1->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_edit_1_clicked));
	btn_edit_2->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_edit_2_clicked));
	btn_edit_3->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_edit_3_clicked));
	btn_edit_4->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_edit_4_clicked));
	btn_edit_5->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_edit_5_clicked));
	btn_edit_6->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_edit_6_clicked));
	btn_edit_7->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_edit_7_clicked));
	btn_edit_8->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_edit_8_clicked));
	btn_edit_9->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_edit_9_clicked));
	// btn_edit_10->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_edit_10_clicked));
	btn_remove_1->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_remove_1_clicked));
	btn_remove_2->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_remove_2_clicked));
	btn_remove_3->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_remove_3_clicked));
	btn_remove_4->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_remove_4_clicked));
	btn_remove_5->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_remove_5_clicked));
	btn_remove_6->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_remove_6_clicked));
	btn_remove_7->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_remove_7_clicked));
	btn_remove_8->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_remove_8_clicked));
	btn_remove_9->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_remove_9_clicked));
	// btn_remove_10->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_remove_10_clicked));
	btn_back_1->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_back_1_clicked));
	btn_back_2->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_back_2_clicked));
	btn_back_3->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_back_3_clicked));
	btn_back_4->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_back_4_clicked));
	btn_back_5->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_back_5_clicked));
	btn_back_6->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_back_6_clicked));
	btn_back_7->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_back_7_clicked));
	btn_back_8->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_back_8_clicked));
	btn_back_9->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_back_9_clicked));
	// btn_back_10->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_back_10_clicked));
	btn_print->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_print_clicked));
	btn_excel->signal_clicked().connect(sigc::mem_fun(*this, &win_main::on_btn_excel_clicked));
	ety_ope_fecha->signal_icon_press().connect(sigc::mem_fun(*this, &win_main::on_ety_ope_fecha_icon_press));
	cal->signal_day_selected_double_click().connect(sigc::mem_fun(*this, &win_main::on_cal_day_selected_double_click));
	bar_info->signal_response().connect(sigc::mem_fun(*this, &win_main::on_bar_info_response));
	tree1->get_selection()->signal_changed().connect(sigc::mem_fun(*this, &win_main::on_treeview1_selection_changed));
	tree2->get_selection()->signal_changed().connect(sigc::mem_fun(*this, &win_main::on_treeview2_selection_changed));
	tree3->get_selection()->signal_changed().connect(sigc::mem_fun(*this, &win_main::on_treeview3_selection_changed));
	tree4->get_selection()->signal_changed().connect(sigc::mem_fun(*this, &win_main::on_treeview4_selection_changed));
	tree5->get_selection()->signal_changed().connect(sigc::mem_fun(*this, &win_main::on_treeview5_selection_changed));
	tree6->get_selection()->signal_changed().connect(sigc::mem_fun(*this, &win_main::on_treeview6_selection_changed));
	tree7->get_selection()->signal_changed().connect(sigc::mem_fun(*this, &win_main::on_treeview7_selection_changed));
	tree8->get_selection()->signal_changed().connect(sigc::mem_fun(*this, &win_main::on_treeview8_selection_changed));
	tree9->get_selection()->signal_changed().connect(sigc::mem_fun(*this, &win_main::on_treeview9_selection_changed));
	// tree10->get_selection()->signal_changed().connect(sigc::mem_fun(*this, &win_main::on_treeview10_selection_changed));
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
                                spinner_login->stop(); });
	hilo->detach();
	//hilo->join();
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
	mutex->try_lock();
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
	tra->getNo_eco().clear();
	tra->getmarca().clear();
	tra->getmodelo().clear();
	tra->getno_placas().clear();
	tra->getno_tc().clear();
	tra->getfo_verifica().clear();
	Gtk::TreeView::Column *pColumn = tree1->get_column(0);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_tractor.No_economico);
	}
	pColumn = tree1->get_column(1);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_tractor.Marca);
	}
	pColumn = tree1->get_column(2);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_tractor.Modelo);
	}
	pColumn = tree1->get_column(3);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_tractor.No_placas);
	}
	pColumn = tree1->get_column(4);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_tractor.No_tc);
	}
	pColumn = tree1->get_column(5);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_tractor.Folio_verificacion);
	}
	mutex->unlock();
}

void win_main::llena_remolque()
{
	mutex->try_lock();
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
	remo->getNo_eco().clear();
	remo->getmarca().clear();
	remo->getmodelo().clear();
	remo->getno_placas().clear();
	remo->getno_tc().clear();
	remo->getfo_verifica().clear();
	Gtk::TreeView::Column *pColumn = tree2->get_column(0);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_remolque.No_economico);
	}
	pColumn = tree2->get_column(1);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_remolque.Marca);
	}
	pColumn = tree2->get_column(2);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_remolque.Modelo);
	}
	pColumn = tree2->get_column(3);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_remolque.No_placas);
	}
	pColumn = tree2->get_column(4);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_remolque.No_tc);
	}
	pColumn = tree2->get_column(5);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_remolque.Folio_verificacion);
	}
	mutex->unlock();
}

void win_main::llena_operadores()
{
	mutex->try_lock();
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
	ope->getid().clear();
	ope->getnombre().clear();
	ope->getrfc().clear();
	ope->getcurp().clear();
	ope->getno_imss().clear();
	ope->getno_licensia().clear();
	ope->getfecha().clear();
	Gtk::TreeView::Column *pColumn = tree3->get_column(0);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_operador.Id);
	}
	pColumn = tree3->get_column(1);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_operador.Nombre);
	}
	pColumn = tree3->get_column(2);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_operador.Rfc);
	}
	pColumn = tree3->get_column(3);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_operador.Curp);
	}
	pColumn = tree3->get_column(4);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_operador.No_imss);
	}
	pColumn = tree3->get_column(5);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_operador.No_licen);
	}
	pColumn = tree3->get_column(6);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_operador.Fecha);
	}
	mutex->unlock();
}

void win_main::llena_ayudantes()
{
	mutex->try_lock();
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
	ayu->get_id().clear();
	ayu->get_nombre().clear();
	ayu->get_rfc().clear();
	ayu->get_no_imss().clear();
	ayu->get_otro().clear();
	Gtk::TreeView::Column *pColumn = tree4->get_column(0);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_ayudante.Id);
	}
	pColumn = tree4->get_column(1);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_ayudante.Nombre);
	}
	pColumn = tree4->get_column(2);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_ayudante.Rfc);
	}
	pColumn = tree4->get_column(3);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_ayudante.No_imss);
	}
	pColumn = tree4->get_column(4);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_ayudante.Otro);
	}
	mutex->unlock();
}

void win_main::llena_poblaciones()
{
	mutex->try_lock();
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
		cb_rut_origen->append(pob->get_estado()[i]);
		cb_rut_destino->append(pob->get_estado()[i]);
	}
	pob->get_id().clear();
	pob->get_nombre().clear();
	pob->get_estado().clear();
	pob->get_distancia().clear();
	Gtk::TreeView::Column *pColumn = tree5->get_column(0);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_poblacion.Id);
	}
	pColumn = tree5->get_column(1);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_poblacion.Nombre);
	}
	pColumn = tree5->get_column(2);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_poblacion.Estado);
	}
	pColumn = tree5->get_column(3);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_poblacion.Distancia);
	}
	mutex->unlock();
}

void win_main::llena_rutas()
{
	mutex->try_lock();
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
	rut->get_id().clear();
	rut->get_origen().clear();
	rut->get_destino().clear();
	rut->get_distancia().clear();
	rut->get_tiempo_estimado().clear();
	Gtk::TreeView::Column *pColumn = tree6->get_column(0);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_rutas.Id);
	}
	pColumn = tree6->get_column(1);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_rutas.Origen);
	}
	pColumn = tree6->get_column(2);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_rutas.Destino);
	}
	pColumn = tree6->get_column(3);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_rutas.Distancia);
	}
	pColumn = tree6->get_column(4);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_rutas.Kms);
	}
	mutex->unlock();
}

void win_main::llena_productos()
{
	mutex->try_lock();
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
	pro->get_id().clear();
	pro->get_nombre().clear();
	pro->get_unidad().clear();
	pro->get_tarifa().clear();
	pro->get_otro().clear();
	Gtk::TreeView::Column *pColumn = tree7->get_column(0);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_productos.Id);
	}
	pColumn = tree7->get_column(1);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_productos.Nombre);
	}
	pColumn = tree7->get_column(2);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_productos.Unidad);
	}
	pColumn = tree7->get_column(3);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_productos.Tarifa);
	}
	pColumn = tree7->get_column(4);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_productos.Otro);
	}
	mutex->unlock();
}

void win_main::llena_clientes()
{
	mutex->try_lock();
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
	cli->get_id().clear();
	cli->get_razon_social().clear();
	cli->get_rfc().clear();
	cli->get_giro().clear();
	cli->get_direccion_fiscal().clear();
	cli->get_tarifa().clear();
	cli->get_tipo_cliente().clear();
	cli->get_domicilio().clear();
	Gtk::TreeView::Column *pColumn = tree8->get_column(0);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_clientes.Id);
	}
	pColumn = tree8->get_column(1);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_clientes.Razon_social);
	}
	pColumn = tree8->get_column(2);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_clientes.Rfc);
	}
	pColumn = tree8->get_column(3);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_clientes.Giro);
	}
	pColumn = tree8->get_column(4);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_clientes.Direccion_fiscal);
	}
	pColumn = tree8->get_column(5);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_clientes.Tarifa);
	}
	pColumn = tree8->get_column(6);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_clientes.Tipo_cliente);
	}
	pColumn = tree8->get_column(7);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_clientes.Domicilio);
	}
	mutex->unlock();
}

void win_main::llena_tarifas()
{
	mutex->try_lock();
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
	tar->get_id().clear();
	tar->get_tarifa_tonelada().clear();
	tar->get_tarifa_litro().clear();
	tar->get_tarifa_viaje().clear();
	tar->get_otro().clear();
	Gtk::TreeView::Column *pColumn = tree9->get_column(0);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_tarifas.Id);
	}
	pColumn = tree9->get_column(1);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_tarifas.Tarifa_tonelada);
	}
	pColumn = tree9->get_column(2);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_tarifas.Tarifa_litro);
	}
	pColumn = tree9->get_column(3);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_tarifas.Tarifa_viaje);
	}
	pColumn = tree9->get_column(4);
	if (pColumn)
	{
		pColumn->set_sort_column(columns_tarifas.Otro);
	}
	mutex->unlock();
}

void win_main::vacia_campos_tractor()
{
	ety_tra_marca->set_text("");
	ety_tra_modelo->set_text("");
	ety_tra_placas->set_text("");
	ety_tra_tarjeta->set_text("");
	spin_tar_verificacion->set_value(0);
}

void win_main::vacia_campos_remolque()
{
	ety_remo_marca->set_text("");
	ety_remo_modelo->set_text("");
	ety_remo_placas->set_text("");
	ety_remo_tarjeta->set_text("");
	spin_remo_verificacion->set_value(0);
}

void win_main::vacia_campos_operador()
{
	ety_ope_nombre->set_text("");
	ety_ope_rfc->set_text("");
	ety_ope_curp->set_text("");
	ety_ope_imss->set_text("");
	spin_ope_licencia->set_value(0);
	ety_ope_fecha->set_text("");
}

void win_main::vacia_campos_ayudante()
{
	ety_ayu_nombre->set_text("");
	ety_ayu_rfc->set_text("");
	ety_ayu_imss->set_text("");
	ety_ayu_otro->set_text("");
}

void win_main::vacia_campos_poblacion()
{
	ety_pob_nombre->set_text("");
	ety_pob_estado->set_text("");
	spin_pob_distancia->set_value(0);
}

void win_main::vacia_campos_ruta()
{
	cb_rut_origen->set_active(0);
	cb_rut_destino->set_active(0);
	ety_rut_distancia->set_text("");
	spin_rut_hora->set_value(0);
	spin_rut_min->set_value(0);
	spin_rut_seg->set_value(0);
}

void win_main::vacia_campos_producto()
{
	ety_pro_nombre->set_text("");
	cb_pro_unidad->set_active(0);
	spin_pro_tarifa->set_value(0);
	ety_pro_otro->set_text("");
}

void win_main::vacia_campos_cliente()
{
	ety_cli_razon->set_text("");
	ety_cli_rfc->set_text("");
	ety_cli_giro->set_text("");
	ety_cli_direccion->set_text("");
	spin_cli_tarifa->set_value(0);
	cb_cli_tipo->set_active(0);
	ety_cli_domicilio->set_text("");
}

void win_main::vacia_campos_tarifa()
{
	spin_tar_tonelada->set_value(0);
	spin_tar_litro->set_value(0);
	spin_tar_viaje->set_value(0);
	spin_tar_otro->set_text("");
}

void win_main::add_tractor(std::string marca, std::string modelo, std::string placas, std::string tarjeta, std::string folio)
{
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

void win_main::add_remolque(std::string marca, std::string modelo, std::string placas, std::string tarjeta, std::string folio)
{
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

void win_main::add_operador(std::string nombre, std::string rfc, std::string curp, std::string imss, std::string licencia, std::string fecha)
{
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

void win_main::add_ayudante(std::string nombre, std::string rfc, std::string imss, std::string otro)
{
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

void win_main::add_poblacion(std::string nombre, std::string estado, std::string distancia)
{
	row = *(ListPoblacion->append());
	row[columns_poblacion.Id] = std::to_string(pob->getsize(id));
	row[columns_poblacion.Nombre] = nombre;
	row[columns_poblacion.Estado] = estado;
	row[columns_poblacion.Distancia] = distancia;
	cb_rut_origen->append(estado);
	cb_rut_destino->append(estado);
}

void win_main::add_ruta(std::string origen, std::string destino, std::string distancia, std::string fecha)
{
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

void win_main::add_producto(std::string nombre, std::string unidad, std::string tarifa, std::string otro)
{
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

void win_main::add_cliente(std::string razon, std::string rfc, std::string giro, std::string direccion, std::string tarifa, std::string tipo, std::string domicilio)
{
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

void win_main::add_tarifa(std::string tonelada, std::string litro, std::string viaje, std::string otro)
{
	row = *(ListTarifas->append());
	row[columns_tarifas.Id] = std::to_string(tar->getsize(id));
	row[columns_tarifas.Tarifa_tonelada] = tonelada;
	row[columns_tarifas.Tarifa_litro] = litro;
	row[columns_tarifas.Tarifa_viaje] = viaje;
	row[columns_tarifas.Otro] = otro;
}

void win_main::on_toogle_sidebar_toggled()
{
	if (toogle_sidebar->get_active())
	{
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
	}
	else
	{
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

void win_main::on_btn_add1_clicked()
{
	reveal_info->set_reveal_child(false);
	if (ety_tra_marca->get_text() == "" && ety_tra_modelo->get_text() == "" && ety_tra_placas->get_text() == "" && ety_tra_tarjeta->get_text() == "")
	{
		Gtk::MessageDialog dialog(*win_operacion, "Faltan Datos.", false, Gtk::MESSAGE_WARNING, Gtk::BUTTONS_OK);
		dialog.set_title("ATA");
		dialog.set_secondary_text("No se puede dejar ningun campo vacio");
		dialog.run();
	}
	else
	{
		try
		{
			Gtk::MessageDialog dialog(*win_operacion, "¿Desea agregar este registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
			dialog.set_title("ATA");
			dialog.set_secondary_text("Los datos se agregaran a la base de datos.");
			if (dialog.run() == Gtk::RESPONSE_YES)
			{
				tra->add_tractor(id, ety_tra_marca->get_text(), ety_tra_modelo->get_text(), ety_tra_placas->get_text(), ety_tra_tarjeta->get_text(), spin_tar_verificacion->get_text());
				add_tractor(ety_tra_marca->get_text(), ety_tra_modelo->get_text(), ety_tra_placas->get_text(), ety_tra_tarjeta->get_text(), spin_tar_verificacion->get_text());
				lbl_info->set_text("Tractor Agregado Correctamente");
				vacia_campos_tractor();
				bar_info->set_message_type(Gtk::MESSAGE_INFO);
				reveal_info->set_reveal_child(true);
			}
		}
		catch (const std::exception &e)
		{
			g_print(e.what());
			gtk_widget_error_bell(GTK_WIDGET(win_operacion->gobj()));
			lbl_info->set_text("Error al agregar tractor");
			bar_info->set_message_type(Gtk::MESSAGE_ERROR);
			reveal_info->set_reveal_child(true);
		}
	}
}

void win_main::on_btn_add2_clicked()
{
	reveal_info->set_reveal_child(false);
	if (ety_remo_marca->get_text() == "" && ety_remo_modelo->get_text() == "" && ety_remo_placas->get_text() == "" && ety_remo_tarjeta->get_text() == "")
	{
		Gtk::MessageDialog dialog(*win_operacion, "Faltan Daatos.", false, Gtk::MESSAGE_WARNING, Gtk::BUTTONS_OK);
		dialog.set_title("ATA");
		dialog.set_secondary_text("No se puede dejar ningun campo vacio");
		dialog.run();
	}
	else
	{
		try
		{
			Gtk::MessageDialog dialog(*win_operacion, "¿Desea agregar este registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
			dialog.set_title("ATA");
			dialog.set_secondary_text("Los datos se agregaran a la base de datos.");
			if (dialog.run() == Gtk::RESPONSE_YES)
			{
				remo->add_remolque(id, ety_remo_marca->get_text(), ety_remo_modelo->get_text(), ety_remo_placas->get_text(), ety_remo_tarjeta->get_text(), spin_remo_verificacion->get_text());
				add_remolque(ety_remo_marca->get_text(), ety_remo_modelo->get_text(), ety_remo_placas->get_text(), ety_remo_tarjeta->get_text(), spin_remo_verificacion->get_text());
				lbl_info->set_text("Remolque Agregado Correctamente");
				vacia_campos_remolque();
				bar_info->set_message_type(Gtk::MESSAGE_INFO);
				reveal_info->set_reveal_child(true);
			}
		}
		catch (const std::exception &e)
		{
			g_print(e.what());
			gtk_widget_error_bell(GTK_WIDGET(win_operacion->gobj()));
			lbl_info->set_text("Error al agregar remolque");
			bar_info->set_message_type(Gtk::MESSAGE_ERROR);
			reveal_info->set_reveal_child(true);
		}
	}
}

void win_main::on_btn_add3_clicked()
{
	reveal_info->set_reveal_child(false);
	if (ety_ope_nombre->get_text() == "" && ety_ope_rfc->get_text() == "" && ety_ope_curp->get_text() == "" && ety_ope_fecha->get_text() == "")
	{
		Gtk::MessageDialog dialog(*win_operacion, "Faltan Daatos.", false, Gtk::MESSAGE_WARNING, Gtk::BUTTONS_OK);
		dialog.set_title("ATA");
		dialog.set_secondary_text("No se puede dejar ningun campo vacio");
		dialog.run();
	}
	else
	{
		try
		{
			Gtk::MessageDialog dialog(*win_operacion, "¿Desea agregar este registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
			dialog.set_title("ATA");
			dialog.set_secondary_text("Los datos se agregaran a la base de datos.");
			if (dialog.run() == Gtk::RESPONSE_YES)
			{
				ope->add_operador(id, ety_ope_nombre->get_text(), ety_ope_rfc->get_text(), ety_ope_curp->get_text(), ety_ope_imss->get_text(), spin_ope_licencia->get_text(), ety_ope_fecha->get_text());
				add_operador(ety_ope_nombre->get_text(), ety_ope_rfc->get_text(), ety_ope_curp->get_text(), ety_ope_imss->get_text(), spin_ope_licencia->get_text(), ety_ope_fecha->get_text());
				lbl_info->set_text("Operador Agregado Correctamente");
				vacia_campos_operador();
				bar_info->set_message_type(Gtk::MESSAGE_INFO);
				reveal_info->set_reveal_child(true);
			}
		}
		catch (const std::exception &e)
		{
			g_print(e.what());
			gtk_widget_error_bell(GTK_WIDGET(win_operacion->gobj()));
			lbl_info->set_text("Error al agregar operador");
			bar_info->set_message_type(Gtk::MESSAGE_ERROR);
			reveal_info->set_reveal_child(true);
		}
	}
}

void win_main::on_btn_add4_clicked()
{
	reveal_info->set_reveal_child(false);
	if (ety_ayu_nombre->get_text() == "" && ety_ayu_rfc->get_text() == "" && ety_ayu_imss->get_text() == "" && ety_ayu_otro->get_text() == "")
	{
		Gtk::MessageDialog dialog(*win_operacion, "Faltan Datos.", false, Gtk::MESSAGE_WARNING, Gtk::BUTTONS_OK);
		dialog.set_title("ATA");
		dialog.set_secondary_text("No se puede dejar ningun campo vacio");
		dialog.run();
	}
	else
	{
		try
		{
			Gtk::MessageDialog dialog(*win_operacion, "¿Desea agregar este registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
			dialog.set_title("ATA");
			dialog.set_secondary_text("Los datos se agregaran a la base de datos.");
			if (dialog.run() == Gtk::RESPONSE_YES)
			{
				ayu->add_ayudante(id, ety_ayu_nombre->get_text(), ety_ayu_rfc->get_text(), ety_ayu_imss->get_text(), ety_ayu_otro->get_text());
				add_ayudante(ety_ayu_nombre->get_text(), ety_ayu_rfc->get_text(), ety_ayu_imss->get_text(), ety_ayu_otro->get_text());
				lbl_info->set_text("Ayudante Agregado Correctamente");
				vacia_campos_ayudante();
				bar_info->set_message_type(Gtk::MESSAGE_INFO);
				reveal_info->set_reveal_child(true);
			}
		}
		catch (const std::exception &e)
		{
			g_print(e.what());
			gtk_widget_error_bell(GTK_WIDGET(win_operacion->gobj()));
			lbl_info->set_text("Error al agregar ayudante");
			bar_info->set_message_type(Gtk::MESSAGE_ERROR);
			reveal_info->set_reveal_child(true);
		}
	}
}

void win_main::on_btn_add5_clicked()
{
	reveal_info->set_reveal_child(false);
	if (ety_pob_nombre->get_text() == "" && ety_pob_estado->get_text() == "" && spin_pob_distancia->get_text() == "")
	{
		Gtk::MessageDialog dialog(*win_operacion, "Faltan Datos.", false, Gtk::MESSAGE_WARNING, Gtk::BUTTONS_OK);
		dialog.set_title("ATA");
		dialog.set_secondary_text("No se puede dejar ningun campo vacio");
		dialog.run();
	}
	else
	{
		try
		{
			Gtk::MessageDialog dialog(*win_operacion, "¿Desea agregar este registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
			dialog.set_title("ATA");
			dialog.set_secondary_text("Los datos se agregaran a la base de datos.");
			if (dialog.run() == Gtk::RESPONSE_YES)
			{
				pob->add_poblacion(id, ety_pob_nombre->get_text(), ety_pob_estado->get_text(), spin_pob_distancia->get_text());
				add_poblacion(ety_pob_nombre->get_text(), ety_pob_estado->get_text(), spin_pob_distancia->get_text());
				lbl_info->set_text("Poblado Agregado Correctamente");
				vacia_campos_poblacion();
				bar_info->set_message_type(Gtk::MESSAGE_INFO);
				reveal_info->set_reveal_child(true);
			}
		}
		catch (const std::exception &e)
		{
			g_print(e.what());
			gtk_widget_error_bell(GTK_WIDGET(win_operacion->gobj()));
			lbl_info->set_text("Error al agregar poblado");
			bar_info->set_message_type(Gtk::MESSAGE_ERROR);
			reveal_info->set_reveal_child(true);
		}
	}
}

void win_main::on_btn_add6_clicked()
{
	reveal_info->set_reveal_child(false);
	if (cb_rut_origen->get_active_text() == "" && cb_rut_destino->get_active_text() == "" && ety_rut_distancia->get_text() == "")
	{
		Gtk::MessageDialog dialog(*win_operacion, "Faltan Datos.", false, Gtk::MESSAGE_WARNING, Gtk::BUTTONS_OK);
		dialog.set_title("ATA");
		dialog.set_secondary_text("No se puede dejar ningun campo vacio");
		dialog.run();
	}
	else
	{
		try

		{
			Gtk::MessageDialog dialog(*win_operacion, "¿Desea agregar este registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
			dialog.set_title("ATA");
			dialog.set_secondary_text("Los datos se agregaran a la base de datos.");
			if (dialog.run() == Gtk::RESPONSE_YES)
			{
				std::string hora = spin_rut_hora->get_text() + ":" + spin_rut_min->get_text() + ":" + spin_rut_seg->get_text();
				rut->add_ruta(id, cb_rut_origen->get_active_text(), cb_rut_destino->get_active_text(), ety_rut_distancia->get_text(), hora);
				add_ruta(cb_rut_origen->get_active_text(), cb_rut_destino->get_active_text(), ety_rut_distancia->get_text(), hora);
				lbl_info->set_text("Ruta Agregada Correctamente");
				vacia_campos_ruta();
				bar_info->set_message_type(Gtk::MESSAGE_INFO);
				reveal_info->set_reveal_child(true);
			}
		}
		catch (const std::exception &e)
		{
			g_print(e.what());
			gtk_widget_error_bell(GTK_WIDGET(win_operacion->gobj()));
			lbl_info->set_text("Error al agregar ruta");
			bar_info->set_message_type(Gtk::MESSAGE_ERROR);
			reveal_info->set_reveal_child(true);
		}
	}
}

void win_main::on_btn_add7_clicked()
{
	reveal_info->set_reveal_child(false);
	if (ety_pro_nombre->get_text() == "" && cb_pro_unidad->get_active_text() == "" && spin_pro_tarifa->get_text() == "" && ety_pro_otro->get_text() == "")
	{
		Gtk::MessageDialog dialog(*win_operacion, "Faltan Datos.", false, Gtk::MESSAGE_WARNING, Gtk::BUTTONS_OK);
		dialog.set_title("ATA");
		dialog.set_secondary_text("No se puede dejar ningun campo vacio");
		dialog.run();
	}
	else
	{
		try
		{
			Gtk::MessageDialog dialog(*win_operacion, "¿Desea agregar este registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
			dialog.set_title("ATA");
			dialog.set_secondary_text("Los datos se agregaran a la base de datos.");
			if (dialog.run() == Gtk::RESPONSE_YES)
			{
				pro->add_producto(id, ety_pro_nombre->get_text(), cb_pro_unidad->get_active_text(), spin_pro_tarifa->get_text(), ety_pro_otro->get_text());
				add_producto(ety_pro_nombre->get_text(), cb_pro_unidad->get_active_text(), spin_pro_tarifa->get_text(), ety_pro_otro->get_text());
				lbl_info->set_text("Producto Agregado Correctamente");
				vacia_campos_producto();
				bar_info->set_message_type(Gtk::MESSAGE_INFO);
				reveal_info->set_reveal_child(true);
			}
		}
		catch (const std::exception &e)
		{
			g_print(e.what());
			gtk_widget_error_bell(GTK_WIDGET(win_operacion->gobj()));
			lbl_info->set_text("Error al agregar producto");
			bar_info->set_message_type(Gtk::MESSAGE_ERROR);
			reveal_info->set_reveal_child(true);
		}
	}
}

void win_main::on_btn_add8_clicked()
{
	reveal_info->set_reveal_child(false);
	if (ety_cli_razon->get_text() == "" && ety_cli_rfc->get_text() == "" && ety_cli_giro->get_text() == "" && ety_cli_direccion->get_text() == "" &&
		spin_cli_tarifa->get_text() == "0.00" && cb_cli_tipo->get_active_text() == "" && ety_cli_domicilio->get_text() == "")
	{
		Gtk::MessageDialog dialog(*win_operacion, "Faltan Datos.", false, Gtk::MESSAGE_WARNING, Gtk::BUTTONS_OK);
		dialog.set_title("ATA");
		dialog.set_secondary_text("No se puede dejar ningun campo vacio");
		dialog.run();
	}
	else
	{
		try
		{
			Gtk::MessageDialog dialog(*win_operacion, "¿Desea agregar este registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
			dialog.set_title("ATA");
			dialog.set_secondary_text("Los datos se agregaran a la base de datos.");
			if (dialog.run() == Gtk::RESPONSE_YES)
			{
				cli->add_cliente(id, ety_cli_razon->get_text(), ety_cli_rfc->get_text(), ety_cli_giro->get_text(), ety_cli_direccion->get_text(), spin_cli_tarifa->get_text(), cb_cli_tipo->get_active_text(), ety_cli_domicilio->get_text());
				add_cliente(ety_cli_razon->get_text(), ety_cli_rfc->get_text(), ety_cli_giro->get_text(), ety_cli_direccion->get_text(), spin_cli_tarifa->get_text(), cb_cli_tipo->get_active_text(), ety_cli_domicilio->get_text());
				lbl_info->set_text("Cliente Agregado Correctamente");
				vacia_campos_cliente();
				bar_info->set_message_type(Gtk::MESSAGE_INFO);
				reveal_info->set_reveal_child(true);
			}
		}
		catch (const std::exception &e)
		{
			g_print(e.what());
			gtk_widget_error_bell(GTK_WIDGET(win_operacion->gobj()));
			lbl_info->set_text("Error al agregar cliente");
			bar_info->set_message_type(Gtk::MESSAGE_ERROR);
			reveal_info->set_reveal_child(true);
		}
	}
}

void win_main::on_btn_add9_clicked()
{
	reveal_info->set_reveal_child(false);
	if (spin_tar_tonelada->get_text() == "0.00" && spin_tar_litro->get_text() == "0.00" && spin_tar_viaje->get_text() == "0.00" && spin_tar_otro->get_text() == "0.00")
	{
		Gtk::MessageDialog dialog(*win_operacion, "Faltan Datos.", false, Gtk::MESSAGE_WARNING, Gtk::BUTTONS_OK);
		dialog.set_title("ATA");
		dialog.set_secondary_text("No se puede dejar ningun campo vacio");
		dialog.run();
	}
	else
	{
		try
		{
			Gtk::MessageDialog dialog(*win_operacion, "¿Desea agregar este registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
			dialog.set_title("ATA");
			dialog.set_secondary_text("Los datos se agregaran a la base de datos.");
			if (dialog.run() == Gtk::RESPONSE_YES)
			{
				tar->add_tarifa(id, spin_tar_tonelada->get_text(), spin_tar_litro->get_text(), spin_tar_viaje->get_text(), spin_tar_otro->get_text());
				add_tarifa(spin_tar_tonelada->get_text(), spin_tar_litro->get_text(), spin_tar_viaje->get_text(), spin_tar_otro->get_text());
				lbl_info->set_text("Tarifa Agregada Correctamente");
				vacia_campos_tarifa();
				bar_info->set_message_type(Gtk::MESSAGE_INFO);
				reveal_info->set_reveal_child(true);
			}
		}
		catch (const std::exception &e)
		{
			g_print(e.what());
			gtk_widget_error_bell(GTK_WIDGET(win_operacion->gobj()));
			lbl_info->set_text("Error al agregar tarifa");
			bar_info->set_message_type(Gtk::MESSAGE_ERROR);
			reveal_info->set_reveal_child(true);
		}
	}
}

void win_main::on_btn_edit_1_clicked()
{
	reveal_info->set_reveal_child(false);
	Gtk::MessageDialog dialog(*win_operacion, "¿Desea editar el registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
	dialog.set_title("ATA");
	dialog.set_icon_name("dialog-question");
	dialog.set_secondary_text("Se editara el registro seleccionado");
	if (dialog.run() == Gtk::RESPONSE_YES)
	{
		try
		{
			tra->update_tractor(id, lbl1->get_text().substr(14, 24).c_str(), ety_tra_marca->get_text(), ety_tra_modelo->get_text(), ety_tra_placas->get_text(), ety_tra_tarjeta->get_text(), spin_tar_verificacion->get_text());
			edit_tractor(ety_tra_marca->get_text(), ety_tra_modelo->get_text(), ety_tra_placas->get_text(), ety_tra_tarjeta->get_text(), spin_tar_verificacion->get_text());
			lbl_info->set_text("Tractor Editado Correctamente");
			bar_info->set_message_type(Gtk::MESSAGE_INFO);
			reveal_info->set_reveal_child(true);
		}
		catch (const std::exception &e)
		{
			g_print(e.what());
			gtk_widget_error_bell(GTK_WIDGET(win_operacion->gobj()));
			lbl_info->set_text("Error al editar tractor");
			bar_info->set_message_type(Gtk::MESSAGE_ERROR);
			reveal_info->set_reveal_child(true);
			std::cerr << e.what() << '\n';
		}
	}
}

void win_main::on_btn_edit_2_clicked()
{
	reveal_info->set_reveal_child(false);
	Gtk::MessageDialog dialog(*win_operacion, "¿Desea editar el registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
	dialog.set_title("ATA");
	dialog.set_icon_name("dialog-question");
	dialog.set_secondary_text("Se editara el registro seleccionado");
	if (dialog.run() == Gtk::RESPONSE_YES)
	{
		try
		{
			remo->update_remolque(id, lbl2->get_text().substr(14, 24).c_str(), ety_remo_marca->get_text(), ety_remo_modelo->get_text(), ety_remo_placas->get_text(), ety_remo_tarjeta->get_text(), spin_remo_verificacion->get_text());
			edit_remolque(ety_remo_marca->get_text(), ety_remo_modelo->get_text(), ety_remo_placas->get_text(), ety_remo_tarjeta->get_text(), spin_remo_verificacion->get_text());
			lbl_info->set_text("Remolque Editado Correctamente");
			bar_info->set_message_type(Gtk::MESSAGE_INFO);
			reveal_info->set_reveal_child(true);
		}
		catch (const std::exception &e)
		{
			g_print(e.what());
			gtk_widget_error_bell(GTK_WIDGET(win_operacion->gobj()));
			lbl_info->set_text("Error al editar remolque");
			bar_info->set_message_type(Gtk::MESSAGE_ERROR);
			reveal_info->set_reveal_child(true);
			std::cerr << e.what() << '\n';
		}
	}
}

void win_main::on_btn_edit_3_clicked()
{
	reveal_info->set_reveal_child(false);
	Gtk::MessageDialog dialog(*win_operacion, "¿Desea editar el registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
	dialog.set_title("ATA");
	dialog.set_icon_name("dialog-question");
	dialog.set_secondary_text("Se editara el registro seleccionado");
	if (dialog.run() == Gtk::RESPONSE_YES)
	{
		try
		{
			ope->update_operador(id, lbl3->get_text().substr(3, 13).c_str(), ety_ope_nombre->get_text(), ety_ope_rfc->get_text(), ety_ope_curp->get_text(), ety_ope_imss->get_text(), spin_ope_licencia->get_text(), ety_ope_fecha->get_text());
			edit_operador(ety_ope_nombre->get_text(), ety_ope_rfc->get_text(), ety_ope_curp->get_text(), ety_ope_imss->get_text(), spin_ope_licencia->get_text(), ety_ope_fecha->get_text());
			lbl_info->set_text("Operador Editado Correctamente");
			bar_info->set_message_type(Gtk::MESSAGE_INFO);
			reveal_info->set_reveal_child(true);
		}
		catch (const std::exception &e)
		{
			g_print(e.what());
			gtk_widget_error_bell(GTK_WIDGET(win_operacion->gobj()));
			lbl_info->set_text("Error al editar operador");
			bar_info->set_message_type(Gtk::MESSAGE_ERROR);
			reveal_info->set_reveal_child(true);
			std::cerr << e.what() << '\n';
		}
	}
}

void win_main::on_btn_edit_4_clicked()
{
	reveal_info->set_reveal_child(false);
	Gtk::MessageDialog dialog(*win_operacion, "¿Desea editar el registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
	dialog.set_title("ATA");
	dialog.set_icon_name("dialog-question");
	dialog.set_secondary_text("Se editara el registro seleccionado");
	if (dialog.run() == Gtk::RESPONSE_YES)
	{
		try
		{
			ayu->update_ayudante(id, lbl4->get_text().substr(3, 13).c_str(), ety_ayu_nombre->get_text(), ety_ayu_rfc->get_text(), ety_ayu_imss->get_text(), ety_ayu_otro->get_text());
			edit_ayudante(ety_ayu_nombre->get_text(), ety_ayu_rfc->get_text(), ety_ayu_imss->get_text(), ety_ayu_otro->get_text());
			lbl_info->set_text("Ayudante Editado Correctamente");
			bar_info->set_message_type(Gtk::MESSAGE_INFO);
			reveal_info->set_reveal_child(true);
		}
		catch (const std::exception &e)
		{
			g_print(e.what());
			gtk_widget_error_bell(GTK_WIDGET(win_operacion->gobj()));
			lbl_info->set_text("Error al editar ayudante");
			bar_info->set_message_type(Gtk::MESSAGE_ERROR);
			reveal_info->set_reveal_child(true);
			std::cerr << e.what() << '\n';
		}
	}
}

void win_main::on_btn_edit_5_clicked()
{
	reveal_info->set_reveal_child(false);
	Gtk::MessageDialog dialog(*win_operacion, "¿Desea editar el registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
	dialog.set_title("ATA");
	dialog.set_icon_name("dialog-question");
	dialog.set_secondary_text("Se editara el registro seleccionado");
	if (dialog.run() == Gtk::RESPONSE_YES)
	{
		try
		{
			pob->update_poblacion(id, lbl5->get_text().substr(3, 13).c_str(), ety_pob_nombre->get_text(), ety_pob_estado->get_text(), spin_pob_distancia->get_text());
			edit_poblacion(ety_pob_nombre->get_text(), ety_pob_estado->get_text(), spin_pob_distancia->get_text());
			lbl_info->set_text("Poblacion Agregada Correctamente");
			bar_info->set_message_type(Gtk::MESSAGE_INFO);
			reveal_info->set_reveal_child(true);
		}
		catch (const std::exception &e)
		{
			g_print(e.what());
			gtk_widget_error_bell(GTK_WIDGET(win_operacion->gobj()));
			lbl_info->set_text("Error al agregar poblacion");
			bar_info->set_message_type(Gtk::MESSAGE_ERROR);
			reveal_info->set_reveal_child(true);
			std::cerr << e.what() << '\n';
		}
	}
}

void win_main::on_btn_edit_6_clicked()
{
	reveal_info->set_reveal_child(false);
	Gtk::MessageDialog dialog(*win_operacion, "¿Desea editar el registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
	dialog.set_title("ATA");
	dialog.set_icon_name("dialog-question");
	dialog.set_secondary_text("Se editara el registro seleccionado");
	if (dialog.run() == Gtk::RESPONSE_YES)
	{
		try
		{
			std::string hora = spin_rut_hora->get_text() + ":" + spin_rut_min->get_text() + ":" + spin_rut_seg->get_text();
			rut->update_ruta(id, lbl6->get_text().substr(3, 13).c_str(), cb_rut_origen->get_active_text(), cb_rut_destino->get_active_text(), ety_rut_distancia->get_text(), hora);
			edit_ruta(cb_rut_origen->get_active_text(), cb_rut_destino->get_active_text(), ety_rut_distancia->get_text(), hora);
			lbl_info->set_text("Ruta Editada Correctamente");
			bar_info->set_message_type(Gtk::MESSAGE_INFO);
			reveal_info->set_reveal_child(true);
		}
		catch (const std::exception &e)
		{
			g_print(e.what());
			gtk_widget_error_bell(GTK_WIDGET(win_operacion->gobj()));
			lbl_info->set_text("Error al editar ruta");
			bar_info->set_message_type(Gtk::MESSAGE_ERROR);
			reveal_info->set_reveal_child(true);
			std::cerr << e.what() << '\n';
		}
	}
}

void win_main::on_btn_edit_7_clicked()
{
	reveal_info->set_reveal_child(false);
	Gtk::MessageDialog dialog(*win_operacion, "¿Desea editar el registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
	dialog.set_title("ATA");
	dialog.set_icon_name("dialog-question");
	dialog.set_secondary_text("Se editara el registro seleccionado");
	if (dialog.run() == Gtk::RESPONSE_YES)
	{
		try
		{
			pro->update_producto(id, lbl7->get_text().substr(3, 13).c_str(), ety_pro_nombre->get_text(), cb_pro_unidad->get_active_text(), spin_pro_tarifa->get_text(), ety_pro_otro->get_text());
			edit_producto(ety_pro_nombre->get_text(), cb_pro_unidad->get_active_text(), spin_pro_tarifa->get_text(), ety_pro_otro->get_text());
			lbl_info->set_text("Producto Editado Correctamente");
			bar_info->set_message_type(Gtk::MESSAGE_INFO);
			reveal_info->set_reveal_child(true);
		}
		catch (const std::exception &e)
		{
			g_print(e.what());
			gtk_widget_error_bell(GTK_WIDGET(win_operacion->gobj()));
			lbl_info->set_text("Error al editar producto");
			bar_info->set_message_type(Gtk::MESSAGE_ERROR);
			reveal_info->set_reveal_child(true);
			std::cerr << e.what() << '\n';
		}
	}
}

void win_main::on_btn_edit_8_clicked()
{
	reveal_info->set_reveal_child(false);
	Gtk::MessageDialog dialog(*win_operacion, "¿Desea editar el registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
	dialog.set_title("ATA");
	dialog.set_icon_name("dialog-question");
	dialog.set_secondary_text("Se editara el registro seleccionado");
	if (dialog.run() == Gtk::RESPONSE_YES)
	{
		try
		{
			cli->update_cliente(id, lbl8->get_text().substr(3, 13).c_str(), ety_cli_razon->get_text(), ety_cli_rfc->get_text(), ety_cli_giro->get_text(), ety_cli_direccion->get_text(), spin_cli_tarifa->get_text(), cb_cli_tipo->get_active_text(), ety_cli_domicilio->get_text());
			edit_cliente(ety_cli_razon->get_text(), ety_cli_rfc->get_text(), ety_cli_giro->get_text(), ety_cli_direccion->get_text(), spin_cli_tarifa->get_text(), cb_cli_tipo->get_active_text(), ety_cli_domicilio->get_text());
			lbl_info->set_text("Cliente Editado Correctamente");
			bar_info->set_message_type(Gtk::MESSAGE_INFO);
			reveal_info->set_reveal_child(true);
		}
		catch (const std::exception &e)
		{
			g_print(e.what());
			gtk_widget_error_bell(GTK_WIDGET(win_operacion->gobj()));
			lbl_info->set_text("Error al editar cliente");
			bar_info->set_message_type(Gtk::MESSAGE_ERROR);
			reveal_info->set_reveal_child(true);
			std::cerr << e.what() << '\n';
		}
	}
}

void win_main::on_btn_edit_9_clicked()
{
	reveal_info->set_reveal_child(false);
	Gtk::MessageDialog dialog(*win_operacion, "¿Desea editar el registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
	dialog.set_title("ATA");
	dialog.set_icon_name("dialog-question");
	dialog.set_secondary_text("Se editara el registro seleccionado");
	if (dialog.run() == Gtk::RESPONSE_YES)
	{
		try
		{
			tar->update_tarifa(id, lbl9->get_text().substr(3, 13).c_str(), spin_tar_tonelada->get_text(), spin_tar_litro->get_text(), spin_tar_viaje->get_text(), spin_tar_otro->get_text());
			edit_tarifa(spin_tar_tonelada->get_text(), spin_tar_litro->get_text(), spin_tar_viaje->get_text(), spin_tar_otro->get_text());
			lbl_info->set_text("Tarifa Editada Correctamente");
			bar_info->set_message_type(Gtk::MESSAGE_INFO);
			reveal_info->set_reveal_child(true);
		}
		catch (const std::exception &e)
		{
			g_print(e.what());
			gtk_widget_error_bell(GTK_WIDGET(win_operacion->gobj()));
			lbl_info->set_text("Error al editar tarifa");
			bar_info->set_message_type(Gtk::MESSAGE_ERROR);
			reveal_info->set_reveal_child(true);
			std::cerr << e.what() << '\n';
		}
	}
}

void win_main::on_ety_ope_fecha_icon_press(Gtk::EntryIconPosition icon_pos, const GdkEventButton *event)
{
	pop_cal->show_all();
}

void win_main::on_bar_info_response(int response_id)
{
	reveal_info->set_reveal_child(false);
}

void win_main::on_cal_day_selected_double_click()
{
	/*std::time_t t = std::time(nullptr);
	std::tm* now = std::localtime(&t);
	cal->select_month(now->tm_mon, now->tm_year + 1900);
	cal->select_day(now->tm_mday);*/
	unsigned int year, month, day;
	cal->get_date(year, month, day);
	ety_ope_fecha->set_text(std::to_string(year) + "/" + std::to_string(month + 1) + "/" + std::to_string(day));
	pop_cal->hide();
}

void win_main::on_treeview1_selection_changed()
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree1->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	Gtk::TreeModel::Row row = *iter;
	if (row)
	{
		reveal1->set_reveal_child(true);
		lbl1->set_text(row.get_value(columns_tractor.No_economico));
		lbl1->set_markup("<span size='x-large'>No. Economico:" + row.get_value(columns_tractor.No_economico) + "</span>");
		ety_tra_marca->set_text(row.get_value(columns_tractor.Marca));
		ety_tra_modelo->set_text(row.get_value(columns_tractor.Modelo));
		ety_tra_placas->set_text(row.get_value(columns_tractor.No_placas));
		ety_tra_tarjeta->set_text(row.get_value(columns_tractor.No_tc));
		spin_tar_verificacion->set_text(row.get_value(columns_tractor.Folio_verificacion));
		stack_cat_1->set_visible_child(*box_opcion1);
	}
}

void win_main::on_treeview2_selection_changed()
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree2->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	Gtk::TreeModel::Row row = *iter;
	if (row)
	{
		reveal2->set_reveal_child(true);
		lbl2->set_text(row.get_value(columns_remolque.No_economico));
		lbl2->set_markup("<span size='x-large'>No. Economico:" + row.get_value(columns_remolque.No_economico) + "</span>");
		ety_remo_marca->set_text(row.get_value(columns_remolque.Marca));
		ety_remo_modelo->set_text(row.get_value(columns_remolque.Modelo));
		ety_remo_placas->set_text(row.get_value(columns_remolque.No_placas));
		ety_remo_tarjeta->set_text(row.get_value(columns_remolque.No_tc));
		spin_remo_verificacion->set_text(row.get_value(columns_remolque.Folio_verificacion));
		stack_cat_2->set_visible_child(*box_opcion2);
	}
}

void win_main::on_treeview3_selection_changed()
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree3->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	Gtk::TreeModel::Row row = *iter;
	if (row)
	{
		reveal3->set_reveal_child(true);
		lbl3->set_text(row.get_value(columns_operador.Id));
		lbl3->set_markup("<span size='x-large'>ID:" + row.get_value(columns_operador.Id) + "</span>");
		ety_ope_nombre->set_text(row.get_value(columns_operador.Nombre));
		ety_ope_rfc->set_text(row.get_value(columns_operador.Rfc));
		ety_ope_curp->set_text(row.get_value(columns_operador.Curp));
		ety_ope_imss->set_text(row.get_value(columns_operador.No_imss));
		spin_ope_licencia->set_text(row.get_value(columns_operador.No_licen));
		ety_ope_fecha->set_text(row.get_value(columns_operador.Fecha));
		stack_cat_3->set_visible_child(*box_opcion3);
	}
}

void win_main::on_treeview4_selection_changed()
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree4->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	Gtk::TreeModel::Row row = *iter;
	if (row)
	{
		reveal4->set_reveal_child(true);
		lbl4->set_text(row.get_value(columns_ayudante.Id));
		lbl4->set_markup("<span size='x-large'>ID:" + row.get_value(columns_ayudante.Id) + "</span>");
		ety_ayu_nombre->set_text(row.get_value(columns_ayudante.Nombre));
		ety_ayu_rfc->set_text(row.get_value(columns_ayudante.Rfc));
		ety_ayu_imss->set_text(row.get_value(columns_ayudante.No_imss));
		ety_ayu_otro->set_text(row.get_value(columns_ayudante.Otro));
		stack_cat_4->set_visible_child(*box_opcion4);
	}
}

void win_main::on_treeview5_selection_changed()
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree5->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	Gtk::TreeModel::Row row = *iter;
	if (row)
	{
		reveal5->set_reveal_child(true);
		lbl5->set_text(row.get_value(columns_poblacion.Id));
		lbl5->set_markup("<span size='x-large'>ID:" + row.get_value(columns_poblacion.Id) + "</span>");
		ety_pob_nombre->set_text(row.get_value(columns_poblacion.Nombre));
		ety_pob_estado->set_text(row.get_value(columns_poblacion.Estado));
		spin_pob_distancia->set_text(row.get_value(columns_poblacion.Distancia));
		stack_cat_5->set_visible_child(*box_opcion5);
	}
}

void win_main::on_treeview6_selection_changed()
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree6->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	Gtk::TreeModel::Row row = *iter;
	if (row)
	{
		reveal6->set_reveal_child(true);
		lbl6->set_text(row.get_value(columns_rutas.Id));
		lbl6->set_markup("<span size='x-large'>ID:" + row.get_value(columns_rutas.Id) + "</span>");
		cb_rut_origen->set_active_text(row.get_value(columns_rutas.Origen));
		cb_rut_destino->set_active_text(row.get_value(columns_rutas.Destino));
		ety_rut_distancia->set_text(row.get_value(columns_rutas.Distancia));
		stack_cat_6->set_visible_child(*box_opcion6);
	}
}

void win_main::on_treeview7_selection_changed()
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree7->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	Gtk::TreeModel::Row row = *iter;
	if (row)
	{
		reveal7->set_reveal_child(true);
		lbl7->set_text(row.get_value(columns_productos.Id));
		lbl7->set_markup("<span size='x-large'>ID:" + row.get_value(columns_productos.Id) + "</span>");
		ety_pro_nombre->set_text(row.get_value(columns_productos.Nombre));
		cb_pro_unidad->set_active_text(row.get_value(columns_productos.Unidad));
		spin_pro_tarifa->set_text(row.get_value(columns_productos.Tarifa));
		ety_pro_otro->set_text(row.get_value(columns_productos.Otro));
		stack_cat_7->set_visible_child(*box_opcion7);
	}
}

void win_main::on_treeview8_selection_changed()
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree8->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	Gtk::TreeModel::Row row = *iter;
	if (row)
	{
		reveal8->set_reveal_child(true);
		lbl8->set_text(row.get_value(columns_clientes.Id));
		lbl8->set_markup("<span size='x-large'>ID:" + row.get_value(columns_clientes.Id) + "</span>");
		ety_cli_razon->set_text(row.get_value(columns_clientes.Razon_social));
		ety_cli_rfc->set_text(row.get_value(columns_clientes.Rfc));
		ety_cli_giro->set_text(row.get_value(columns_clientes.Giro));
		ety_cli_domicilio->set_text(row.get_value(columns_clientes.Domicilio));
		ety_cli_direccion->set_text(row.get_value(columns_clientes.Direccion_fiscal));
		spin_cli_tarifa->set_text(row.get_value(columns_clientes.Tarifa));
		cb_cli_tipo->set_active_text(row.get_value(columns_clientes.Tipo_cliente));
		stack_cat_8->set_visible_child(*box_opcion8);
	}
}

void win_main::on_treeview9_selection_changed()
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree9->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	Gtk::TreeModel::Row row = *iter;
	if (row)
	{
		reveal9->set_reveal_child(true);
		lbl9->set_text(row.get_value(columns_tarifas.Id));
		lbl9->set_markup("<span size='x-large'>ID:" + row.get_value(columns_tarifas.Id) + "</span>");
		spin_tar_tonelada->set_text(row.get_value(columns_tarifas.Tarifa_tonelada));
		spin_tar_litro->set_text(row.get_value(columns_tarifas.Tarifa_litro));
		spin_tar_viaje->set_text(row.get_value(columns_tarifas.Tarifa_viaje));
		spin_tar_otro->set_text(row.get_value(columns_tarifas.Otro));
		stack_cat_9->set_visible_child(*box_opcion9);
	}
}

void win_main::edit_tractor(std::string marca, std::string modelo, std::string placas, std::string tarjeta, std::string verificacion)
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree1->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	Gtk::TreeModel::Row row = *iter;
	if (row)
	{
		row.set_value(1, marca);
		row.set_value(2, modelo);
		row.set_value(3, placas);
		row.set_value(4, tarjeta);
		row.set_value(5, verificacion);
	}
}

void win_main::edit_remolque(std::string marca, std::string modelo, std::string placas, std::string tarjeta, std::string verificacion)
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree2->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	Gtk::TreeModel::Row row = *iter;
	if (row)
	{
		row.set_value(1, marca);
		row.set_value(2, modelo);
		row.set_value(3, placas);
		row.set_value(4, tarjeta);
		row.set_value(5, verificacion);
	}
}

void win_main::edit_operador(std::string nombre, std::string rfc, std::string curp, std::string imss, std::string licencia, std::string fecha)
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree3->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	Gtk::TreeModel::Row row = *iter;
	if (row)
	{
		row.set_value(1, nombre);
		row.set_value(2, rfc);
		row.set_value(3, curp);
		row.set_value(4, imss);
		row.set_value(5, licencia);
		row.set_value(6, fecha);
	}
}

void win_main::edit_ayudante(std::string nombre, std::string rfc, std::string imss, std::string otro)
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree4->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	Gtk::TreeModel::Row row = *iter;
	if (row)
	{
		row.set_value(1, nombre);
		row.set_value(2, rfc);
		row.set_value(3, imss);
		row.set_value(4, otro);
	}
}

void win_main::edit_poblacion(std::string nombre, std::string estado, std::string distancia)
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree5->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	Gtk::TreeModel::Row row = *iter;
	if (row)
	{
		row.set_value(1, nombre);
		row.set_value(2, estado);
		row.set_value(3, distancia);
	}
}

void win_main::edit_ruta(std::string nombre, std::string origen, std::string destino, std::string fecha)
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree6->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	Gtk::TreeModel::Row row = *iter;
	if (row)
	{
		row.set_value(1, nombre);
		row.set_value(2, origen);
		row.set_value(3, destino);
		row.set_value(4, fecha);
	}
}

void win_main::edit_producto(std::string nombre, std::string unidad, std::string tarifa, std::string otro)
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree7->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	Gtk::TreeModel::Row row = *iter;
	if (row)
	{
		row.set_value(1, nombre);
		row.set_value(2, unidad);
		row.set_value(3, tarifa);
		row.set_value(4, otro);
	}
}

void win_main::edit_cliente(std::string razon, std::string rfc, std::string giro, std::string tipo, std::string direccion, std::string domicilio, std::string tarifa)
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree8->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	Gtk::TreeModel::Row row = *iter;
	if (row)
	{
		row.set_value(1, razon);
		row.set_value(2, rfc);
		row.set_value(3, giro);
		row.set_value(4, tipo);
		row.set_value(5, direccion);
		row.set_value(6, domicilio);
		row.set_value(7, tarifa);
	}
}

void win_main::edit_tarifa(std::string tonelada, std::string litro, std::string viaje, std::string otro)
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree9->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	Gtk::TreeModel::Row row = *iter;
	if (row)
	{
		row.set_value(1, tonelada);
		row.set_value(2, litro);
		row.set_value(3, viaje);
		row.set_value(4, otro);
	}
}

void win_main::on_btn_remove_1_clicked()
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree1->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	if (iter)
	{
		Gtk::MessageDialog dialog(*win_operacion, "¿Está seguro de eliminar el registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
		dialog.set_secondary_text("Esta acción no se puede deshacer.");
		if (dialog.run() == Gtk::RESPONSE_YES)
		{
			try
			{
				tra->remove_tractor(id, lbl1->get_text().substr(14, 24));
				ListTractor->erase(iter);
				lbl_info->set_text("Registro eliminado.");
				reveal_info->set_reveal_child(true);
			}
			catch (const std::exception &e)
			{
				std::cerr << e.what() << '\n';
				lbl_info->set_text("Error al eliminar registro.");
				reveal_info->set_reveal_child(true);
			}
		}
	}
}

void win_main::on_btn_remove_2_clicked()
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree2->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	if (iter)
	{
		Gtk::MessageDialog dialog(*win_operacion, "¿Está seguro de eliminar el registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
		dialog.set_secondary_text("Esta acción no se puede deshacer.");
		if (dialog.run() == Gtk::RESPONSE_YES)
		{
			try
			{
				remo->remove_remolque(id, lbl2->get_text().substr(14, 24));
				ListRemolque->erase(iter);
				lbl_info->set_text("Registro eliminado.");
				reveal_info->set_reveal_child(true);
			}
			catch (const std::exception &e)
			{
				std::cerr << e.what() << '\n';
				lbl_info->set_text("Error al eliminar registro.");
				reveal_info->set_reveal_child(true);
			}
		}
	}
}

void win_main::on_btn_remove_3_clicked()
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree3->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	if (iter)
	{
		Gtk::MessageDialog dialog(*win_operacion, "¿Está seguro de eliminar el registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
		dialog.set_secondary_text("Esta acción no se puede deshacer.");
		if (dialog.run() == Gtk::RESPONSE_YES)
		{
			try
			{
				ope->remove_operador(id, lbl3->get_text().substr(3, 13));
				ListOperador->erase(iter);
				lbl_info->set_text("Registro eliminado.");
				reveal_info->set_reveal_child(true);
			}
			catch (const std::exception &e)
			{
				std::cerr << e.what() << '\n';
				lbl_info->set_text("Error al eliminar registro.");
				reveal_info->set_reveal_child(true);
			}
		}
	}
}

void win_main::on_btn_remove_4_clicked()
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree4->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	if (iter)
	{
		Gtk::MessageDialog dialog(*win_operacion, "¿Está seguro de eliminar el registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
		dialog.set_secondary_text("Esta acción no se puede deshacer.");
		if (dialog.run() == Gtk::RESPONSE_YES)
		{
			try
			{
				ayu->remove_ayudante(id, lbl4->get_text().substr(3, 13));
				ListAyudante->erase(iter);
				lbl_info->set_text("Registro eliminado.");
				reveal_info->set_reveal_child(true);
			}
			catch (const std::exception &e)
			{
				std::cerr << e.what() << '\n';
				lbl_info->set_text("Error al eliminar registro.");
				reveal_info->set_reveal_child(true);
			}
		}
	}
}

void win_main::on_btn_remove_5_clicked()
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree5->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	if (iter)
	{
		Gtk::MessageDialog dialog(*win_operacion, "¿Está seguro de eliminar el registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
		dialog.set_secondary_text("Esta acción no se puede deshacer.");
		if (dialog.run() == Gtk::RESPONSE_YES)
		{
			try
			{
				pob->remove_poblacion(id, lbl5->get_text().substr(3, 13));
				ListPoblacion->erase(iter);
				lbl_info->set_text("Registro eliminado.");
				reveal_info->set_reveal_child(true);
			}
			catch (const std::exception &e)
			{
				std::cerr << e.what() << '\n';
				lbl_info->set_text("Error al eliminar registro.");
				reveal_info->set_reveal_child(true);
			}
		}
	}
}

void win_main::on_btn_remove_6_clicked()
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree6->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	if (iter)
	{
		Gtk::MessageDialog dialog(*win_operacion, "¿Está seguro de eliminar el registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
		dialog.set_secondary_text("Esta acción no se puede deshacer.");
		if (dialog.run() == Gtk::RESPONSE_YES)
		{
			try
			{
				rut->remove_ruta(id, lbl6->get_text().substr(3, 13));
				ListRutas->erase(iter);
				lbl_info->set_text("Registro eliminado.");
				reveal_info->set_reveal_child(true);
			}
			catch (const std::exception &e)
			{
				std::cerr << e.what() << '\n';
				lbl_info->set_text("Error al eliminar registro.");
				reveal_info->set_reveal_child(true);
			}
		}
	}
}

void win_main::on_btn_remove_7_clicked()
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree7->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	if (iter)
	{
		Gtk::MessageDialog dialog(*win_operacion, "¿Está seguro de eliminar el registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
		dialog.set_secondary_text("Esta acción no se puede deshacer.");
		if (dialog.run() == Gtk::RESPONSE_YES)
		{
			try
			{
				pro->remove_producto(id, lbl7->get_text().substr(3, 13));
				ListProductos->erase(iter);
				lbl_info->set_text("Registro eliminado.");
				reveal_info->set_reveal_child(true);
			}
			catch (const std::exception &e)
			{
				std::cerr << e.what() << '\n';
				lbl_info->set_text("Error al eliminar registro.");
				reveal_info->set_reveal_child(true);
			}
		}
	}
}

void win_main::on_btn_remove_8_clicked()
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree8->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	if (iter)
	{
		Gtk::MessageDialog dialog(*win_operacion, "¿Está seguro de eliminar el registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
		dialog.set_secondary_text("Esta acción no se puede deshacer.");
		if (dialog.run() == Gtk::RESPONSE_YES)
		{
			try
			{
				cli->remove_cliente(id, lbl8->get_text().substr(3, 13));
				ListClientes->erase(iter);
				lbl_info->set_text("Registro eliminado.");
				reveal_info->set_reveal_child(true);
			}
			catch (const std::exception &e)
			{
				std::cerr << e.what() << '\n';
				lbl_info->set_text("Error al eliminar registro.");
				reveal_info->set_reveal_child(true);
			}
		}
	}
}

void win_main::on_btn_remove_9_clicked()
{
	Glib::RefPtr<Gtk::TreeSelection> selection = tree9->get_selection();
	Gtk::TreeModel::iterator iter = selection->get_selected();
	if (iter)
	{
		Gtk::MessageDialog dialog(*win_operacion, "¿Está seguro de eliminar el registro?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
		dialog.set_secondary_text("Esta acción no se puede deshacer.");
		if (dialog.run() == Gtk::RESPONSE_YES)
		{
			try
			{
				tar->remove_tarifa(id, lbl9->get_text().substr(3, 13));
				ListTarifas->erase(iter);
				lbl_info->set_text("Registro eliminado.");
				reveal_info->set_reveal_child(true);
			}
			catch (const std::exception &e)
			{
				std::cerr << e.what() << '\n';
				lbl_info->set_text("Error al eliminar registro.");
				reveal_info->set_reveal_child(true);
			}
		}
	}
}

void win_main::on_btn_back_1_clicked()
{
	stack_cat_1->set_visible_child(*btn_add1);
	lbl1->set_text("Cátalogo de Tractores");
	vacia_campos_tractor();
}

void win_main::on_btn_back_2_clicked()
{
	stack_cat_2->set_visible_child(*btn_add2);
	lbl2->set_text("Cátalogo de Remolques");
	vacia_campos_remolque();
}

void win_main::on_btn_back_3_clicked()
{
	stack_cat_3->set_visible_child(*btn_add3);
	lbl3->set_text("Cátalogo de Operadores");
	vacia_campos_operador();
}

void win_main::on_btn_back_4_clicked()
{
	stack_cat_4->set_visible_child(*btn_add4);
	lbl4->set_text("Cátalogo de Ayudantes");
	vacia_campos_ayudante();
}

void win_main::on_btn_back_5_clicked()
{
	stack_cat_5->set_visible_child(*btn_add5);
	lbl5->set_text("Cátalogo de Poblaciones");
	vacia_campos_poblacion();
}

void win_main::on_btn_back_6_clicked()
{
	stack_cat_6->set_visible_child(*btn_add6);
	lbl6->set_text("Cátalogo de Rutas");
	vacia_campos_ruta();
}

void win_main::on_btn_back_7_clicked()
{
	stack_cat_7->set_visible_child(*btn_add7);
	lbl7->set_text("Cátalogo de Productos");
	vacia_campos_producto();
}

void win_main::on_btn_back_8_clicked()
{
	stack_cat_8->set_visible_child(*btn_add8);
	lbl8->set_text("Cátalogo de Clientes");
	vacia_campos_cliente();
}

void win_main::on_btn_back_9_clicked()
{
	stack_cat_9->set_visible_child(*btn_add9);
	lbl9->set_text("Cátalogo de Tarifas");
	vacia_campos_tarifa();
}

void win_main::on_btn_print_clicked(){
	try
    {
        HelloWorld("argv[1].pdf");
    }
    catch (PdfError &eCode)
    {
        eCode.PrintErrorMsg();
    }

    try
    {
        PdfEncodingFactory::FreeGlobalEncodingInstances();
    }
    catch (PdfError &eCode)
    {
        eCode.PrintErrorMsg();
    }

    std::cout << std::endl
              << "Created a PDF file containing the line \"Hello World!\": " << "argv[1]" << std::endl
              << std::endl;
}

void win_main::on_btn_excel_clicked(){
	tra->carga_datos(id);
	xlnt::workbook wb;
    xlnt::worksheet ws = wb.active_sheet();
	for (size_t i = 0; i < tra->getNo_eco().size(); i++)
	{
		ws.cell("A" + std::to_string(i + 1)).value(atoi(tra->getNo_eco()[i].c_str()));
		ws.cell("B" + std::to_string(i + 1)).value(tra->getmarca()[i]);
		ws.cell("C" + std::to_string(i + 1)).value(atoi(tra->getmodelo()[i].c_str()));
		ws.cell("D" + std::to_string(i + 1)).value(tra->getno_placas()[i]);
		ws.cell("E" + std::to_string(i + 1)).value(tra->getno_tc()[i]);
		ws.cell("F" + std::to_string(i + 1)).value(atoi(tra->getfo_verifica()[i].c_str()));
	}
	tra->getNo_eco().clear();
	tra->getmarca().clear();
	tra->getmodelo().clear();
	tra->getno_placas().clear();
	tra->getno_tc().clear();
	tra->getfo_verifica().clear();
	wb.save("Tractores.xlsx");
}