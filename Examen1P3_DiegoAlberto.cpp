#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "Animatronico.h"

using namespace std;


// --- Prototipo ---
void ejercicio1();
void mostrarMenuRecursivo();
/*
char** createRoomMap(int filas, int cols) {
    char** map = new char* [filas];
    for (int i = 0; i < filas; i++) {
        map[i] = new char[cols];
        for (int j = 0; j < cols; j++)
            map[i][j] = ' ';
        cout << "[" << "]";

    }

    return map;
}*/

int main() {
    setlocale(LC_ALL, "spanish");
    mostrarMenuRecursivo(); // llamada inicial
    return 0;
}

// --------------------
// Menú recursivo principal
// --------------------
void mostrarMenuRecursivo() {
    cout << "==================== Examen #1 - PROGRAMACION III ====================\n";
    cout << "Seleccione una opcion:\n";
    cout << "1. Ejercicio 1 - Five Nights at Freddy´s\n";
    cout << "0. Salir\n";
    cout << "Opcion: ";

    int opcion;
    cin >> opcion;

    switch (opcion) {
    case 1:
        ejercicio1();
        break;
    case 0:
        cout << "Saliendo... Gracias.\n";
        return; // finaliza la recursión
    default:
        cout << "Opcion no valida. Intente de nuevo.\n";
    }

    // Esperar antes de volver al menú
   /* cout << "\nPresione cualquier tecla y luego Enter para continuar...";
    char pausa;
    cin >> pausa;*/

    // Llamada recursiva al menú
    mostrarMenuRecursivo();
}

// --------------------
// Ejercicio 1:Five Nights at Freddy´s
// --------------------
void ejercicio1() {
    int filas = 4;
    int cols = 5;
    char simbolo = '[';
    char sim2 = ']';
    char** map = new char* [filas];
    for (int i = 0; i < filas; i++) {
        map[i] = new char[cols];
       // cout << simbolo << sim2;
        for (int j = 0; j < cols; j++)
           // if () {}
            map[i][j] = ' ';
        //cout << simbolo << sim2;
        
        cout << endl;
    }
    
    for (int i = 0; i < filas; i++) {
        cout << simbolo << sim2;
        for (int j = 0; j < cols; j++)
            if (i >= 1 && i <= filas - 1) {
                sim2 = '|';
                cout << simbolo << map[i][j] << " " << sim2;
            };
            //cout <<simbolo<< map[i][j] << " "<<sim2;
        cout << simbolo << sim2;
        cout << endl;
    }

};