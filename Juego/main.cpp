#include <iostream>
#include "funciones.h"
#include <windows.h>
#include <stdio.h>
#include <ctime>
#include <algorithm>
using namespace std;


int main()
{
///semilla
 srand(time(0));

///diseño de la consola
system("COLOR F0");

///Nombre del juego y saludo inicial
bienvenida();

///Menu principal


///decision del modo de juego
int modoDeJuego;
cin>>modoDeJuego;
system("cls");
decision(modoDeJuego);

///Nombres
string name;
string nombres[2]={};
if(modoDeJuego==1){
cout<<"Ingrese el nombre: ";
cin.ignore();
getline(cin, name);

///saludo a un jugador
SaludoMultijugador(nombres, name, modoDeJuego);
encabezadoUnjugador(modoDeJuego, name);

}
///Saludo a jugadores
else{
    ingresovectorNombres(nombres);
    SaludoMultijugador(nombres, name, modoDeJuego);
    encabezadoMultijugador(nombres,modoDeJuego);

}
















}
