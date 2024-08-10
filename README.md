# sysmonitor
 A lightweight C++ application to monitor system resources, performance, and other metrics.

## Prerequisites
- MSYS2
- GTKmm
- GCC/G++

## Setup
1. Clone the repo:
   ```sh
   git clone https://github.com/tjmacphee/sysmonitor.git
   cd sysmonitor
2. Install MSYS2 from [https://www.msys2.org/](https://www.msys2.org/).
3. Open MSYS2 and install the required packages:

   ```sh
   pacman -Syu
   pacman -S mingw-w64-x86_64-toolchain mingw-w64-x86_64-glade mingw-w64-x86_64-gtkmm3 mingw-w64-x86_64-pkg-config
4. Build main:
   ```sh
   g++ main.cpp -o main.exe -mwindows $(pkg-config --cflags --libs gtkmm-3.0)
5. CD into `/src` & enter `./main.exe` from MSYS2 MINGW664

## Common issues
  - Missing DLLs, make sure to update all MSYS64 & MYSYS MINGW packages