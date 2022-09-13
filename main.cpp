#include "login.cpp"

int main(int argc, char *argv[])
{
  Gtk::Main kit(argc, argv);
  l1 = new login();
  l1->run();
  Gtk::Main::run();
  return EXIT_SUCCESS;
}