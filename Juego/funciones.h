#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <iostream>
using namespace std;


void bienvenida();
void menu();
void decision(int num);

void encabezadoUnjugador(int mododejuego, string name);
///peticion de los nombres multijugador
void ingresovectorNombres(string Nombres[2]);
///saludo a los jugadores
void SaludoMultijugador(string Nombres[2], string name, int mododejuego);
#endif // FUNCIONES_H_INCLUDED
