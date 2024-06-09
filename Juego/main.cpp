#include <iostream>
#include "funciones.h"
#include <windows.h>
#include <stdio.h>
using namespace std;


int main()
{
///diseño de la consola
system("COLOR F0");

///Nombre del juego y saludo inicial
bienvenida();

///Menu principal
menu();

///decision del modo de juego
int modoDeJuego;
cin>>modoDeJuego;
system("cls");
decision(modoDeJuego);

///Nombres
string name;
string Nombres[2]={};
if(modoDeJuego==1){
cout<<"Ingrese el nombre: ";
cin.ignore();
getline(cin, name);

///saludo a un jugador
SaludoMultijugador(Nombres, name, modoDeJuego);
encabezadoUnjugador(modoDeJuego, name);
}
///Saludo a jugadores
else{
    ingresovectorNombres(Nombres);
    SaludoMultijugador(Nombres, name, modoDeJuego);

}
















}
