#pragma once
#include "utilidades.h"
#include "conio.h"
#include <windows.h>
#include "basura.h"
void dibujarpez(int x, int y, int& frame, int& direccion) {
    int pez[6][12];

    int pez1[6][12] = {
        {9, 9, 9, 9, 3, 3, 3, 9, 9, 9, 9, 9},
        {9, 9, 9, 9, 9, 3, 3, 3, 9, 9, 9, 9},
        {3, 9, 9, 1, 1, 1, 1, 1, 3, 1, 1, 9},
        {9, 3, 1, 1, 3, 1, 1, 3, 1, 1, 7, 1},
        {9, 3, 7, 7, 3, 3, 1, 3, 1, 1, 1, 1},
        {3, 9, 9, 7, 7, 7, 7, 7, 3, 7, 7, 9}

    };

    int pez2[6][12] = {
        {9, 9, 9, 9, 3, 3, 3, 9, 9, 9, 9, 9},
        {9, 9, 9, 9, 9, 3, 3, 3, 9, 9, 9, 9},
        {9, 3, 9, 1, 1, 1, 1, 1, 3, 1, 1, 9},
        {9, 3, 1, 1, 1, 3, 1, 3, 1, 1, 7, 1},
        {9, 3, 7, 7, 1, 3, 1, 3, 1, 1, 1, 1},
        {9, 3, 9, 7, 7, 7, 7, 7, 3, 7, 7, 9}
    };

    int pez3[6][12] = {
        {9, 9, 9, 9, 3, 3, 3, 9, 9, 9, 9, 9},
        {9, 9, 9, 9, 3, 3, 3, 9, 9, 9, 9, 9},
        {9, 1, 1, 3, 1, 1, 1, 1, 1, 9, 9, 3},
        {1, 7, 1, 1, 3, 1, 1, 3, 1, 1, 3, 9},
        {1, 1, 1, 1, 3, 1, 3, 3, 7, 7, 3, 9},
        {9, 7, 7, 3, 7, 7, 7, 7, 7, 9, 9, 3}
    };

    int pez4[6][12] = {
        {9, 9, 9, 9, 3, 3, 3, 9, 9, 9, 9, 9},
        {9, 9, 9, 9, 3, 3, 3, 9, 9, 9, 9, 9},
        {9, 1, 1, 3, 1, 1, 1, 1, 1, 9, 3, 9},
        {1, 7, 1, 1, 3, 1, 3, 1, 1, 1, 3, 9},
        {1, 1, 1, 1, 3, 1, 3, 1, 7, 7, 3, 9},
        {9, 7, 7, 3, 7, 7, 7, 7, 7, 9, 3, 9}
    };

    if (frame == 1) {
        if (direccion == 0) {
            for (int fila = 0; fila < 6; fila++) {
                for (int col = 0; col < 12; col++) {
                    pez[fila][col] = pez1[fila][col];
                }
            }
        }
        if (direccion == 1) {
            for (int fila = 0; fila < 6; fila++) {
                for (int col = 0; col < 12; col++) {
                    pez[fila][col] = pez3[fila][col];
                }
            }
        }
    }
    if (frame == 2) {
        if (direccion == 0) {
            for (int fila = 0; fila < 6; fila++) {
                for (int col = 0; col < 12; col++) {
                    pez[fila][col] = pez2[fila][col];
                }
            }
        }
        if (direccion == 1) {
            for (int fila = 0; fila < 6; fila++) {
                for (int col = 0; col < 12; col++) {
                    pez[fila][col] = pez4[fila][col];
                }
            }
        }
    }

    for (int f = 0; f < 6; f++) {

        for (int c = 0; c < 12; c++) {
            ubicar(c + x, f + y); asignarcolor(pez[f][c]); cout << char(219);
        }

    }

}
void borrarpez(int x, int y) {
    for (int f = 0; f < 6; f++) {

        for (int c = 0; c < 12; c++) {
            ubicar(c + x, f + y); asignarcolor(9); cout << char(219);
        }

    }
}
void moverpez(int& x, int y, int& direccion) {
    if (direccion == 0) {
        x = x + 3;
    }
    if (direccion == 1) {
        x = x - 3;
    }
}
void animarpez(int& x, int& y, int& frame, int& direccion) {
	int limiteizq = 3; int limitederecho = 270;
    borrarpez(x, y);
    moverpez(x, y, direccion);
    if (x > limitederecho) { direccion = 1;y = y_aleatorio(); }
    if (x < limiteizq) { direccion = 0;y = y_aleatorio();}
    frame++; if (frame > 2) { frame = 1; }
    dibujarpez(x, y, frame, direccion); _sleep(5);
}

