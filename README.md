# sysmonitor
 A lightweight C++ application to monitor system resources, performance, and other metrics.

## Prerequisites
- MSYS2
- GTKmm
- GCC/G++

## Setup
1. Install MSYS2 from [https://www.msys2.org/](https://www.msys2.org/).
2. Open MSYS2 and install the required packages:

   ```sh
   pacman -Syu
   pacman -S mingw-w64-x86_64-toolchain mingw-w64-x86_64-gtkmm3 mingw-w64-x86_64-pkg-config
3. Clone the repo:
   ```sh
   git clone https://github.com/tjmacphee/sysmonitor.git
   cd sysmonitor
4. Build main:
   ```sh
   cd src
   g++ -mwindows -o main.exe main.cpp $(pkg-config --cflags --libs gtkmm-3.0)
5. Build wrapper:
   ```sh
   g++ -mwindows -o run.exe run.cpp
7. Run `run.exe` from terminal or file explorer

## Common issues
  - Missing DLLs, make sure to update all MSYS64 & MYSYS MINGW packages