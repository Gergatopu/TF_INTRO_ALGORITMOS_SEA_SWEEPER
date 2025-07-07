#pragma once
#include "pch.h"
#include "utilidades.h"

int x_aleatorio() {
	return rand() % 280 + 1;
}
int y_aleatorio() {
	return rand() % 70 + 1;
};
//----------------------------
//ANIMACION DE LA BOTELLA-----
//----------------------------

void dibujar_botella(int x, int y) {

	int botella[3][10] = {
		{7,7,7,1,1,7,7,7,9,9},
		{7,7,7,1,1,7,7,7,1,1},
		{7,7,7,1,1,7,7,7,9,9},
	};

	for (int f = 0; f < 3; f++) {

		for (int c = 0; c < 10; c++) {
			ubicar(c + x, f + y); asignarcolor(botella[f][c]); cout << char(219);
		}

	}

}
void borrar_botella(int x, int y) {
	for (int f = 0; f < 3; f++) {

		for (int c = 0; c < 10; c++) {
			ubicar(c + x, f + y); asignarcolor(9); cout << char(219);
		}

	}
}
void mover_botella(int x, int& y) {
	y = y + 1;
}
void animar_botella(int& x, int& y, int limite, bool& basura) {
	if (basura = true) {
		borrar_botella(x, y);
		mover_botella(x, y);
		if (y > limite) { y = 1; x = 1 + rand() % (180 - 1 + 1);
		}
		dibujar_botella(x, y);_sleep(1);
	}
}

//--------------------------
//ANIMACION DE LA BOSLA-----
//--------------------------

void dibujar_bolsa(int x, int y) {
	int bolsa[4][6] = {
{ 7,9,9,9,9,7 },
{ 7,7,7,7,7,7 },
{ 7,7,7,7,7,7 },
{ 7,7,7,7,7,7 },
	};

for (int f = 0; f < 4; f++) {

		for (int c = 0; c < 6; c++) {
			ubicar(c + x, f + y); asignarcolor(bolsa[f][c]); cout << char(219);
		}

	}

};
void borrar_bolsa(int x, int y) {
	for (int f = 0; f < 4; f++) {
		for (int c = 0; c < 6; c++) {
			ubicar(c + x, f + y); asignarcolor(9); cout << char(219);
		}
	}
};
void mover_bolsa(int x, int& y) {
	y = y + 1;
}
void animar_bolsa(int& x, int& y, int limite, bool& basura) {
	if (basura = true) {
		borrar_bolsa(x, y);
		mover_bolsa(x, y);
		if (y > limite) { y = 1; x = 1 + rand() % (180 - 1 + 1);
		}
		dibujar_bolsa(x, y); _sleep(1);
	}
}

//--------------------------
//ANIMACION DEL GALON-------
//--------------------------

void dibujar_galon(int x, int y) {
	int galon[8][11] = {
		{12,12,12,12,12,9,9,9,9,15,15},
{12,9,9,9,12,9,9,15,15,15,9},
{12,4,12,12,12,12,4,12,15,9,9},
{12,12,4,12,12,4,12,12,9,9,9},
{12,12,12,4,4,12,12,12,9,9,9},
{12,12,12,4,4,12,12,12,9,9,9},
{12,12,4,12,12,4,12,12,9,9,9},
{12,4,12,12,12,12,4,12,9,9,9},
	};
	for (int f = 0; f < 8; f++) {
		for (int c = 0; c < 11; c++) {
			ubicar(c + x, f + y); asignarcolor(galon[f][c]); cout << char(219);
		}
	}
};
void borrar_galon(int x, int y) {
	for (int f = 0; f < 8; f++) {
		for (int c = 0; c < 11; c++) {
			ubicar(c + x, f + y); asignarcolor(9); cout << char(219);
		}
	}
};
void mover_galon(int x, int& y)	 {
	y = y + 1;
}
void animar_galon(int& x, int& y, int limite, bool& basura) {
	if(basura=true){
		borrar_galon(x, y);
		mover_galon(x, y);
		if (y > limite) { y = 1; x = 1 + rand() % (180 - 1 + 1); }
		dibujar_galon(x, y); _sleep(1);
	}
	;
}


