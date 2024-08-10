#include <gtkmm.h>
#include <gtkmm/application.h>
#include <gtkmm/window.h>
#include <gtkmm/builder.h>

int main(int argc, char *argv[]) {
    auto app = Gtk::Application::create(argc, argv, "org.gtkmm.example");

    // Create a Gtk::Builder instance
    auto refBuilder = Gtk::Builder::create();
    
    // Load the UI from the Glade file
    refBuilder->add_from_file("../ui/ui.glade");

    // Get the main window pointer from the UI
    Gtk::Window* pWindow = nullptr;
    refBuilder->get_widget("main_window", pWindow);

    if (pWindow) {
        // Run the application with the main window
        return app->run(*pWindow);
    }

    return 1;
}
