#include"funciones.h"
#include <iostream>
#include "rlutil.h"
using namespace std;



void peticion_nombre_Un_jugador(int mododejuego){

decision(mododejuego);

string name;
cout<<"Ingrese el nombre: ";
cin.ignore();
getline(cin, name);
system("cls");
saludo_Un_Jugador(name,mododejuego);
encabezadoUnjugador(mododejuego,name);

}




void ingresovectorNombres(string nombres[2], int mododejuego){
system("cls");
decision(mododejuego);
cin.ignore();
for(int i=1; i<3; i++){
    cout<<"Ingrese el nombre del jugador "<<i<<": ";
    getline(cin,nombres[i-1]);
}
SaludoMultijugador(nombres,mododejuego);
}



void saludo_Un_Jugador(string name, int mododejuego){
decision(mododejuego);

string saludo="Bienvenido al juego ";
rlutil::locate(1,3);
cout<<saludo;
cout<<name;
string saludo_2=", buena suerte!!!";
cout<<saludo_2;


}




 void SaludoMultijugador( string nombres[2], int mododejuego){


    for(int x=0; x<1; x++){
    cout<<""<<endl;
    cout<<"Bienvenidos al juego "<<nombres[x]<<" y "<<nombres[x+1]<<", buena suerte!"<<endl;



 }

 system("pause");
encabezadoMultijugador(nombres,mododejuego);
 }









