#pragma once
#include "Utilidades.h"
#include "Enemigos.h"
#include "Personaje_P.h"
#include "basura.h"
#include "Aliados.h"
#include "items.h"
#include "contadores.h"
#include "Mapas.h"
#include "Interfaz.h"
#include "GAMEOVER.h"
#include "Finalboss.h"

void transicion_nivel() {
    system("cls");
    system("COLOR 97");
    Sleep(80);
    system("COLOR 17");
    Sleep(80);
    system("COLOR 87");
    Sleep(80);
    system("COLOR 07");
    Sleep(80);
}

void nivel_1(bool& nivel_pasado, bool& nivel_perdido) {
    

    int contador_bucles = 1;
    int contador_segundos = 0;

    //buzo
    int xbuzo = 30, ybuzo = 70;
    int frame = 1;
    int xproyectil = 30, yproyectil = 70;
    int direccionpersonaje = 4;
    bool proyectilactivo = false;
    int contador = 0;
    int turbo = 1;

    //basura

    int xbasura = 60;
    int ybasura = 1;
    bool basuraactiva = false;
    int tipo_basura = 1;
    int contador_recolecciones = 0;

    //caparazon item
    int xcaparazon = 100, ycaparazon = 1;
    bool caparazon_activo = false;
    int item_recogido = 1;
	int tiempo_turbo = 0;
    int frame_caparazon = 1;
	

    //nivel pasado o no
    nivel_pasado = false;
    int nivel = 1;

    //
    int xpez[2];
    int ypez[2];
	for (int i = 0; i < 2; i++) {
		xpez[i] = x_aleatorio();
		ypez[i] = y_aleatorio();
	}
    
    
    int framepez = 1;
    int direccionpez = 0;

    mapa1();
    while (!nivel_pasado) {
        
        animarbuzo(xbuzo, ybuzo, frame, xproyectil, yproyectil, proyectilactivo, direccionpersonaje, turbo);
		for (int i = 0; i < 2; i++) {
			animarpez(xpez[i], ypez[i], framepez, direccionpez);
		}
		
        contador_de_puntos(230, 2, contador_recolecciones);
		texto_turbo(20, 2, turbo);
        matriz_segundos(contador_segundos, 140, 2);
        

        if ((xbasura + 3 >= xbuzo && xbasura - 6 <= xbuzo) && ybasura - 5 <= ybuzo && ybasura + 3 >= ybuzo) {
            !basuraactiva;
            borrar_galon(xbasura, ybasura);
            ybasura = 1;
            xbasura = x_aleatorio();
            tipo_basura = rand() % 3 + 1;
            contador_recolecciones++;
            
        }
        else {

            basuraactiva = true;

            if (tipo_basura == 1) {
                animar_galon(xbasura, ybasura, 70, basuraactiva);
            }
            else if (tipo_basura == 2) {
                animar_bolsa(xbasura, ybasura, 70, basuraactiva);
            }
            else if (tipo_basura == 3) {
                animar_botella(xbasura, ybasura, 70, basuraactiva);
            }
        }
        //--------------------------------------------------------------------------
        //CUANDO EL BUZO RECOGE EL CAPARAZON AUMENTA SU VELOCIDAD POR 2-------------
        //--------------------------------------------------------------------------

        if ((xcaparazon + 3 >= xbuzo && xcaparazon - 6 <= xbuzo) && ycaparazon - 5 <= ybuzo && ycaparazon + 3 >= ybuzo) {

            !caparazon_activo;
            borrar_caparazon(xcaparazon, ycaparazon);
            ycaparazon = 1;
            xcaparazon = x_aleatorio();
            _sleep(300);
            turbo = 2;
            item_recogido++;
            tiempo_turbo = contador_segundos;
			

        }
        //-------------------------------------------------------------------------------------------
        //SI NO LO TOMA Y EL CAPARAZON LLEGA AL LIMITE DESAPARECE Y SE GENERA OTRO LUEGO DE UN TIEMPO
        //-------------------------------------------------------------------------------------------
        else {
            if (contador_bucles > (100 * item_recogido)) {
                if (ycaparazon < 70) {
                    caparazon_activo = true;
                    animar_caparazon(xcaparazon, ycaparazon, 70, caparazon_activo, contador_bucles, frame_caparazon);
                }
                else {
                    caparazon_activo = false;
                    borrar_caparazon(xcaparazon, ycaparazon);
                    item_recogido++;
                    ycaparazon = 1;
                    xcaparazon = x_aleatorio();
                }
            }
        }

        //----------------------------------------------------------------------------------------------------
        //SI EL JUGADOR COLISIONA CON UN PEZ, SE TERMINA EL JUEGO Y SE MUESTRA UN MENSAJE DE GAME OVER
        //----------------------------------------------------------------------------------------------------

        for (int i = 0; i < 2; i++) {

            if ((xpez[i] + 4 >= xbuzo && xpez[i] - 6 <= xbuzo) && ypez[i] - 4 <= ybuzo && ypez[i] + 3 >= ybuzo) {
                nivel_perdido = true;
                _sleep(300);
            }
        }

        contador_bucles += 1;
        if (contador_bucles % 8 == 0) {
            contador_segundos++;
        }

		if (contador_segundos >= 60) {
			nivel_perdido = true;
		}
        
		if (contador_recolecciones == 10) {
			nivel_pasado = true;
		}  

        if (contador_segundos == tiempo_turbo + 10 && turbo == 2) {
            turbo = 1;
            caparazon_activo = false;
            borrar_caparazon(xcaparazon, ycaparazon);
            item_recogido++;
        }

		//---------------------------------------------
        //SI PASAN LOS 60 SEGUNDOS, PIERDE EL JUEGO
		//---------------------------------------------

		if (nivel_perdido) {
            system("cls");
            system("COLOR 47");
            Sleep(80);
            system("COLOR 74");
            Sleep(80);
            system("COLOR 07");
            Sleep(80);
            system("COLOR 04");
            Sleep(80);
            system("COLOR 07");
            Sleep(80);
            reproducir_gameover();
			_sleep(1000);
            break;
			
		}

    }

}

