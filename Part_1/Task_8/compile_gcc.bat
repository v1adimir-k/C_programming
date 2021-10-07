gcc -c task7_main.c task7_func.c
ar rcs task8_lib.a task7_func.o
gcc task7_main.o task8_lib.a -o task8.exe
pause