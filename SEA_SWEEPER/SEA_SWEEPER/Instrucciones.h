#pragma once
#include "utilidades.h"
#include "conio.h"
#include <windows.h>
#include <cstdlib>

//INSTRUCCIONES
int instrucciones[7][102] = {
{0, 7, 7, 7, 7, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 7, 7, 7, 7, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 0, 7, 7, 7, 7, 7, 7, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 7, 7, 0, 0, 0, 0, 7, 7, 7, 7, 0, 0, 0, 7, 7, 7, 7, 7, 7, 0, 0, 7, 7, 7, 7, 7, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 7, 7, 7, 7, 0, 0, 7, 7, 7, 7, 0, 0},
{0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 7, 0, 0, 7, 7, 0, 7, 7, 0, 0, 7, 7, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 7, 7, 0, 0, 7, 7, 0, 0, 7, 7, 0, 0, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 7, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 0, 0, 7, 7, 0, 0, 7, 7, 0},
{0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 7, 7, 0, 7, 7, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 7, 7, 0, 7, 7, 0, 7, 7, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0},
{0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 7, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 7, 7, 7, 7, 7, 0, 7, 7, 7, 7, 7, 7, 0, 0, 7, 7, 7, 7, 7, 0},
{0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 7, 7, 7, 7, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7},
{0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 7, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 7, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 7, 7, 0, 0, 7, 7, 0, 0, 7, 7, 0, 0, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 7, 7, 7, 0, 7, 7, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7},
{0, 7, 7, 7, 7, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 7, 7, 7, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 7, 7, 7, 7, 0, 0, 0, 0, 7, 7, 7, 7, 0, 0, 0, 7, 7, 7, 7, 7, 7, 0, 0, 7, 7, 7, 7, 7, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 7, 7, 7, 7, 0, 0, 7, 7, 7, 7, 7, 0},
};
void dibujar_instrucciones(int x, int y) {
    for (int fila = 0; fila < 7; fila++) {
        for (int columna = 0; columna < 102; columna++) {
            ubicar(x + columna, y + fila);
            asignarcolor(instrucciones[fila][columna]);
            cout << char(219);
        }
    }
}
//CONTROLES
int keyboard_tutorial[34][99] = {
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 8, 8, 8, 8, 8, 8, 8, 8, 0, 15, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 8, 8, 8, 0, 8, 8, 8, 0, 15, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 8, 0, 8, 0, 8, 8, 8, 0, 15, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 8, 8, 8, 0, 15, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 8, 8, 8, 0, 15, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 8, 0, 0, 0, 8, 8, 8, 8, 0, 15, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 8, 0, 8, 0, 8, 8, 8, 8, 0, 15, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 8, 8, 8, 8, 8, 8, 8, 8, 0, 15, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 8, 8, 8, 8, 8, 8, 8, 8, 0, 15, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 12, 12, 12, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 7, 0, 0, 0, 0, 7, 6, 6, 6, 6, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 7, 12, 12, 7, 7, 0, 0, 0, 0, 6, 6, 6, 6, 12, 12, 7, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0},
{0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 7, 12, 12, 12, 6, 12, 6, 6, 0, 6, 6, 6, 12, 0, 0, 7, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0},
{0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 7, 12, 6, 6, 12, 6, 6, 0, 6, 6, 6, 12, 0, 0, 7, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7},
{7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 7, 0, 0, 0, 0, 0, 7, 7, 7, 7, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 6, 6, 6, 12, 0, 0, 7, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0},
{7, 0, 0, 8, 8, 8, 8, 8, 8, 8, 8, 8, 0, 15, 0, 7, 0, 0, 8, 8, 8, 8, 8, 8, 8, 8, 8, 0, 15, 0, 7, 0, 0, 8, 8, 8, 8, 8, 8, 8, 8, 8, 0, 15, 0, 7, 0, 0, 0, 0, 0, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 12, 12, 6, 6, 6, 6, 0, 6, 6, 6, 12, 12, 7, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0},
{7, 0, 0, 8, 8, 0, 0, 0, 8, 8, 8, 8, 0, 15, 0, 7, 0, 0, 8, 8, 0, 0, 0, 8, 8, 8, 8, 0, 15, 0, 7, 0, 0, 8, 0, 0, 0, 0, 8, 8, 8, 8, 0, 15, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 7, 12, 0, 12, 12, 6, 6, 6, 6, 0, 0, 6, 6, 6, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0},
{7, 0, 0, 8, 0, 0, 8, 0, 0, 8, 8, 8, 0, 15, 0, 7, 0, 0, 8, 0, 0, 8, 8, 0, 8, 8, 8, 0, 15, 0, 7, 0, 0, 8, 0, 8, 8, 0, 0, 8, 8, 8, 0, 15, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 12, 12, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{7, 0, 0, 8, 0, 8, 8, 8, 0, 8, 8, 8, 0, 15, 0, 7, 0, 0, 8, 0, 0, 0, 8, 8, 8, 8, 8, 0, 15, 0, 7, 0, 0, 8, 0, 8, 8, 8, 0, 8, 8, 8, 0, 15, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{7, 0, 0, 8, 0, 0, 0, 0, 0, 8, 8, 8, 0, 15, 0, 7, 0, 0, 8, 8, 0, 0, 0, 0, 8, 8, 8, 0, 15, 0, 7, 0, 0, 8, 0, 8, 8, 8, 0, 8, 8, 8, 0, 15, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{7, 0, 0, 8, 0, 8, 8, 8, 0, 8, 8, 8, 0, 15, 0, 7, 0, 0, 8, 0, 8, 8, 0, 0, 8, 8, 8, 0, 15, 0, 7, 0, 0, 8, 0, 8, 8, 0, 0, 8, 8, 8, 0, 15, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{7, 0, 0, 8, 0, 8, 8, 8, 0, 8, 8, 8, 0, 15, 0, 7, 0, 0, 8, 8, 0, 0, 0, 8, 8, 8, 8, 0, 15, 0, 7, 0, 0, 8, 0, 0, 0, 0, 8, 8, 8, 8, 0, 15, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{7, 0, 0, 8, 8, 8, 8, 8, 8, 8, 8, 8, 0, 15, 0, 7, 0, 0, 8, 8, 8, 8, 8, 8, 8, 8, 8, 0, 15, 0, 7, 0, 0, 8, 8, 8, 8, 8, 8, 8, 8, 8, 0, 15, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{7, 0, 0, 8, 8, 8, 8, 8, 8, 8, 8, 8, 0, 15, 0, 7, 0, 0, 8, 8, 8, 8, 8, 8, 8, 8, 8, 0, 15, 0, 7, 0, 0, 8, 8, 8, 8, 8, 8, 8, 8, 8, 0, 15, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{7, 0, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 0, 0, 7, 0, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 0, 0, 7, 0, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
};
void dibujar_keyboard_tutorial(int x, int y) {
    for (int fila = 0; fila < 34; fila++) {
        for (int columna = 0; columna < 99; columna++) {
            ubicar(x + columna, y + fila);
            asignarcolor(keyboard_tutorial[fila][columna]);
            cout << char(219);
        }
    }
}
//RECOLECTAR
int recolectar_texto[34][78] = {
{7, 7, 7, 7, 7, 7, 0, 0, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 7, 7, 7, 7, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 0, 0, 0, 7, 7, 7, 7, 0, 0, 0, 7, 7, 7, 7, 7, 7, 0, 0, 0, 7, 7, 7, 0, 0, 0, 7, 7, 7, 7, 7, 7, 0},
{7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 7, 7, 0, 0, 0, 7, 7},
{7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7},
{7, 7, 0, 0, 7, 7, 7, 0, 7, 7, 7, 7, 7, 7, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 7, 7, 7},
{7, 7, 7, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 0, 7, 7, 7, 7, 7, 0, 0},
{7, 7, 0, 7, 7, 7, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 7, 7, 7, 0},
{7, 7, 0, 0, 7, 7, 7, 0, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 7, 7, 7, 7, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 7, 7, 7, 7, 7, 7, 7, 0, 7, 7, 7, 7, 7, 7, 0, 0, 0, 7, 7, 7, 7, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 7, 7, 7},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 7, 7, 7, 7, 7, 7, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 7, 3, 3, 7, 7, 3, 3, 7, 0, 0, 0, 0, 7, 7, 7, 7, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 7, 0, 0, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0},
{0, 0, 0, 0, 0, 7, 3, 3, 7, 7, 3, 3, 7, 7, 0, 0, 0, 7, 7, 7, 7, 0, 0, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 7, 7, 0, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0},
{0, 0, 0, 0, 0, 7, 3, 3, 7, 7, 3, 3, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0},
{0, 0, 0, 0, 0, 7, 3, 3, 7, 7, 3, 3, 7, 7, 7, 0, 0, 7, 7, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 7, 7, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0},
{0, 0, 0, 0, 0, 7, 3, 3, 7, 7, 3, 3, 7, 7, 0, 0, 0, 7, 7, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 7, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0},
{0, 0, 0, 0, 0, 7, 3, 3, 7, 7, 3, 3, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 7, 2, 10, 7, 0, 7, 10, 2, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 7, 10, 2, 10, 7, 7, 7, 10, 2, 10, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 7, 7, 7, 7, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 7, 2, 10, 0, 0, 0, 0, 0, 10, 2, 7, 0, 0, 7, 7, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 7, 2, 0, 10, 0, 10, 0, 10, 0, 2, 7, 0, 0, 7, 7, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 7, 10, 10, 0, 2, 0, 0, 0, 10, 10, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 7, 7, 7, 0, 7, 7, 7, 7, 7, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 7, 0, 0, 2, 10, 0, 10, 0, 10, 0, 7, 0, 0, 7, 7, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 7, 7, 7, 0, 0, 0, 7, 7, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 7, 0, 10, 2, 10, 0, 10, 0, 10, 0, 10, 0, 7, 0, 7, 7, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 7, 7, 7, 0, 0, 7, 7, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 7, 10, 0, 10, 0, 10, 0, 10, 0, 10, 0, 10, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 7, 7, 0, 0, 7, 7, 7, 0, 7, 7, 7, 7, 7, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 7, 2, 0, 10, 0, 0, 0, 0, 0, 10, 0, 2, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 7, 10, 2, 0, 10, 0, 10, 0, 10, 0, 2, 10, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 7, 10, 2, 2, 2, 10, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 7, 2, 0, 2, 0, 2, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 7, 2, 2, 2, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
};
void dibujar_recolectar_texto(int x, int y) {
    for (int fila = 0; fila < 34; fila++) {
        for (int columna = 0; columna < 78; columna++) {
            ubicar(x + columna, y + fila);
            asignarcolor(recolectar_texto[fila][columna]);
            cout << char(219);
        }
    }
}
//EVADIR
int evadir_texto[19][80] = {
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 7, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 0, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 7, 7, 0, 7, 7, 0, 0, 7, 7, 0, 0, 7, 7, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 0, 0, 7, 7, 7, 0, 7, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 7, 7, 7, 7, 7, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 7, 7, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 0, 7, 7, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 7, 5, 7, 7, 7, 7, 7, 5, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 0, 0, 7, 7, 7, 7, 7, 7, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 0, 0, 0, 7, 7, 7, 7, 7, 0, 7, 7, 7, 7, 7, 7, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 7, 7, 0, 0},
{7, 5, 7, 7, 7, 7, 7, 7, 7, 5, 7, 0, 7, 7, 7, 7, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0},
{7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 7, 7, 7, 7, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0},
{7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 7, 7, 7, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 7, 7, 7, 0, 7, 7, 0, 0, 7, 7, 7, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0},
{7, 5, 7, 5, 7, 5, 7, 5, 7, 5, 7, 0, 7, 7, 7, 7, 0, 0, 7, 7, 7, 7, 7, 7, 0, 0, 7, 7, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 7, 7, 7, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0},
{0, 7, 5, 5, 5, 5, 5, 5, 5, 7, 0, 0, 7, 7, 7, 7, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0, 7, 7, 0, 7, 7, 0, 7, 7, 7, 0, 0, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 7, 5, 7, 5, 7, 5, 7, 5, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 0, 7, 7, 7, 7, 7, 7, 7, 0, 0, 7, 7, 7, 7, 7, 7, 0, 0, 0, 7, 7, 7, 7, 7, 0, 7, 7, 0, 0, 7, 7, 7, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 7, 7, 0, 0},
{7, 5, 7, 5, 7, 0, 7, 5, 7, 5, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 7, 0, 7, 0, 0, 0, 7, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
};
void dibujar_evadir_texto(int x, int y) {
    for (int fila = 0; fila < 19; fila++) {
        for (int columna = 0; columna < 80; columna++) {
            ubicar(x + columna, y + fila);
            asignarcolor(evadir_texto[fila][columna]);
            cout << char(219);
        }
    }
}

void mostrar_instrucciones() {
    dibujar_instrucciones(90, 2);
    dibujar_keyboard_tutorial(42, 14);
    dibujar_recolectar_texto(42, 60);
    dibujar_evadir_texto(160, 60);
    
   
    
}