void nivel_2(bool& nivel_pasado, bool& nivel_perdido) {

    int contador_bucles = 1;
    int contador_segundos = 0;

    //buzo
    int xbuzo = 30, ybuzo = 70;
    int frame = 1;
    int xproyectil = 30, yproyectil = 70;
    int direccionpersonaje = 4;
    bool proyectilactivo = false;
    int contador = 0;
    int turbo = 1;

    //medusa
    int xm[4];
    for (int i = 0; i < 4; i++) {
        xm[i] = 20 + rand() & (250 - 20 + 1); //1 - 280
    }
    int ym[4];
    for (int i = 0; i < 4; i++) {
        ym[i] = 15 + rand() & (60 - 15 + 1); //1 - 70
    }
    int fm[4];
    for (int i = 0; i < 4; i++) {
        fm[i] = 1 + rand() & (2 - 1 + 1); //1 - 2
    }
    int direccion1[4] = {-2, 2, -2, 2};
	
    int direccion2[4] = { -2, 2, -2, 2 };
	
    //basura

    int xbasura = 60;
    int ybasura = 1;
    bool basuraactiva = false;
    int tipo_basura = 1;
    int contador_recolecciones = 0;

    //caparazon item
    int xcaparazon = 100, ycaparazon = 1;
    bool caparazon_activo = false;
    int item_recogido = 1;
    int tiempo_turbo = 0;
    int frame_caparazon = 1;

    //nivel pasado o no
     nivel_pasado = false;
	 nivel_perdido = false;
   
    mapa3();

    while (!nivel_pasado) {
        texto_turbo(20, 2, turbo);
        animarbuzo(xbuzo, ybuzo, frame, xproyectil, yproyectil, proyectilactivo, direccionpersonaje, turbo);
		
        for (int i = 0; i < 4; i++) {
            animarmedusa(xm[i], ym[i], fm[i], direccion1[i], direccion2[i]);
        }
        

        contador_de_puntos(230, 2, contador_recolecciones);
       
        matriz_segundos(contador_segundos, 120, 2);
        

        if ((xbasura + 3 >= xbuzo && xbasura - 6 <= xbuzo) && ybasura - 5 <= ybuzo && ybasura + 3 >= ybuzo) {
            !basuraactiva;
            borrar_galon(xbasura, ybasura);
            ybasura = 1;
            xbasura = x_aleatorio();
            tipo_basura = rand() % 3 + 1;
            contador_recolecciones++;
            
        }
        else {

            basuraactiva = true;

            if (tipo_basura == 1) {
                animar_galon(xbasura, ybasura, 70, basuraactiva);
            }
            else if (tipo_basura == 2) {
                animar_bolsa(xbasura, ybasura, 70, basuraactiva);
            }
            else if (tipo_basura == 3) {
                animar_botella(xbasura, ybasura, 70, basuraactiva);
            }
        }
        //--------------------------------------------------------------------------
        //CUANDO EL BUZO RECOGE EL CAPARAZON AUMENTA SU VELOCIDAD POR 2-------------
        //--------------------------------------------------------------------------

        if ((xcaparazon + 3 >= xbuzo && xcaparazon - 6 <= xbuzo) && ycaparazon - 5 <= ybuzo && ycaparazon + 3 >= ybuzo) {

            !caparazon_activo;
            borrar_caparazon(xcaparazon, ycaparazon);
            ycaparazon = 1;
            xcaparazon = x_aleatorio();
            _sleep(300);
            turbo = 2;
            item_recogido++;
            tiempo_turbo = contador_segundos;

        }

        if (contador_segundos == tiempo_turbo + 10 && turbo == 2) {
            turbo = 1;
            caparazon_activo = false;
            borrar_caparazon(xcaparazon, ycaparazon);
            item_recogido++;
        }

        //-------------------------------------------------------------------------------------------
        //SI NO LO TOMA Y EL CAPARAZON LLEGA AL LIMITE DESAPARECE Y SE GENERA OTRO LUEGO DE UN TIEMPO
        //-------------------------------------------------------------------------------------------
        else {
            if (contador_bucles > (100 * item_recogido)) {
                if (ycaparazon < 70) {
                    caparazon_activo = true;
                    animar_caparazon(xcaparazon, ycaparazon, 70, caparazon_activo, contador_bucles, frame_caparazon);
                }
                else {
                    caparazon_activo = false;
                    borrar_caparazon(xcaparazon, ycaparazon);
                    item_recogido++;
                    ycaparazon = 1;
                    xcaparazon = x_aleatorio();
                }
            }
        }

        contador_bucles += 1;

        //----------------------------------------------------------------------------------------------------
		//SI EL JUGADOR COLISIONA CON UNA MEDUSA, SE TERMINA EL JUEGO Y SE MUESTRA UN MENSAJE DE GAME OVER
		//----------------------------------------------------------------------------------------------------

        for(int i=0; i<4; i++){

            if ((xm[i] + 4 >= xbuzo && xm[i] - 6 <= xbuzo) && ym[i] - 5 <= ybuzo && ym[i] + 4 >= ybuzo) {
				nivel_perdido = true;
                _sleep(300);
        }
        }

        if (nivel_perdido == true) {
            system("cls");
            system("COLOR 47");
            Sleep(80);
            system("COLOR 74");
            Sleep(80);
            system("COLOR 07");
            Sleep(80);
            system("COLOR 04");
            Sleep(80);
            system("COLOR 07");
            Sleep(80);
            reproducir_gameover();
            _sleep(1000);
            break;
            
        }

        //---------------------------------------------------------------------------------------------------
		//EL JUGADOR GANA LA PARTIDA SI LUEGO DE 60 SEGUNDOS LOGRA RECOLECTAR AL MENOS 10 ITEMS DE BASURA----
        //---------------------------------------------------------------------------------------------------
       
        if (contador_bucles % 8 == 0) {
            contador_segundos++;
        }
        
        if (contador_recolecciones >= 10) {
            nivel_pasado = true;
        }
       
        }
    }
    
