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

string peticion_nombre_Un_jugador(int mododejuego,string nombreMax,  int puntajeMax){

  decision(mododejuego);

  string name;
  cout<<"Ingrese el nombre: ";
  cin.ignore();
  getline(cin, name);
  system("cls");
  saludo_Un_Jugador(name,mododejuego);
  system("pause");
  return name;
}


void mostrarPuntuacionMasAlta( string nombreMax,  int puntajeMax = 0){
     system("cls");
    if(puntajeMax==0){
      cout << "TODAVIA NO HAY PUNTUACION MAXIMA";
    } else {
    cout << "LA PUNTUACION MAXIMA es del Jugador " << nombreMax
         << " con " << puntajeMax << " puntos!";
    }
    cout << endl<< endl;
     system("pause");
}

int menu_trasero(int mododejuego=0, string nombreMax="",  int puntajeMax = 0){
system("cls");
if(mododejuego!=0)
decision(mododejuego);

 system("cls");
  cout<<"--------------------------------------------------------Menu Principal------------------------------------------------"<<endl;
  cout << "1- Un jugador" << endl;
  cout << "2- Multijugador" << endl;
  /// cout <<"3- Simulado"<<endl;
  cout << "4- Ver Puntuacion mas alta" << endl;
  cout << "0- Salir del juego" << endl;
  cout << "" << endl;
  cout << "Seleccione el modo de juego: ";

  int modoDeJuego;
  cin >> modoDeJuego;
  system("cls");
  switch (modoDeJuego) {
    case 0:
      return 0;
      break;
    case 1:{
          string nombre = peticion_nombre_Un_jugador(modoDeJuego, nombreMax,   puntajeMax);
          encabezadoUnjugador(nombre,mododejuego,nombreMax,puntajeMax);
      }
      break;
    case 2:{
          system("cls");
          decision(mododejuego);
          cin.ignore();
          string nombres[2] = {};
          for(int i=1; i<3; i++){
              cout<<"Ingrese el nombre del jugador "<<i<<": ";
              getline(cin,nombres[i-1]);
          }
          SaludoMultijugador(nombres,mododejuego);
          encabezadoMultijugador(nombres,mododejuego,  nombreMax,   puntajeMax);
        }

      break;

      /*case 3:
          peticion_nombre_Un_jugador_simulado(modoDeJuego);
      break;*/
    case 4:
      mostrarPuntuacionMasAlta( nombreMax,   puntajeMax);
      menu_trasero( mododejuego,  nombreMax,   puntajeMax );
    break;
  }
}




