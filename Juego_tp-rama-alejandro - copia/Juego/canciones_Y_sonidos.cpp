#include <iostream>
#include "rlutil.h"
#include <ctime>
#include <thread>
#include <chrono>
#include <windows.h>
#include <cstdio>
using namespace std;

void cancion_menu(){

    PlaySound(TEXT("menu.wav"),NULL,SND_FILENAME | SND_ASYNC);
    getchar();



}

void sonido_Dados(){

    PlaySound(TEXT("dados.wav"),NULL,SND_FILENAME | SND_ASYNC);
    getchar();



}

void sonido_de_victoria_puntaje(){

PlaySound(TEXT("Sonido_De_victoria_por_puntaje.wav"),NULL,SND_FILENAME | SND_ASYNC);
getchar();


}

void sonido_de_victoria_escalera(){

PlaySound(TEXT("victoria_por_escalera.wav"),NULL,SND_FILENAME | SND_ASYNC);
getchar();

}


void detener_musica(){

    PlaySound(nullptr, nullptr, 0);

}


void espera_por_sonido(){

 this_thread::sleep_for(chrono::seconds(1));

}