void nivel_3(bool& nivel_pasado, bool& nivel_perdido) {
    mapa2();

    int contador_bucles = 1;
    int contador_segundos = 0;


    //Posición del Boss
    int xFinalBoss = 240;
    int yFinalBoss = 15;
    int frame_jefe = 1;
    int vidas_boss = 10;
    int frame_vida = 1;

    //Posición del buzo
    int xbuzo = 30, ybuzo = 70;
    int frame_buzo = 1;
    int xproyectil_buzo = 30, yproyectil_buzo = 70;
    int direccionpersonaje = 4;
    bool proyectilactivo = false;
    int turbo = 2;

    //tornados

    int xt[4];
    for (int i = 0; i < 4; i++) {
        xt[i] = 20 + rand() & (250 - 20 + 1); //1 - 280
    }
    int yt[4];
    for (int i = 0; i < 4; i++) {
        yt[i] = 15 + rand() & (60 - 15 + 1); //1 - 70
    }
    int ft[4];
    for (int i = 0; i < 4; i++) {
        ft[i] = 1 + rand() & (3 - 1 + 1);
    }
    int direccion1[4] = { 4,-4,4,-4 };

    int direccion2[4] = { 4,-4,4,-4 };

    bool tornado_activo = false;
    int desapariciones_tornado = 1;

    nivel_pasado = false;
    nivel_perdido = false;


    dibujarCabezaFinalBoss(xFinalBoss, yFinalBoss);
    while (!nivel_pasado) {
        
        //Animación del cuerpo en cada frame
        animarCuerpoFinalBoss(xFinalBoss, yFinalBoss + 33, frame_jefe);
        
        vida_jefe(15, 5, vidas_boss, frame_vida);

        //Animación del buzo
        animarbuzo(xbuzo, ybuzo, frame_buzo, xproyectil_buzo, yproyectil_buzo, proyectilactivo, direccionpersonaje, turbo);


        animartornado(xt[0], yt[0], ft[0], direccion1[0], direccion2[0], tornado_activo);


        //---------------------------------------------------------------
        //SI EL PROYECTIL COLISIONA CON EL JEFE, EL JEFE PIERDE UNA VIDA
        //---------------------------------------------------------------

        if (xproyectil_buzo > xFinalBoss && xproyectil_buzo < xFinalBoss + 20 && yproyectil_buzo > yFinalBoss && yproyectil_buzo < yFinalBoss + 60) {

            vidas_boss = vidas_boss - 1;

        }

        //----------------------------------------------------------------------------------------------------
        //SI EL JUGADOR COLISIONA CON EL JEFE O SE ACERCA MUCHO A EL, SE TERMINA EL JUEGO Y SE MUESTRA UN MENSAJE DE GAME OVER
        //SI EL JUGADOR COLISIONA CON EL TORNADO, SE TERMINA EL JUEGO Y SE MUESTRA EL MENSAJE DE GAME OVER
        //----------------------------------------------------------------------------------------------------

        if (xFinalBoss - 3 <= xbuzo) {
            nivel_perdido = true;
            _sleep(300);
        }

		if ((xt[0] + 10 >= xbuzo && xt[0] - 8 <= xbuzo) && yt[0] - 9 <= ybuzo && yt[0] + 8 >= ybuzo) {
            nivel_perdido = true;
            _sleep(300);
		}

        if (nivel_perdido == true) {
            system("cls");
            system("COLOR 47");
            Sleep(80);
            system("COLOR 74");
            Sleep(80);
            system("COLOR 07");
            Sleep(80);
            system("COLOR 04");
            Sleep(80);
            system("COLOR 07");
            Sleep(80);
            reproducir_gameover();
            _sleep(1000);
            break;

        }


        //---------------------------------------------------------------------------------------------------------
        //SI EL JEFE SE QUEDA SIN VIDAS, EL JUGADOR GANA LA PARTIDA
        //----------------------------------------------------------------------------------------------------------

        if (vidas_boss <= 0) {
            _sleep(2000);
            nivel_pasado = true;
        }

        //--------------------------------------------------
        //DESPUES DE CIERTO TIEMPO EL TORNADO SE ACTIVA
        //--------------------------------------------------

        

		if (xt[0] + 3 >= xbuzo && xt[0] - 6 <= xbuzo && yt[0] - 5 <= ybuzo && yt[0] + 3 >= ybuzo) {
			nivel_perdido = true;
			_sleep(300);
		}
        

        Sleep(1);
            contador_bucles += 1;

    }

}

