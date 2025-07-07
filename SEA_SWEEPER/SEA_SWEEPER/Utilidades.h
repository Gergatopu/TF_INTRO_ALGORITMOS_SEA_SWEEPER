#pragma once
#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

void ventana() {
    int x = 0; int y = 0;
    Console::SetWindowSize(300, 100);
}

void asignarcolor(int color) {
    switch (color)
    {
    case 0: Console::ForegroundColor = ConsoleColor::Black; break;
    case 1: Console::ForegroundColor = ConsoleColor::Blue; break;
    case 2: Console::ForegroundColor = ConsoleColor::Green; break;
    case 3: Console::ForegroundColor = ConsoleColor::Cyan; break;
    case 4: Console::ForegroundColor = ConsoleColor::Red; break;
    case 5: Console::ForegroundColor = ConsoleColor::Magenta; break;
    case 6: Console::ForegroundColor = ConsoleColor::Yellow; break;
    case 7: Console::ForegroundColor = ConsoleColor::White; break;
    case 8: Console::ForegroundColor = ConsoleColor::Gray; break;
    case 9: Console::ForegroundColor = ConsoleColor::DarkBlue; break;
    case 10: Console::ForegroundColor = ConsoleColor::DarkGreen; break;
    case 11: Console::ForegroundColor = ConsoleColor::DarkCyan; break;
    case 12: Console::ForegroundColor = ConsoleColor::DarkRed; break;
    case 13: Console::ForegroundColor = ConsoleColor::DarkMagenta; break;
    case 14: Console::ForegroundColor = ConsoleColor::DarkYellow; break;
    case 15: Console::ForegroundColor = ConsoleColor::DarkGray; break;

    default: Console::ForegroundColor = ConsoleColor::Blue; break;

    }

}

void ubicar(int x, int y) {
    Console::SetCursorPosition(x, y);
}

int contador_colisiones(int& xobj, int& yobj, int& xpro, int& ypro, int& xbuzo, int& ybuzo, int& contador, bool& proyectilactivo) {
    if (xpro > xobj && xpro<xobj + 11 && ypro>yobj && ypro < yobj + 5) { ubicar(xpro, ypro); asignarcolor(9); xpro = xbuzo; ypro = ybuzo; contador++; proyectilactivo = false; }

    return contador;
}
int contador_puntos(int xbuzo, int ybuzo, int& contador, int xbasura[3], int ybasura[3], bool basuraactiva[3]) {
    for(int i = 0; i < 3; i++) {
        if (xbuzo > xbasura[i] && xbuzo < xbasura[i] + 11 && ybuzo < ybasura[i] && ybuzo > ybasura[i] - 5) {
			if (!basuraactiva[i]) continue;
            contador++;
            basuraactiva[i] = false;
        }
        if (contador >= 3) break;
	}
    return contador;
}
