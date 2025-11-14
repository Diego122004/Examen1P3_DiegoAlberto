#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "Animatronico.h"

using namespace std;

char** createRoomMap(int filas, int cols) {
    char** map = new char* [filas];
    for (int i = 0; i < filas; i++) {
        map[i] = new char[cols];
        for (int j = 0; j < cols; j++)
            map[i][j] = '.';
    }

    
        int top = filas / 2 - 2;
    int bottom = filas / 2 + 2;
    int left = cols / 2 - 2;
    int right = cols / 2 + 2;

    for (int i = top; i <= bottom; i++)
        for (int j = left; j <= right; j++)
            map[i][j] = '#';

    map[filas / 2][cols / 2] = 'P';
    return map;
   

}

void printMap(char** map, int filas, int cols) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < cols; j++)
            cout << map[i][j] << ' ';
        cout << endl;
    }
}

int main() {
    srand(time(NULL));
    int filas = 5, cols = 6;

    
    char** mapa = createRoomMap(filas, cols);
    int playerFila = filas / 2;
    int playerCol = cols / 2;

    vector<Animatronico> anim;
    anim.push_back(Animatronico("Bonnie", 0, 20, 60));
    anim.push_back(Animatronico("Chica", 10, 20, 50));
    anim.push_back(Animatronico("Foxy", 0, 0, 80));
    anim.push_back(Animatronico("Freddy", 10, 0, 30));

    for (int turno = 1; turno <= 10; turno++) {
        mapa = createRoomMap(filas, cols);

        for (auto& a : anim) {
            a.mover(playerFila, playerCol);
            mapa[a.getFila()][a.getCol()] = 'A';
        }

        cout << "Turno " << turno << endl;
        printMap(mapa, filas, cols);
        cout << endl;
    }

    return 0;
   

}
