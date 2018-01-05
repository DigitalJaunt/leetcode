@echo off
set /p name="Enter directory name: "
if %name%=="" exit
set fulldir=%cd%\%name%
mkdir %fulldir%
set textfile=%fulldir%\%name%.txt
set cppfile=%fulldir%\%name%_01.cpp
type nul >%textfile%
type nul >%cppfile%
pause