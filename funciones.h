#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <iostream>
using namespace std;


void bienvenida();
void menu();
void decision(int num);

///peticion de los nombres multijugador
void ingresovectorNombres(string nombres[2], int num);


///saludo a los jugadores
void SaludoMultijugador(string nombres[2], int mododejuego);

void saludo_Un_Jugador(string name, int mododejuego);

///encabezado de jugador(nombre,ronda,turno y puntuacion)
void encabezadoUnjugador(int mododejuego, string name);

/// Encabezado multijugador
void encabezadoMultijugador(string nombres[2], int modoDeJuego);

///numero random
int tirarDado();

/// array con los 6 valores
void seisDados(int dados[6]);

/// recorrido del array y mostrado en pantalla

/// ordenar el array
void ordenarVector(int vec[]);

void dadosOrdenados(int dados[6]);



/// sumar puntos del turno
void suma_de_puntajes(int i,int dados[6],int ronda,int puntajes[2],int puntajes_rondas_J1[3],int puntajes_rondas_J2[3]);


int marcador_Unjugador(string name, int turno, int dados[6], int puntaje_J1[1]);

void marcador_multijugador(string nombres[2],int dados[6],int turno, int puntajes[2], int espuntaje);



void nose_verdado(int dados[6]);

void guardado_del_puntaje(int i,int ronda,int a,int b, int puntajes_rondas_J1[3], int puntajes_rondas_J2[3]);

int verificacion_100(int puntajes[2]);

void buscardor_maximo_puntaje(int i, int puntajes_rondas_J1[3], int puntajes_rondas_J2[3], int puntajes[2]);


void ganador(string nombre);

void puntaje_UnJugador(int ronda,int dados[6],int tiradas[3]);

void guardado_J1(int a, int tiradas[3], int ronda);

void max_puntacion(int tiradas[3], int puntaje_J1[1]);


void guardar_maximo(int com1,int comp2,int puntajes[2]);


void icono_dados(int dados[6]);



    void imprimirCara1();
    void imprimirCara2();
    void imprimirCara3();
    void imprimirCara4();
    void imprimirCara5();
    void imprimirCara6();


 bool revision_de_escalera_dos_jugadores(int puntajes[2], int i, int dados[6]);


bool reglas_dados(int dados[6], int ronda, int tiradas[3]);


bool diez_O_Cero(int tiradas[3], int ronda, int valor);


bool escalera(int dados[6]);



void ganador_por_escalera(string ganador_de_la_escalera);


int revision_de_ganador_por_puntaje(string nombres[2], string nombre_ganador, int puntajes[2]);


void impresion_ganador_escalera(string titulo_ganador_escalera ,string titulo_ganador_escalera2, string ganador_de_la_escalera);

void impresion_ganador(string cadena_ganador, string cadena_ganador2,string nombre);

void peticion_nombre_Un_jugador(int num);

void uno_O_Dos_Jugadores();


void menu_trasero(int num);

void elegir_menu_final();


int revision_ganador_un_jugador(int puntaje_J1[1]);

#endif // FUNCIONES_H_INCLUDED
