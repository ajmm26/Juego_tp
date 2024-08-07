#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <iostream>
using namespace std;


void bienvenida(int maximo);
void menu(int ban);
void decision(int num);

///peticion de los nombres multijugador
void ingresovectorNombres(string nombres[2], int num, int maximo);


///saludo a los jugadores
void SaludoMultijugador(string nombres[2], int mododejuego, int maximo);

void saludo_Un_Jugador(string name, int mododejuego);

///encabezado de jugador(nombre,ronda,turno y puntuacion)
void encabezadoUnjugador(int mododejuego, string name, int maximo);

/// Encabezado multijugador
void encabezadoMultijugador(string nombres[2], int modoDeJuego, int maximo);

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


void ganador(string nombre,int valor,string nombre2, int valor2);

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


 bool revision_de_escalera_dos_jugadores(int dados[6],int i,int puntajes[2]);


bool reglas_dados(int dados[6], int ronda, int tiradas[3]);


bool diez(int tiradas[3], int ronda, int valor);


bool escalera(int dados[6]);



void ganador_por_escalera(string ganador_de_la_escalera);


int revision_de_ganador_por_puntaje(string nombres[2], int puntajes[2]);


void impresion_ganador_escalera(string titulo_ganador_escalera ,string titulo_ganador_escalera2, string ganador_de_la_escalera);

void impresion_ganador(string cadena_ganador,string cadena_ganador3,string nombre,int valor,int valor2,string nombre2);

void peticion_nombre_Un_jugador(int num, int maximo);

void uno_O_Dos_Jugadores(int maximo);


void menu_trasero(int num, int maximo);

void elegir_menu_final(int maximo);

int revision_ganador_un_jugador(int puntaje_J1[1]);

bool cero(int dados[6], int tirada[3], int ronda);

void dados_dibujados(int dados[6]);
void dibujar_cuadrado(int posx, int posy);
void dibujar_dado(int numero, int posx, int posy);
void espacios();
void imprimir_tirada(int dados[6],bool tirada_de_diez, bool tirada_de_cero, bool revision_escalera);
void ganador_un_jugador(int puntaje, string name);
int corte_por_escalera();

void jugador_modo_simulado(int mododejuego, string name,int maximo);
  int modo_simulado(string name, int turno, int dados[6],int puntaje_J3[1]);
  void dadosOrdenados_simulados(int dados[6]);
  void ordenarVector_simulado(int dados[6]);
  void seisDados_simulados(int dados[6]);
  void peticion_nombre_Un_jugador_simulado(int mododejuego, int maximo);
  void proximo_turno(string nombres[2], int i, int puntajes[2]);
  void imprimir_proximo_turno(string nombres[2],int i, int posx, int posy);

   void segundo_lugar(int valor, string nombre);
   void max_Puntaje_global(int puntaje, int mododejuego,int max_punt);
   void init_max_punt();
   void cancion_menu();
   void detener_musica();
 void espera_por_sonido();
 void sonido_Dados();
 void sonido_de_victoria_puntaje();
 void sonido_de_victoria_escalera();
 void marcador_multijugador_simulado(string nombres[2], int dados[6], int turno,int puntajes[2],int espuntaje);
 void encabezadoMultijugador_Simulado(string nombres[2], int mododejuego,int max_punt);

#endif // FUNCIONES_H_INCLUDED
