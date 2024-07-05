#include"funciones.h"
#include <iostream>
#include "rlutil.h"
using namespace std;


void peticion_nombre_Un_jugador(int mododejuego, int max_punt){

decision(mododejuego);

string name;
cout<<"Ingrese el nombre: ";
cin.ignore();
getline(cin, name);
system("cls");
saludo_Un_Jugador(name,mododejuego);
system("pause");
detener_musica();
/*if(mododejuego==3){
        jugador_modo_simulado(mododejuego,name,max_punt);

}*/
encabezadoUnjugador(mododejuego,name,max_punt);


}




void ingresovectorNombres(string nombres[2], int mododejuego,int max_punt){
system("cls");
decision(mododejuego);
cin.ignore();
for(int i=1; i<3; i++){
    cout<<"Ingrese el nombre del jugador "<<i<<": ";
    getline(cin,nombres[i-1]);
}
SaludoMultijugador(nombres,mododejuego,max_punt);
}



void saludo_Un_Jugador(string name, int mododejuego){
decision(mododejuego);

string saludo="Bienvenido al juego ";
rlutil::locate(1,3);
cout<<saludo;
cout<<name;
string saludo_2=", buena suerte!!!";
cout<<saludo_2;
cout<<""<<endl;


}




 void SaludoMultijugador( string nombres[2], int mododejuego,int max_punt){


    for(int x=0; x<1; x++){
    cout<<""<<endl;

    cout<<"Bienvenidos al juego "<<nombres[x]<<" y "<<nombres[x+1]<<", buena suerte!"<<endl;


 }

 system("pause");
detener_musica();
/*if(mododejuego==4){
    encabezadoMultijugador_Simulado(nombres,mododejuego,max_punt);
}*/
encabezadoMultijugador(nombres,mododejuego,max_punt);
 }