void dibujartornado(int x, int y, int& frame) {
    int tornado[16][14];

    int tornado1[16][14] = {
        {9, 9, 9, 9, 3, 3, 3, 7, 7, 7, 3, 9, 9, 9},
        {9, 9, 9, 3, 3, 1, 1, 1, 1, 1, 7, 7, 3, 9},
        {9, 9, 3, 1, 1, 3, 3, 7, 7, 1, 1, 1, 7, 3},
        {9, 7, 1, 1, 1, 1, 1, 3, 3, 7, 7, 1, 1, 7},
        {9, 7, 1, 1, 1, 3, 3, 7, 7, 3, 1, 3, 1, 3},
        {9, 7, 7, 3, 1, 1, 1, 3, 3, 7, 1, 1, 3, 1},
        {9, 7, 7, 7, 3, 1, 3, 3, 1, 1, 3, 3, 1, 9},
        {9, 1, 7, 7, 7, 7, 3, 3, 3, 3, 1, 1, 1, 9},
        {9, 9, 1, 1, 3, 3, 7, 7, 7, 7, 3, 1, 9, 9},
        {9, 9, 9, 1, 1, 1, 3, 3, 1, 1, 1, 1, 1, 9},
        {9, 9, 9, 9, 1, 7, 7, 7, 7, 3, 3, 1, 9, 9},
        {9, 9, 1, 1, 3, 7, 3, 3, 1, 1, 1, 9, 9, 9},
        {9, 9, 9, 3, 7, 7, 7, 3, 1, 1, 9, 9, 9, 9},
        {9, 9, 9, 1, 7, 3, 3, 1, 1, 1, 1, 9, 9, 9},
        {9, 9, 9, 9, 1, 3, 1, 1, 9, 9, 9, 9, 9, 9},
        {9, 9, 9, 1, 1, 1, 9, 9, 9, 9, 9, 9, 9, 9},
    };

    int tornado2[16][14] = {
        {9, 9, 9, 9, 3, 7, 7, 7, 7, 7, 3, 9, 9, 9},
        {9, 9, 9, 7, 7, 1, 1, 1, 1, 1, 7, 7, 3, 9},
        {9, 9, 7, 1, 1, 1, 3, 3, 3, 1, 1, 1, 7, 3},
        {9, 3, 1, 1, 3, 7, 7, 7, 7, 3, 1, 1, 1, 7},
        {9, 7, 1, 3, 7, 3, 3, 3, 1, 1, 3, 1, 1, 7},
        {9, 3, 7, 1, 1, 3, 7, 7, 7, 3, 1, 1, 7, 3},
        {9, 3, 3, 3, 3, 1, 3, 3, 1, 1, 3, 7, 3, 9},
        {9, 1, 3, 3, 3, 7, 7, 7, 7, 7, 7, 3, 3, 9},
        {9, 9, 9, 1, 3, 3, 7, 7, 7, 7, 3, 9, 9, 9},
        {9, 9, 1, 1, 3, 3, 3, 7, 3, 3, 3, 1, 9, 9},
        {9, 9, 9, 1, 3, 7, 7, 7, 7, 3, 9, 9, 9, 9},
        {9, 9, 1, 3, 3, 7, 3, 3, 3, 3, 9, 9, 9, 9},
        {9, 9, 9, 3, 7, 7, 7, 3, 3, 9, 9, 9, 9, 9},
        {9, 9, 1, 7, 7, 7, 3, 1, 9, 9, 9, 9, 9, 9},
        {9, 9, 1, 3, 3, 3, 1, 9, 9, 9, 9, 9, 9, 9},
        {9, 1, 1, 1, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9},
    };

    int tornado3[16][14] = {
        {9, 9, 9, 9, 3, 7, 7, 7, 7, 3, 9, 9, 9, 9},
        {9, 9, 3, 7, 7, 1, 1, 1, 1, 1, 3, 3, 9, 9},
        {9, 3, 7, 1, 1, 1, 7, 3, 3, 1, 1, 1, 3, 9},
        {9, 7, 1, 1, 7, 7, 3, 1, 1, 1, 1, 1, 1, 3},
        {9, 7, 1, 3, 3, 3, 7, 7, 3, 1, 1, 1, 1, 3},
        {9, 3, 7, 1, 1, 7, 3, 3, 3, 3, 1, 1, 7, 3},
        {9, 3, 3, 7, 3, 1, 3, 1, 1, 1, 3, 7, 3, 9},
        {9, 1, 1, 3, 3, 3, 3, 3, 3, 7, 7, 3, 3, 9},
        {9, 9, 1, 1, 3, 3, 7, 7, 7, 3, 1, 9, 9, 9},
        {9, 1, 3, 1, 1, 1, 3, 3, 3, 3, 3, 1, 9, 9},
        {1, 1, 1, 3, 3, 7, 7, 3, 1, 1, 9, 9, 9, 9},
        {9, 1, 1, 1, 1, 3, 3, 1, 1, 9, 9, 9, 9, 9},
        {9, 9, 1, 3, 7, 7, 7, 1, 9, 9, 9, 9, 9, 9},
        {9, 9, 1, 1, 1, 3, 1, 9, 9, 9, 9, 9, 9, 9},
        {9, 1, 3, 3, 7, 9, 9, 9, 9, 9, 9, 9, 9, 9},
        {1, 1, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9},
    };

    if (frame == 1) {
        for (int fila = 0; fila < 16; fila++) {
            for (int col = 0; col < 14; col++) {
                tornado[fila][col] = tornado1[fila][col];
            }
        }
    }
    else if (frame == 2) {
        for (int fila = 0; fila < 16; fila++) {
            for (int col = 0; col < 14; col++) {
                tornado[fila][col] = tornado2[fila][col];
            }
        }
    }
    else if (frame == 3) {
        for (int fila = 0; fila < 16; fila++) {
            for (int col = 0; col < 14; col++) {
                tornado[fila][col] = tornado3[fila][col];
            }
        }
    }

    for (int f = 0; f < 16; f++) {
        for (int c = 0; c < 14; c++) {
            ubicar(c + x, f + y);
            asignarcolor(tornado[f][c]);
            cout << char(219);
        }
    }
}
void borrartornado(int x, int y) {
    for (int f = 0; f < 16; f++) {
        for (int c = 0; c < 14; c++) {
            ubicar(c + x, f + y);
            asignarcolor(9);
            cout << char(219);
        }
    }
}
void movertornado(int& x, int& y, int& direccion1, int& direccion2) {
	if (y >= 64 || y <= 6) { direccion2 = direccion2 * -1; }
	else if (x >= 220 || x <= 8) { direccion1 = direccion1 * -1; }
    y = y + direccion2;
    x = x + direccion1;
}
void animartornado(int& x, int& y, int& frame, int& direccion1, int& direccion2, bool& tornado_activo) {
    if(tornado_activo=true){
    borrartornado(x, y);
    movertornado(x, y, direccion1, direccion2);
    frame++;
    if (frame > 3) {
        frame = 1;
    }
    dibujartornado(x, y, frame);
    //_sleep(1);
    }
    
}

