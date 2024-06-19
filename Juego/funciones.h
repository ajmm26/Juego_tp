#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <iostream>
using namespace std;


void bienvenida();
void menu();
void decision(int num);

///peticion de los nombres multijugador
void ingresovectorNombres(string nombres[2]);


///saludo a los jugadores
void SaludoMultijugador(string nombres[2], string name, int mododejuego);


///encabezado de jugador(nombre,ronda,turno y puntuacion)
void encabezadoUnjugador(int mododejuego, string name);

/// Encabezado multijugador
void encabezadoMultijugador(string nombres[2], int modoDeJuego);

///numero random
int tirarDado();

/// array con los 6 valores
void seisDados(int dados[6]);

/// recorrido del array y mostrado en pantalla
void visualizacion_Del_dado(int dados[]);

/// ordenar el array
void ordenarVector(int vec[]);




/// sumar puntos del turno
int suma_del_turno(int dados[6], string nombres[2],int puntaje);


int sumaTotal(int dados[6], string nombres[2],int puntaje);




int marcador_multijugador(string nombres[2],int dados[6],int turno, int puntajes[2]);

void suma_De_puntajes(int puntajes[2],int i,int espuntaje);


void nose_verdado(int dados[6]);
#endif // FUNCIONES_H_INCLUDED
