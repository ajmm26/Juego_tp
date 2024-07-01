#include <iostream>
#include "funciones.h"
#include <windows.h>
#include <stdio.h>
#include <ctime>
#include "rlutil.h"
using namespace std;


void init_max_punt(){
int max_punt=0;
rlutil::locate(45,15);
cout<<"PRESIONA UNA TECLA PARA EMPEZAR"<<endl;
cancion_menu();
bienvenida(max_punt);
}

void bienvenida(int max_punt){
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
menu(max_punt);

}


void menu(int max_punt){
system("cls");
cout<<"--------------------------------------------------------Menu Principal------------------------------------------------"<<endl;
rlutil::locate(50,3);
cout<<"Maxima puntuacion global: "<<max_punt<<endl;
cout<<"Modos de juego: "<<endl;
cout<<"1- Un jugador"<<endl;
cout<<"2- multijugador"<<endl;
/*cout<<"3- simulado un jugador"<<endl;
cout<<"4- simulado multijugador"<<endl;*/
cout<<""<<endl;
cout<<"Seleccione el modo de juego: ";

uno_O_Dos_Jugadores(max_punt);

}



void uno_O_Dos_Jugadores(int max_punt){
string nombres[2]={};
int modoDeJuego;
cin>>modoDeJuego;
system("cls");
switch(modoDeJuego){
case 1:
peticion_nombre_Un_jugador(modoDeJuego,max_punt);
break;


case 2:
ingresovectorNombres(nombres,modoDeJuego,max_punt);
break;

/*case 3:
   peticion_nombre_Un_jugador(modoDeJuego,max_punt);
break;

case 4:
ingresovectorNombres(nombres,modoDeJuego,max_punt);
break;*/

}
}







void menu_trasero(int mododejuego, int max_punt){
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
elegir_menu_final(max_punt);

}

void elegir_menu_final(int max_punt){
int num;
cin>>num;
switch(num){

case 1:
       menu(max_punt);
    break;
case 2:
    bienvenida(max_punt);
    break;



}



}

