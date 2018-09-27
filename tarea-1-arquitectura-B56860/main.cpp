/*
 * File:   main.cpp
 * Author: b56860
 *
 * Created on September 11, 2018, 3:27 PM
 */
#include <iostream>
#include <cstdlib>
#include "indice.h"
using namespace std;

/*
 *
 */
int main(int argc, char** argv) {
    bool flag = false;
    char opcion;
    char *num;
    do {
        cin.clear();
        cout << "Ingrese un valor" << endl;
        cout << "1- Binario a decimal" << endl ;
        cout << "2- Octal a decimal" << endl;
        cout << "3- Hexadecimal a decimal" << endl;
        cout << "4- Salir" << endl ;
        cin >> opcion;
        switch (opcion) {
            case '1':
                cout << "Ingrese el número a transformar" << endl;
                cin >> num;
                binarioAdecimal(num);
                break;
            case '2':
                cout << "Ingrese el número a transformar" << endl;
                cin >> num;
                octalAdecimal(num);
                break;
            case '3':
                cout << "Ingrese el número a transformar" << endl;
                cin >> num;
                hexadecimalAdecimal(num);
                break;
            case '4':
                flag = true;
                break;

            default:
                cout << "Debe ingresar una opción válida.\a\n";
                system("clear");
                break;

        }

    } while (flag != true);
}
