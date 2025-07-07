#pragma once
#include "utilidades.h"
#include "personaje_p.h"
#include "basura.h"
/*
void dibujar_caparazon(int x, int y) {
	int caparazon[7][10] = { 
		{9,9,9,2,8,2,2,9,9,9},
		{9,2,8,8,10,10,10,2,2,9},
		{2,8,2,10,2,2,10,2,10,2},
		{2,10,10,2,2,2,2,10,2,2},
		{2,2,10,10,10,10,10,2,2,10},
		{10,10,2,2,2,2,2,10,10,9},
		{9,9,10,10,10,10,10,9,9,9},
	};

for (int f = 0; f < 7; f++) {
	for (int c = 0; c < 10; c++) {
		ubicar(c + x, f + y); asignarcolor(caparazon[f][c]); cout << char(219);
	}
}
}
void borrar_caparazon(int x, int y) {
	for (int f = 0; f < 7; f++) {
		for (int c = 0; c < 10; c++) {
			ubicar(c + x, f + y); asignarcolor(9); cout << char(219);
		}
	}
}
void mover_caparazon(int& x, int& y) {
	y += 2;
	if (y > 80) {
		y = 1;
		x = x_aleatorio();
		
	}
}
void animar_caparazon(int& x, int& y, int limite, bool& caparazon_activo, int& contadortiempo) {
	if (caparazon_activo=true) {
		borrar_caparazon(x, y);
		mover_caparazon(x, y);
		dibujar_caparazon(x, y);
		_sleep(1);
	}
	
}*/

void dibujar_caparazon(int x, int y, int& frame) {
	int caparazonshelly[14][11];
	int caparazonshelly1[14][11] = {
	{9, 9, 2, 10, 9, 9, 9, 10, 2, 9, 9},
	{9, 10, 2, 10, 9, 9, 9, 10, 2, 10, 9},
	{9, 2, 10, 0, 0, 0, 0, 0, 10, 2, 9},
	{9, 2, 0, 10, 0, 10, 0, 10, 0, 2, 9},
	{9, 10, 10, 7, 2, 0, 0, 0, 10, 10, 9},
	{9, 0, 7, 2, 10, 0, 10, 0, 10, 0, 9},
	{0, 10, 2, 10, 0, 10, 0, 10, 0, 10, 0},
	{10, 0, 10, 0, 10, 0, 10, 0, 10, 0, 10},
	{2, 0, 10, 0, 0, 0, 0, 0, 10, 0, 2},
	{10, 2, 0, 10, 0, 10, 0, 10, 0, 2, 10},
	{9, 9, 9, 0, 0, 0, 0, 0, 9, 9, 9},
	{9, 9, 9, 10, 2, 2, 2, 10, 9, 9, 9},
	{9, 9, 9, 2, 0, 2, 0, 2, 9, 9, 9},
	{9, 9, 9, 9, 2, 2, 2, 9, 9, 9, 9},
	};
	int caparazonshelly2[14][11] = {
	{10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10},
	{2, 10, 9, 9, 9, 9, 9, 9, 9, 10, 2},
	{2, 2, 10, 0, 0, 0, 0, 0, 10, 2, 2},
	{9, 2, 0, 10, 0, 10, 0, 10, 0, 2, 9},
	{9, 10, 10, 7, 2, 0, 0, 0, 10, 10, 9},
	{9, 0, 7, 2, 10, 0, 10, 0, 10, 0, 9},
	{0, 10, 2, 10, 0, 10, 0, 10, 0, 10, 0},
	{10, 0, 10, 0, 10, 0, 10, 0, 10, 0, 10},
	{2, 0, 10, 0, 0, 0, 0, 0, 10, 0, 2},
	{2, 2, 0, 10, 0, 10, 0, 10, 0, 2, 2},
	{10, 2, 9, 0, 0, 0, 0, 0, 9, 2, 10},
	{9, 10, 9, 10, 2, 2, 2, 10, 9, 10, 9},
	{9, 9, 9, 2, 0, 2, 0, 2, 9, 9, 9},
	{9, 9, 9, 9, 2, 2, 2, 9, 9, 9, 9},
	};

	if (frame == 1) {
		for (int f = 0; f < 14; f++) {
			for (int c = 0; c < 11; c++) {
				caparazonshelly[f][c] = caparazonshelly1[f][c];
			}
		}
	}
	if (frame == 2) {
		for (int f = 0; f < 14; f++) {
			for (int c = 0; c < 11; c++) {
				caparazonshelly[f][c] = caparazonshelly2[f][c];
			}
		}
	}

	for (int f = 0; f < 14; f++) {
		for (int c = 0; c < 11; c++) {
			ubicar(c + x, f + y);
			asignarcolor(caparazonshelly[f][c]);
			cout << char(219);
		}
	}

}
void borrar_caparazon(int x, int y) {
	for (int f = 0; f < 14; f++) {
		for (int c = 0; c < 11; c++) {
			ubicar(c + x, f + y);
			asignarcolor(9);
			cout << char(219);
		}
	}
}
void mover_caparazonshelly(int& x, int& y) {
	y += 2;
	if (y > 80) {
		y = 1;
		x = x_aleatorio();
	}
}
void animar_caparazon(int& x, int& y, int limite, bool& caparazonshelly_activo, int& contadortiempo, int& frame) {
	if (caparazonshelly_activo) {
		borrar_caparazon(x, y);
		mover_caparazonshelly(x, y);
		frame++; if (frame > 2) frame = 1;
		dibujar_caparazon(x, y, frame);
		_sleep(1);
	}
}

