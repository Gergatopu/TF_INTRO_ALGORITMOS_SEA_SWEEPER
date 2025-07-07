#pragma once
#include "utilidades.h"
#include "conio.h"
#include <windows.h>

void dibujarshelly(int x, int y, int& frame, int& direccion) {
    int shelly[9][17];

    int shelly1[9][17] = {
{9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 6, 6, 6, 9},
{9, 9, 9, 9, 9, 9, 2, 7, 2, 2, 9, 9, 6, 6, 7, 10, 6},
{9, 9, 9, 9, 2, 7, 7, 10, 10, 10, 2, 2, 6, 6, 6, 6, 6},
{9, 9, 9, 2, 7, 2, 10, 2, 2, 10, 2, 10, 2, 6, 6, 9, 9},
{9, 9, 9, 2, 10, 10, 2, 2, 2, 2, 10, 2, 2, 10, 9, 9, 9},
{9, 9, 10, 2, 2, 10, 10, 10, 10, 10, 2, 2, 10, 10, 9, 9, 9},
{9, 9, 6, 10, 10, 2, 2, 2, 2, 2, 10, 10, 6, 9, 9, 9, 9},
{9, 6, 6, 6, 9, 10, 10, 10, 10, 10, 9, 6, 6, 6, 9, 9, 9},
{9, 6, 6, 9, 9, 9, 9, 9, 9, 9, 9, 9, 6, 6, 9, 9, 9},

    };

    int shelly2[9][17] = {
{9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9},
{9, 9, 9, 9, 9, 9, 2, 7, 2, 2, 9, 9, 9, 6, 6, 6, 9},
{9, 9, 9, 9, 2, 7, 7, 10, 10, 10, 2, 2, 6, 6, 7, 10, 6},
{9, 9, 9, 2, 7, 2, 10, 2, 2, 10, 2, 10, 6, 6, 6, 6, 6},
{9, 9, 9, 2, 10, 10, 2, 2, 2, 2, 10, 2, 2, 6, 6, 9, 9},
{9, 9, 10, 2, 2, 10, 10, 10, 10, 10, 2, 2, 10, 10, 9, 9, 9},
{9, 6, 6, 10, 10, 2, 2, 2, 2, 2, 10, 10, 6, 6, 6, 9, 9},
{6, 6, 6, 9, 9, 10, 10, 10, 10, 10, 9, 9, 9, 6, 6, 6, 9},
{9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9},
    };

    int shelly3[9][17] = {
{9, 6, 6, 6, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9},
{6, 10, 7, 6, 6, 9, 9, 2, 2, 7, 2, 9, 9, 9, 9, 9, 9},
{6, 6, 6, 6, 6, 2, 2, 10, 10, 10, 7, 7, 2, 9, 9, 9, 9},
{9, 9, 6, 6, 2, 10, 2, 10, 2, 2, 10, 2, 7, 2, 9, 9, 9},
{9, 9, 9, 10, 2, 2, 10, 2, 2, 2, 2, 10, 10, 2, 9, 9, 9},
{9, 9, 9, 10, 10, 2, 2, 10, 10, 10, 10, 10, 2, 2, 10, 9, 9},
{9, 9, 9, 9, 6, 10, 10, 2, 2, 2, 2, 2, 10, 10, 6, 9, 9},
{9, 9, 9, 6, 6, 6, 9, 10, 10, 10, 10, 10, 9, 6, 6, 6, 9},
{9, 9, 9, 6, 6, 9, 9, 9, 9, 9, 9, 9, 9, 9, 6, 6, 9},
    };

    int shelly4[9][17] = {
{9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9},
{9, 6, 6, 6, 9, 9, 9, 2, 2, 7, 2, 9, 9, 9, 9, 9, 9},
{6, 10, 7, 6, 6, 2, 2, 10, 10, 10, 7, 7, 2, 9, 9, 9, 9},
{6, 6, 6, 6, 6, 10, 2, 10, 2, 2, 10, 2, 7, 2, 9, 9, 9},
{9, 9, 6, 6, 2, 2, 10, 2, 2, 2, 2, 10, 10, 2, 9, 9, 9},
{9, 9, 9, 10, 10, 2, 2, 10, 10, 10, 10, 10, 2, 2, 10, 9, 9},
{9, 9, 6, 6, 6, 10, 10, 2, 2, 2, 2, 2, 10, 10, 6, 6, 9},
{9, 6, 6, 6, 9, 9, 9, 10, 10, 10, 10, 10, 9, 9, 6, 6, 6},
{9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9},
    };

    if (frame == 1) {
        if (direccion == 0) {
            for (int fila = 0; fila < 9; fila++) {
                for (int col = 0; col < 17; col++) {
                    shelly[fila][col] = shelly1[fila][col];
                }
            }
        }
        if (direccion == 1) {
            for (int fila = 0; fila < 9; fila++) {
                for (int col = 0; col < 17; col++) {
                    shelly[fila][col] = shelly3[fila][col];
                }
            }
        }
    }
    if (frame == 2) {
        if (direccion == 0) {
            for (int fila = 0; fila < 9; fila++) {
                for (int col = 0; col < 17; col++) {
                    shelly[fila][col] = shelly2[fila][col];
                }
            }
        }
        if (direccion == 1) {
            for (int fila = 0; fila < 9; fila++) {
                for (int col = 0; col < 17; col++) {
                    shelly[fila][col] = shelly4[fila][col];
                }
            }
        }
    }

    for (int f = 0; f < 9; f++) {

        for (int c = 0; c < 17; c++) {
            ubicar(c + x, f + y); asignarcolor(shelly[f][c]); cout << char(219);
        }

    }

}
void borrarshelly(int x, int y) {
    for (int f = 0; f < 9; f++) {

        for (int c = 0; c < 17; c++) {
            ubicar(c + x, f + y); asignarcolor(9); cout << char(219);
        }

    }
}
void movershelly(int& x, int y, int& direccion) {
    if (direccion == 0) {
        x = x + 3;
    }
    if (direccion == 1) {
        x = x - 3;
    }
}
void animarshelly(int& x, int y, int& frame, int& direccion, int limiteizq, int limitederecho) {
    borrarshelly(x, y);
    movershelly(x, y, direccion);
    if (x > limitederecho) { direccion = 1; }
    if (x < limiteizq) { direccion = 0; }
    frame++; if (frame > 2) { frame = 1; }
    dibujarshelly(x, y, frame, direccion); _sleep(1);
}
