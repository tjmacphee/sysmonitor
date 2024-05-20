#include <windows.h>
#include <iostream>
#include <gtkmm.h>

// void PrintSystemInfo() {
//     SYSTEM_INFO si;
//     GetSystemInfo(&si);

//     std::cout << "Processor Architecture: " << si.wProcessorArchitecture << std::endl;
//     std::cout << "Number of Processors: " << si.dwNumberOfProcessors << std::endl;

//     MEMORYSTATUSEX memInfo;
//     memInfo.dwLength = sizeof(MEMORYSTATUSEX);
//     GlobalMemoryStatusEx(&memInfo);

//     std::cout << "Total Physical Memory: " << memInfo.ullTotalPhys / (1024 * 1024) << " MB" << std::endl;
//     std::cout << "Available Physical Memory: " << memInfo.ullAvailPhys / (1024 * 1024) << " MB" << std::endl;
// }

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    auto app = Gtk::Application::create(__argc, __argv, "org.gtkmm.examples.base");

    Gtk::Window window;
    window.set_default_size(800, 600);
    window.set_title("Hello, gtkmm!");

    return app->run(window);
}
