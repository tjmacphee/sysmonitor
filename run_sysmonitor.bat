@echo off
setlocal
set PATH=C:\msys64\mingw64\bin;%PATH%
start "" "%~dp0src/main.exe"
endlocal