#include "login.hpp"
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
    ui->constructor->get_widget("win_verificacion", win_verificacion);
}

login::~login()
{
}

void login::run()
{
    win_verificacion->show_all();
    hilo = new std::thread([this]() { init(); });
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
            if (con->verifica_server())
            {
                lbl_status_herr->set_text("No se pudo establecer una conexion con el servidor. Si el problema persiste contacte al administrador del sistema.");
            }
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
                    delete (win_verificacion);
                }
            }
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }
}