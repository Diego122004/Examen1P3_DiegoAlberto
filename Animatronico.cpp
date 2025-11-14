#include "Animatronico.h"
#include <cstdlib>
using namespace std;

Animatronico::Animatronico(const char* nombre, int fila, int col, int odm)
	: nombre(nombre), fila(fila), col(col), odm(odm) {
}

const char* Animatronico::getNombre() const { return nombre; }
int Animatronico::getFila() const { return fila; }
int Animatronico::getCol() const { return col; }
int Animatronico::getODM() const { return odm; }

void Animatronico::setPosicion(int f, int c) {
	fila = f;
	col = c;
}

void Animatronico::mover(int pf, int pc) {
	int chance = rand() % 100;
	if (chance > odm) return;


		if (fila < pf) fila++;
		else if (fila > pf) fila--;

	if (col < pc) col++;
	else if (col > pc) col--;


}
