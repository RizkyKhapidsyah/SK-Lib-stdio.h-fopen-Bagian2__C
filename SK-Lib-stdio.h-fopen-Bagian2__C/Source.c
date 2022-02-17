#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by GeeksForGeeks
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    FILE* demo;
    demo = fopen("demo_file.txt", "w+");

    fprintf(demo, "%s %s %s", "Selamat datang", "di", "rumah");
    fclose(demo);

    _getch();
    return 0;
}