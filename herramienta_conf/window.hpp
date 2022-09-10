#include "builder.hpp"

class window
{
private:
    Gtk::Window *window_config;
    Gtk::Entry *ety_user_in,*ety_pass_in,*ety_serv_in,*ety_sock_in,*ety_user_out,*ety_pass_out,*ety_serv_out,*ety_sock_out;
    Gtk::FileChooser *btn_chooser;
    Gtk::Button *btn_leer,*btn_save;
    void carga();
    void escribe();
public:
    void run();
    window(void);
    ~window();
}*w1;