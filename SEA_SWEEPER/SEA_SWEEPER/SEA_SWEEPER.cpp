#include "pch.h"
#include "iostream"
#include "windows.h"
#include "Utilidades.h"
#include "Aliados.h"
#include "Enemigos.h"
#include "Interfaz.h"
#include "Mapas.h"
#include "Personaje_P.h"
#include <cstdlib>
#include "basura.h"
#include "items.h"
#include "contadores.h"
#include "game.h"
#include "Instrucciones.h"
#include "Ending.h"
#include "Finalboss.h"
#include "GAMEOVER.h"
using namespace System;
using namespace std;

int main() {

	bool nivel_pasado = false;
	bool nivel_perdido = false;
    Console::CursorVisible = false;
     ventana();  
     //reproducir_presentacion();
     //mostrar_introduccion();
     //mostrar_titulo();
     //mostrar_instrucciones();_sleep(10000);
     //system("cls");
     //mostrar_pantalla_carga();
     //nivel_1(nivel_pasado, nivel_perdido);
    //if (nivel_pasado) {
    //    nivel_pasado = false;
    //    nivel_perdido = false;
      
      transicion_nivel();
      pantalla_victoria();
      mostrar_pantalla_carga();
      system("cls");
      nivel_2(nivel_pasado, nivel_perdido);
        if (nivel_pasado) {
           nivel_pasado = false;
           nivel_perdido = false;
           transicion_nivel();
           pantalla_victoria();
           mostrar_pantalla_carga();
           system("cls");

            nivel_3(nivel_pasado, nivel_perdido);
            if (nivel_pasado) {
                dibujar_ending(0, 0);
           }
        
    
       // }
     
    }
	
    system("pause>0");
    return 0;
    }
    