//void dibujar_reloj(int x, int y) {
//	int reloj[13][11];
//	int reloj[13][11] = {
//	{9, 9, 9, 9, 9, 0, 0, 9, 9, 9, 9},
//	{9, 9, 9, 9, 9, 14, 14, 9, 9, 9, 9},
//	{9, 9, 9, 0, 0, 0, 0, 0, 9, 9, 9},
//	{9, 9, 0, 6, 0, 0, 0, 6, 0, 9, 9},
//	{9, 0, 6, 0, 6, 7, 7, 0, 6, 0, 9},
//	{0, 6, 0, 6, 7, 14, 7, 7, 0, 6, 0},
//	{0, 0, 6, 7, 7, 14, 7, 7, 6, 0, 0},
//	{0, 0, 6, 7, 7, 0, 14, 14, 6, 0, 0},
//	{0, 0, 6, 7, 7, 7, 7, 7, 6, 0, 0},
//	{0, 6, 0, 7, 7, 7, 7, 6, 0, 6, 0},
//	{9, 0, 6, 0, 7, 7, 6, 0, 6, 0, 9},
//	{9, 9, 0, 6, 0, 0, 0, 6, 0, 9, 9},
//	{9, 9, 9, 0, 0, 0, 0, 0, 9, 9, 9},
//	};
//
//	for (int f = 0; f < 13; f++) {
//		for (int c = 0; c < 11; c++) {
//			ubicar(c + x, f + y);
//			asignarcolor(reloj[f][c]);
//			cout << char(219);
//		}
//	}
//}
//void mover_reloj(int& x, int& y) {
//	y += 2;
//	if (y > 80) {
//		y = 1;
//		x = x_aleatorio();
//	}
//}
//void borrar_reloj(int x, int y) {
//	for (int f = 0; f < 13; f++) {
//		for (int c = 0; c < 11; c++) {
//			ubicar(c + x, f + y);
//			asignarcolor(9);
//			cout << char(219);
//		}
//	}
//}
//void animar_reloj(int& x, int& y, int limite, bool& reloj_activo, int& contadortiempo) {
//	if (reloj_activo) {
//		borrar_reloj(x, y);
//		mover_reloj(x, y);
//		dibujar_reloj(x, y);
//		_sleep(100);
//	}
//}