void dibujarmedusa(int x, int y, int& frame) {
    int medusa[8][9];

    int medusa1[8][9] = {
        {9, 5, 7, 7, 7, 7, 7, 5, 9},
        {5, 7, 7, 7, 7, 7, 7, 7, 5},
        {7, 7, 7, 7, 7, 7, 7, 7, 7},
        {7, 7, 7, 7, 7, 7, 7, 7, 7},
        {5, 7, 5, 7, 5, 7, 5, 7, 5},
        {9, 5, 5, 5, 5, 5, 5, 5, 9},
        {9, 5, 9, 5, 9, 5, 9, 5, 9},
        {5, 9, 5, 9, 9, 9, 5, 9, 5}
    };

    int medusa2[8][9] = {
        {9, 9, 9, 5, 5, 5, 9, 9, 9},
        {9, 5, 7, 7, 7, 7, 7, 5, 9},
        {5, 7, 7, 7, 7, 7, 7, 7, 5},
        {5, 7, 7, 7, 7, 7, 7, 7, 5},
        {5, 5, 7, 5, 7, 5, 7, 5, 5},
        {9, 5, 5, 5, 5, 5, 5, 5, 9},
        {9, 9, 5, 9, 5, 9, 5, 9, 9},
        {9, 9, 9, 5, 9, 5, 9, 9, 9}
    };

    if (frame == 1) {
        for (int fila = 0; fila < 8; fila++) {
            for (int col = 0; col < 9; col++) {
                medusa[fila][col] = medusa1[fila][col];
            }
        }
    }
    else if (frame == 2) {
        for (int fila = 0; fila < 8; fila++) {
            for (int col = 0; col < 9; col++) {
                medusa[fila][col] = medusa2[fila][col];
            }
        }
    }

    for (int f = 0; f < 8; f++) {
        for (int c = 0; c < 9; c++) {
            ubicar(c + x, f + y);
            asignarcolor(medusa[f][c]);
            cout << char(219);
        }
    }
}
void borrarmedusa(int x, int y) {
    for (int f = 0; f < 8; f++) {

        for (int c = 0; c < 9; c++) {
            ubicar(c + x, f + y); asignarcolor(9); cout << char(219);
        }

    }
}
void movermedusa(int& x, int& y, int& direccion1, int& direccion2) {

    if (y >= 70 || y <= 5) { direccion2 = direccion2 * -1; }
    else if (x >= 260 || x <= 4) { direccion1 = direccion1 * -1; }
    y = y + direccion2;
    x = x + direccion1;
	
}
void animarmedusa(int& x, int& y, int& frame, int& direccion1, int& direccion2) {
   
    borrarmedusa(x, y);
	movermedusa(x, y, direccion1, direccion2); 
    frame++;
    if (frame > 2) frame = 1;
    dibujarmedusa(x, y, frame);
    _sleep(1);
}

