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
menu();

}


void menu(){

system("cls");

cout<<"--------------------------------------------------------Menu Principal------------------------------------------------"<<endl;
cout<<"Modos de juego: "<<endl;
cout<<"1- Un jugador"<<endl;
cout<<"2- multijugador"<<endl;
///cout<<"3- simulado"<<endl;
cout<<""<<endl;
cout<<"Seleccione el modo de juego: ";

uno_O_Dos_Jugadores();

}



void uno_O_Dos_Jugadores(){
string nombres[2]={};
int modoDeJuego;
cin>>modoDeJuego;
system("cls");
switch(modoDeJuego){
case 1:
peticion_nombre_Un_jugador(modoDeJuego);
break;


case 2:
ingresovectorNombres(nombres,modoDeJuego);
break;

/*case 3:
    peticion_nombre_Un_jugador_simulado(modoDeJuego);
break;*/

}
}







void menu_trasero(int mododejuego){
system("cls");
decision(mododejuego);
string menu_fin="Menu del fin de juego";
rlutil::locate(50,3);
cout<<menu_fin<<endl;
string opcion_1= "1- Volver a jugar";
rlutil::locate(1,5);
cout<<opcion_1<<endl;
string opcion_2="2- Volver al menu principal";
rlutil::locate(1,7);
cout<<opcion_2<<endl;
string opcion_3="3- Salir del juego";
rlutil::locate(1,9);
cout<<opcion_3<<endl;
string eleccion="Elija una opcion: ";
rlutil::locate(1,11);
cout<<eleccion;
elegir_menu_final();

}

void elegir_menu_final(){

int num;
cin>>num;
switch(num){

case 1:
       menu();
    break;
case 2:
    bienvenida();
    break;



}



}

