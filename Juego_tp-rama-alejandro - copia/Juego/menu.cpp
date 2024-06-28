#include <iostream>
#include "funciones.h"
#include <windows.h>
#include <stdio.h>
#include <ctime>
#include "rlutil.h"
using namespace std;


void bienvenida(){
system("cls");
string inicial="ESCALERA O 100";
rlutil::locate(52,1);
cout<<inicial<<endl;
string inicial_2="BIENVENIDO AL ARCADE";
rlutil::locate(50,2);
cout<<inicial_2<<endl;
for(int i=1; i<121; i++ ){
string guion="-";
rlutil::locate(i,3);
cout<<guion;

}
system("pause");
}

void mostrarPuntuacionMasAlta( string nombreMax="",  int puntajeMax = 0){}

int menu_trasero(int mododejuego=0, string nombreMax="",  int puntajeMax = 0){
system("cls");
if(mododejuego!=0)
decision(mododejuego);

 system("cls");
  cout<<"--------------------------------------------------------Menu Principal------------------------------------------------"<<endl;
  cout << "1- Un jugador" << endl;
  cout << "2- Multijugador" << endl;
  /// cout <<"3- Simulado"<<endl;
  cout << "4- Ver Puntuación más alta" << endl;
  cout << "0- Salir del juego" << endl;
  cout << "" << endl;
  cout << "Seleccione el modo de juego: ";

  int modoDeJuego;
  cin >> modoDeJuego;
  system("cls");
  //todo string nombreMax,  int puntajeMax

  switch (modoDeJuego) {
    case 0:
      return 0;
      break;
    case 1:
      peticion_nombre_Un_jugador(modoDeJuego, nombreMax,   puntajeMax);
      break;

    case 2:
      ingresovectorNombres(modoDeJuego, nombreMax,   puntajeMax);
      break;

      /*case 3:
          peticion_nombre_Un_jugador_simulado(modoDeJuego);
      break;*/
    case 4:
      mostrarPuntuacionMasAlta( nombreMax,   puntajeMax);
    break;
  }
}

