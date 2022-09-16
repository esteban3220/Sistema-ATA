#include "builder.hpp"
#include "coneccion.cpp"
#include <thread>
//tasklist /FI "IMAGENAME eq main.exe"
class login
{
private:
    builder *ui = new builder();
    coneccion *con = new coneccion();
    std::thread *hilo;
    Gtk::Window *win_login,*win_verificacion;
    Gtk::Entry *ety_user,*ety_contra;
    Gtk::Button *btn_sesion,*btn_problem,*btn_cancel;
    Gtk::ButtonBox *btn_act;
    Gtk::Stack *stack_ver;
    Gtk::LinkButton *link;
    Gtk::Label *lbl_status_herr,*lbl_titulo;
    Gtk::Spinner *spinner,*spinner_login;
    bool cierra_Login(GdkEventAny* event);
public:
    void run();
    void init();
    void secion();
    login(/* args */);
    ~login();
}*l1;