#pragma once
#include "utilidades.h"
#include "conio.h"
#include <windows.h>
void dibujarbuzo(int x, int y, int& frame, int& direccion) {

    int buzolaterales[9][17];
    int buzoverticales[15][9];

    int buzo1derecha[9][17]   = {
{9, 9, 9, 9, 9, 9, 9, 12, 12, 12, 12, 9, 9, 9, 9, 9, 9},
{9, 9, 9, 9, 9, 0, 0, 0, 0, 9, 6, 6, 6, 6, 9, 9, 9},
{9, 12, 12, 9, 9, 0, 0, 0, 0, 6, 6, 6, 6, 12, 12, 9, 9},
{9, 12, 12, 12, 6, 12, 6, 6, 0, 6, 6, 6, 12, 0, 0, 9, 9},
{9, 9, 12, 6, 6, 12, 6, 0, 0, 6, 6, 6, 12, 0, 0, 12, 12},
{9, 9, 9, 6, 6, 12, 0, 6, 6, 0, 0, 0, 0, 0, 0, 12, 12},
{9, 9, 12, 6, 6, 12, 0, 6, 6, 6, 6, 6, 12, 12, 0, 9, 9},
{9, 12, 12, 12, 6, 6, 12, 0, 6, 6, 6, 6, 12, 12, 9, 9, 9},
{9, 12, 12, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9},
    };
    int buzo2derecha[9][17]   = {
{9, 9, 9, 9, 9, 9, 9, 12, 12, 12, 12, 9, 9, 9, 9, 9, 9},
{9, 9, 9, 9, 9, 0, 0, 0, 0, 9, 6, 6, 6, 6, 9, 9, 9},
{9, 9, 9, 9, 9, 0, 0, 0, 0, 6, 6, 6, 6, 12, 12, 9, 9},
{9, 9, 9, 9, 6, 12, 6, 6, 0, 6, 6, 6, 12, 0, 0, 9, 9},
{9, 12, 12, 6, 6, 12, 0, 0, 0, 6, 6, 6, 12, 0, 0, 9, 9},
{12, 12, 12, 6, 6, 0, 6, 6, 0, 6, 6, 6, 12, 0, 0, 9, 9},
{12, 12, 12, 6, 6, 0, 6, 12, 12, 0, 6, 6, 6, 12, 12, 9, 9},
{9, 9, 9, 9, 6, 6, 0, 12, 12, 0, 0, 6, 6, 6, 9, 9, 9},
{9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9},
    };
    int buzo3derecha[9][17]   = {
{9, 9, 9, 9, 9, 9, 9, 12, 12, 12, 12, 9, 9, 9, 9, 9, 9},
{9, 9, 9, 9, 9, 0, 0, 0, 0, 9, 6, 6, 6, 6, 9, 9, 9},
{9, 12, 12, 9, 9, 0, 0, 0, 0, 6, 6, 6, 6, 12, 12, 9, 9},
{9, 12, 12, 12, 6, 12, 6, 6, 0, 6, 6, 6, 12, 0, 0, 9, 9},
{9, 9, 12, 6, 6, 12, 6, 6, 0, 6, 6, 6, 12, 0, 0, 9, 9},
{9, 9, 9, 0, 0, 0, 0, 0, 0, 6, 6, 6, 12, 0, 0, 9, 9},
{9, 9, 0, 12, 12, 6, 6, 6, 6, 0, 6, 6, 6, 12, 12, 9, 9},
{9, 12, 0, 12, 12, 6, 6, 6, 6, 0, 0, 6, 6, 6, 9, 9, 9},
{9, 12, 12, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9},
    };
    int buzo1izquierda[9][17] = {
{9, 9, 9, 9, 9, 9, 12, 12, 12, 12, 9, 9, 9, 9, 9, 9, 9},
{9, 9, 9, 6, 6, 6, 6, 9, 0, 0, 0, 0, 9, 9, 9, 9, 9},
{9, 9, 12, 12, 6, 6, 6, 6, 0, 0, 0, 0, 9, 9, 12, 12, 9},
{9, 9, 0, 0, 12, 6, 6, 6, 0, 6, 6, 12, 6, 12, 12, 12, 9},
{12, 12, 0, 0, 12, 6, 6, 6, 0, 0, 6, 12, 6, 6, 12, 9, 9},
{12, 12, 0, 0, 0, 0, 0, 0, 6, 6, 0, 12, 6, 6, 9, 9, 9},
{9, 9, 0, 12, 12, 6, 6, 6, 6, 6, 0, 12, 6, 6, 12, 9, 9},
{9, 9, 9, 12, 12, 6, 6, 6, 6, 0, 12, 6, 6, 12, 12, 12, 9},
{9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 12, 12, 9},
    };
    int buzo2izquierda[9][17] = {
{9, 9, 9, 9, 9, 9, 12, 12, 12, 12, 9, 9, 9, 9, 9, 9, 9},
{9, 9, 9, 6, 6, 6, 6, 9, 0, 0, 0, 0, 9, 9, 9, 9, 9},
{9, 9, 12, 12, 6, 6, 6, 6, 0, 0, 0, 0, 9, 9, 9, 9, 9},
{9, 9, 0, 0, 12, 6, 6, 6, 0, 6, 6, 12, 6, 9, 9, 9, 9},
{9, 9, 0, 0, 12, 6, 6, 6, 0, 0, 0, 12, 6, 6, 12, 12, 9},
{9, 9, 0, 0, 12, 6, 6, 6, 0, 6, 6, 0, 6, 6, 12, 12, 12},
{9, 9, 12, 12, 6, 6, 6, 0, 12, 12, 6, 0, 6, 6, 12, 12, 12},
{9, 9, 9, 6, 6, 6, 0, 0, 12, 12, 0, 6, 6, 9, 9, 9, 9},
{9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9},
    };
    int buzo3izquierda[9][17] = {
{9, 9, 9, 9, 9, 9, 12, 12, 12, 12, 9, 9, 9, 9, 9, 9, 9},
{9, 9, 9, 6, 6, 6, 6, 9, 0, 0, 0, 0, 9, 9, 9, 9, 9},
{9, 9, 12, 12, 6, 6, 6, 6, 0, 0, 0, 0, 9, 9, 12, 12, 9},
{9, 9, 0, 0, 12, 6, 6, 6, 0, 6, 6, 12, 6, 12, 12, 12, 9},
{9, 9, 0, 0, 12, 6, 6, 6, 0, 6, 6, 12, 6, 6, 12, 9, 9},
{9, 9, 0, 0, 12, 6, 6, 6, 0, 0, 0, 0, 0, 0, 9, 9, 9},
{9, 9, 12, 12, 6, 6, 6, 0, 6, 6, 6, 6, 12, 12, 0, 9, 9},
{9, 9, 9, 6, 6, 6, 0, 0, 6, 6, 6, 6, 12, 12, 0, 12, 9},
{9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 12, 12, 9},
    };
    int buzo1arriba[15][9]    = {
{9, 9, 9, 12, 9, 12, 9, 9, 9},
{9, 9, 6, 6, 6, 6, 6, 9, 9},
{9, 6, 6, 6, 6, 6, 6, 6, 9},
{9, 6, 6, 6, 12, 6, 6, 6, 9},
{9, 6, 6, 6, 12, 6, 6, 6, 9},
{9, 0, 6, 0, 12, 0, 6, 0, 9},
{9, 6, 0, 0, 12, 0, 0, 6, 9},
{9, 9, 6, 0, 0, 0, 6, 9, 9},
{9, 9, 12, 12, 12, 12, 12, 9, 9},
{9, 6, 6, 6, 6, 6, 6, 6, 9},
{9, 6, 6, 6, 0, 6, 6, 6, 9},
{9, 9, 12, 12, 9, 12, 12, 9, 9},
{9, 12, 12, 9, 9, 9, 12, 12, 9},
{9, 9, 9, 9, 9, 9, 9, 9, 9},
{9, 9, 9, 9, 9, 9, 9, 9, 9},
    };
    int buzo2arriba[15][9]    = {
{9, 9, 9, 9, 9, 9, 9, 9, 9},
{9, 9, 6, 6, 6, 6, 6, 9, 9},
{12, 6, 6, 6, 6, 6, 6, 6, 12},
{12, 6, 6, 6, 12, 6, 6, 6, 12},
{9, 6, 6, 6, 12, 6, 6, 6, 9},
{9, 6, 6, 0, 12, 0, 6, 6, 9},
{9, 0, 6, 0, 12, 0, 6, 0, 9},
{9, 6, 0, 0, 0, 0, 0, 6, 9},
{9, 9, 12, 12, 12, 12, 12, 9, 9},
{9, 6, 6, 6, 6, 6, 6, 6, 9},
{9, 6, 6, 6, 0, 6, 6, 6, 9},
{9, 9, 12, 12, 0, 12, 12, 9, 9},
{9, 9, 12, 12, 9, 12, 12, 9, 9},
{9, 9, 12, 9, 9, 9, 12, 9, 9},
{9, 9, 9, 9, 9, 9, 9, 9, 9},
    };
    int buzo3arriba[15][9]    = {
{9, 9, 9, 9, 9, 9, 9, 9, 9},
{9, 9, 6, 6, 6, 6, 6, 9, 9},
{9, 6, 6, 6, 6, 6, 6, 6, 9},
{9, 6, 6, 6, 12, 6, 6, 6, 9},
{9, 6, 6, 6, 12, 6, 6, 6, 9},
{9, 6, 6, 0, 12, 0, 6, 6, 9},
{9, 0, 6, 0, 12, 0, 6, 0, 9},
{9, 6, 0, 0, 0, 0, 0, 6, 9},
{6, 6, 0, 12, 12, 12, 0, 6, 6},
{12, 12, 0, 6, 6, 6, 0, 12, 12},
{12, 12, 6, 6, 6, 6, 6, 12, 12},
{9, 9, 6, 6, 0, 6, 6, 9, 9},
{9, 9, 12, 12, 0, 12, 12, 9, 9},
{9, 9, 12, 12, 0, 12, 12, 9, 9},
{9, 9, 9, 12, 0, 12, 9, 9, 9},
    };
    int buzo1abajo[15][9]     = {
{9, 9, 9, 9, 9, 9, 9, 9, 9},
{9, 9, 9, 9, 9, 9, 9, 9, 9},
{9, 12, 12, 9, 9, 9, 12, 12, 9},
{9, 9, 12, 12, 9, 12, 12, 9, 9},
{9, 9, 6, 6, 9, 6, 6, 9, 9},
{9, 6, 6, 0, 0, 0, 6, 6, 9},
{9, 6, 0, 0, 0, 0, 0, 6, 9},
{9, 9, 6, 6, 6, 6, 6, 9, 9},
{9, 6, 6, 6, 6, 6, 6, 6, 9},
{9, 6, 6, 12, 12, 12, 6, 6, 9},
{9, 6, 12, 0, 0, 0, 12, 6, 9},
{9, 6, 12, 0, 0, 0, 12, 6, 9},
{9, 9, 6, 12, 12, 12, 6, 9, 9},
{9, 9, 12, 12, 9, 12, 12, 9, 9},
{9, 9, 9, 12, 9, 12, 9, 9, 9},
    };
    int buzo2abajo[15][9]     = {
{9, 9, 9, 9, 9, 9, 9, 9, 9},
{9, 9, 12, 9, 9, 9, 12, 9, 9},
{9, 9, 12, 12, 9, 12, 12, 9, 9},
{9, 9, 6, 12, 0, 12, 6, 9, 9},
{9, 6, 6, 6, 0, 6, 6, 6, 9},
{9, 6, 6, 0, 0, 0, 6, 6, 9},
{9, 9, 0, 0, 0, 0, 0, 9, 9},
{9, 0, 6, 6, 6, 6, 6, 0, 9},
{9, 6, 6, 6, 6, 6, 6, 6, 9},
{0, 6, 6, 12, 12, 12, 6, 6, 0},
{6, 0, 12, 0, 0, 0, 12, 0, 6},
{6, 0, 12, 0, 0, 0, 12, 0, 6},
{12, 12, 0, 12, 12, 12, 0, 12, 12},
{12, 12, 0, 9, 9, 9, 0, 12, 12},
{9, 9, 9, 9, 9, 9, 9, 9, 9},
    };
    int buzo3abajo[15][9]     = {
{9, 9, 9, 12, 0, 12, 9, 9, 9},
{9, 9, 12, 12, 0, 12, 12, 9, 9},
{9, 9, 12, 12, 0, 12, 12, 9, 9},
{9, 9, 6, 6, 0, 6, 6, 9, 9},
{9, 9, 6, 6, 0, 6, 6, 9, 9},
{12, 12, 6, 0, 0, 0, 6, 12, 12},
{12, 12, 0, 0, 0, 0, 0, 12, 12},
{6, 0, 6, 6, 6, 6, 6, 0, 6},
{9, 6, 6, 6, 6, 6, 6, 6, 9},
{9, 6, 6, 12, 12, 12, 6, 6, 9},
{9, 6, 12, 0, 0, 0, 12, 6, 9},
{9, 6, 12, 0, 0, 0, 12, 6, 9},
{9, 9, 6, 12, 12, 12, 6, 9, 9},
{9, 9, 9, 9, 9, 9, 9, 9, 9},
{9, 9, 9, 9, 9, 9, 9, 9, 9},
    };

    if (direccion == 4) {

        if (frame == 1) {
            for (int fila = 0; fila < 9; fila++) {
                for (int col = 0; col < 17; col++) {
                    buzolaterales[fila][col] = buzo1derecha[fila][col];
                }
            }
        }
        if (frame == 2) {
            for (int fila = 0; fila < 9; fila++) {
                for (int col = 0; col < 17; col++) {
                    buzolaterales[fila][col] = buzo2derecha[fila][col];
                }
            }
        }
        if (frame == 3) {
            for (int fila = 0; fila < 9; fila++) {
                for (int col = 0; col < 17; col++) {
                    buzolaterales[fila][col] = buzo3derecha[fila][col];
                }
            }
        }
    }
    if (direccion == 3) {

        if (frame == 1) {
            for (int fila = 0; fila < 9; fila++) {
                for (int col = 0; col < 17; col++) {
                    buzolaterales[fila][col] = buzo1izquierda[fila][col];
                }
            }
        }
        if (frame == 2) {
            for (int fila = 0; fila < 9; fila++) {
                for (int col = 0; col < 17; col++) {
                    buzolaterales[fila][col] = buzo2izquierda[fila][col];
                }
            }
        }
        if (frame == 3) {
            for (int fila = 0; fila < 9; fila++) {
                for (int col = 0; col < 17; col++) {
                    buzolaterales[fila][col] = buzo3izquierda[fila][col];
                }
            }
        }
    }
    if (direccion == 1) {
        if (frame == 1) {
            for (int fila = 0; fila < 15; fila++) {
                for (int col = 0; col < 9; col++) {
                    buzoverticales[fila][col] = buzo1arriba[fila][col];
                }
            }
        }
        if (frame == 2) {
            for (int fila = 0; fila < 15; fila++) {
                for (int col = 0; col < 9; col++) {
                    buzoverticales[fila][col] = buzo2arriba[fila][col];
                }
            }
        }
        if (frame == 3) {
            for (int fila = 0; fila < 15; fila++) {
                for (int col = 0; col < 9; col++) {
                    buzoverticales[fila][col] = buzo3arriba[fila][col];
                }
            }
        }
    }
    if (direccion == 2) {
        if (frame == 1) {
            for (int fila = 0; fila < 15; fila++) {
                for (int col = 0; col < 9; col++) {
                    buzoverticales[fila][col] = buzo1abajo[fila][col];
                }
            }
        }
        if (frame == 2) {
            for (int fila = 0; fila < 15; fila++) {
                for (int col = 0; col < 9; col++) {
                    buzoverticales[fila][col] = buzo2abajo[fila][col];
                }
            }
        }
        if (frame == 3) {
            for (int fila = 0; fila < 15; fila++) {
                for (int col = 0; col < 9; col++) {
                    buzoverticales[fila][col] = buzo3abajo[fila][col];
                }
            }
        }
    }


    if (direccion == 3 || direccion == 4) {

        for (int f = 0; f < 9; f++) {

            for (int c = 0; c < 17; c++) {
                ubicar(c + x, f + y); asignarcolor(buzolaterales[f][c]); cout << char(219);
            }

        }
    }
    if (direccion == 1 || direccion == 2) {
        for (int f = 0; f < 15; f++) {

            for (int c = 0; c < 9; c++) {
                ubicar(c + x, f + y); asignarcolor(buzoverticales[f][c]); cout << char(219);
            }

        }
    }


}

