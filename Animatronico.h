#pragma once
class Animatronico {
private:
	const char* nombre;
	char* mensage;
	int fila;
	int col;
	int odm;

public:
	//Animatronico();
	Animatronico(const char* nombre, char* mensage, int fila, int col, int odm);
	Animatronico(const char* nombre, int fila, int col, int odm);
	//Animatronico( char* mensage, int fila, int col, int odm);

	
	const char* getNombre() const;
	char* getMensage() const;
	int getFila() const;
	int getCol() const;
	int getODM() const;

	void setPosicion(int fila, int col);

	// Se mueve hacia el jugador
	void mover(int playerFila, int playerCol);
	

};
