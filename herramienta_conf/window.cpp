#include "window.hpp"

window::window(void)
{
    builder *build = new builder();
    build->constructor->get_widget("window_config",window_config);
    build->constructor->get_widget("ety_user_in",ety_user_in);
    build->constructor->get_widget("ety_pass_in",ety_pass_in);
    build->constructor->get_widget("ety_serv_in",ety_serv_in);
    build->constructor->get_widget("ety_sock_in",ety_sock_in);
    build->constructor->get_widget("ety_user_out",ety_user_out);
    build->constructor->get_widget("ety_pass_out",ety_pass_out);
    build->constructor->get_widget("ety_serv_out",ety_serv_out);
    build->constructor->get_widget("ety_sock_out",ety_sock_out);
    build->constructor->get_widget("btn_chooser",btn_chooser);
    build->constructor->get_widget("btn_leer",btn_leer);
    build->constructor->get_widget("btn_save",btn_save);
}

window::~window()
{
}

void window::run(){
    window_config->show_all();
}