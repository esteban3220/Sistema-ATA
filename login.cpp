#include "login.hpp"
#include "win_main.cpp"
//$(pkg-config --cflags --libs libadwaita-1)
login::login()
{
    ui->constructor->get_widget("ety_user", ety_user);
    ui->constructor->get_widget("ety_contra", ety_contra);
    ui->constructor->get_widget("win_login", win_login);
    ui->constructor->get_widget("btn_sesion", btn_sesion);
    ui->constructor->get_widget("btn_problem", btn_problem);

    ui->constructor->get_widget("btn_cancel", btn_cancel);
    ui->constructor->get_widget("btn_act", btn_act);
    ui->constructor->get_widget("link", link);
    ui->constructor->get_widget("stack_ver", stack_ver);
    ui->constructor->get_widget("lbl_status_herr", lbl_status_herr);
    ui->constructor->get_widget("lbl_titulo", lbl_titulo);
    ui->constructor->get_widget("spinner", spinner);
    ui->constructor->get_widget("spinner_login", spinner_login);
    ui->constructor->get_widget("win_verificacion", win_verificacion);
    btn_sesion->signal_clicked().connect(sigc::mem_fun(*this, &login::secion));
    win_login->signal_delete_event().connect(sigc::mem_fun(*this,&login::cierra_Login));
}

login::~login()
{
}

void login::run()
{
    win_verificacion->show_all();
    hilo = new std::thread([this](){ init(); });
    win_login->show_all();
}

void login::init()
{
    ety_user->set_sensitive(false);
    ety_contra->set_sensitive(false);
    btn_sesion->set_sensitive(false);
    btn_problem->set_sensitive(false);
    std::ifstream archivo("config.bin");
    lbl_status_herr->set_text("Verificando Archivos locales.");
    if (!archivo.good())
    {
        lbl_status_herr->set_text("Archivo de Configuracion NO encontrado o dañado. Por favor cierre el programa y pongase en contacto con el administrador del sistema.");
        return;
    }
    else
    {
        try
        {
            lbl_status_herr->set_text("Coneccion con el Servidor.");
            if (!con->verifica_server())
            {
                lbl_status_herr->set_text("No se pudo establecer una conexion con el servidor. \nSi el problema persiste contacte al administrador del sistema.");
            }
            else
            {
                lbl_status_herr->set_text("Verificando Nuevas Versiones.");
                // std::cout << con->verifica_actualizacion();
                if (con->verifica_actualizacion())
                {
                    g_print("Hay una actualizacion\n");
                    spinner->stop();
                    lbl_titulo->set_text("Nueva Actualizacion\n¿Desea actualizar a la Nueva Version?");
                    stack_ver->set_visible_child(*btn_act);
                }
                else
                {
                    std::cout << "Ya esta actualizado\n";
                    win_verificacion->hide();
                    ety_user->set_sensitive(true);
                    ety_contra->set_sensitive(true);
                    btn_sesion->set_sensitive(true);
                    btn_problem->set_sensitive(true);
                }
            }
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }
}

void login::secion()
{
    std::vector<std::string> b;

    for (std::string a : con->secion(ety_user->get_text(), ety_contra->get_text()))
    {
        b.push_back(a);
    }

    try
    {
        spinner_login->start();
        if (!b[0].compare("Activo"))
        {
            win_main *m1 = new win_main(b[1].c_str());
            m1->run();
            spinner_login->stop();
            win_login->hide();
        }
        else
        {
            if (!b[0].compare("Inactivo"))
            {
                Gtk::MessageDialog mensaje(*win_login, "Atencion", false, Gtk::MESSAGE_INFO, Gtk::BUTTONS_OK, true);
                mensaje.set_title("ATA");
                mensaje.set_icon_name("dialog-information");
                mensaje.set_secondary_text("Esta cuenta parece estar suspendida. \nContacte con el soporte tecnico si piensa que es un error.");
                mensaje.run();
                spinner_login->stop();
            }
            else
            {
                Gtk::MessageDialog mensajeb(*win_login, "ERROR", false, Gtk::MESSAGE_ERROR, Gtk::BUTTONS_OK, true);
                mensajeb.set_secondary_text("No se encontraron datos. \nCompruebe que los datos esten bien escritos.");
                mensajeb.set_title("ATA");
                mensajeb.set_icon_name("dialog-error-symbolic");
                mensajeb.run();
                spinner_login->stop();
            }
        }
    }
    catch (const std::exception &e)
    {
        Gtk::MessageDialog mensaje(*win_login, "Error de coneccion", false, Gtk::MESSAGE_ERROR, Gtk::BUTTONS_OK, true);
        mensaje.set_secondary_text("No se puede conectar ala Base de Datos. Por favor intentelo en otro momento.");
        mensaje.set_icon_name("dialog-error-symbolic");
        mensaje.set_title("ATA");
        g_printerr( e.what());
        mensaje.run();
        spinner_login->stop();
    }
}

bool login::cierra_Login(GdkEventAny *event)
{
    Gtk::Main::quit();
    return true;
}