#include <iostream>
#include"funciones.h"
#include"rlutil.h"
using namespace std;


void puntaje_UnJugador(int ronda,int dados[6],int tiradas[3]){

int a=0;
for(int x=0; x<6; x++){
    a+=dados[x];
}

guardado_J1(a, tiradas,ronda);

}


void guardado_J1(int a, int tiradas[3], int ronda){
tiradas[ronda-1]=a;

}



void max_puntacion(int tiradas[3], int puntaje_J1[1]){

int comJ1=0;
for(int x=0; x<3; x++){
if(comJ1<tiradas[x]){
    comJ1=tiradas[x];
     }
  }

puntaje_J1[0]+=comJ1;

}