void borrarbuzo(int x, int y, int& direccion) {
    if (direccion == 3 || direccion == 4) {
        for (int f = 0; f < 9; f++) {

            for (int c = 0; c < 17; c++) {
                ubicar(c + x, f + y); asignarcolor(9); cout << char(219);
            }

        }
    }
    if (direccion == 1 || direccion == 2) {
        for (int f = 0; f < 15; f++) {

            for (int c = 0; c < 9; c++) {
                ubicar(c + x, f + y); asignarcolor(9); cout << char(219);
            }

        }
    }
}
void moverbuzo(int& x, int& y, int& xp, int& yp, bool& proyectilactivo, int& direccion, int& turbo ) {

    if (kbhit()) {
        char tecla = getch();

        switch (tecla)
        {
        case 'w':
        case 'W':
            if(y>4){
            direccion = 1;
            y = y - (3*turbo); break;
            }
			else { direccion = 1; break; }
        case 's':
        case 'S':
            if (y < 70) {
                direccion = 2;
                y = y + (3 * turbo); break;
            }
			else { direccion = 2; break; }
        case 'a':
        case 'A':
            if (x > 5) {
                direccion = 3;
                x = x - (5 * turbo); break;
            }
			else {
				direccion = 3; break;
			}
        case 'd':
        case 'D':
            
            if (x < 275) {
                direccion = 4;
                x = x + (5 * turbo); break;
            }
            else {
				direccion = 4; break;
            }
        case ' ':
            if (!proyectilactivo) {
                proyectilactivo = true;
            }
            
                break;

        default:
            break;
        }
    }

}
void disparobuzo(int& xp, int& yp, int& x, int& y, bool& proyectilactivo, int color) {

    if (proyectilactivo) {
        
            ubicar(xp + 10, yp); asignarcolor(9); cout << char(219);
            xp += 10;
            if (xp < 280) {
                ubicar(xp + 10, yp); asignarcolor(color); cout << char(219); _sleep(1);
            }
            else {
                xp = x; yp = y; 
                proyectilactivo = false;
            }
        }

    }
void animarbuzo(int& x, int& y, int& frame, int& xp, int& yp, bool& proyectilactivo, int& direccion, int& turbo) {


    borrarbuzo(x, y, direccion);
    disparobuzo(xp, yp,x,y, proyectilactivo, 4);
    moverbuzo(x, y, xp, yp, proyectilactivo, direccion, turbo);
    frame++; if (frame > 3) { frame = 1; }

    dibujarbuzo(x, y, frame, direccion); _sleep(40);


}