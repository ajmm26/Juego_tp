#include"funciones.h"
#include <iostream>
using namespace std;


void ingresovectorNombres(string nombres[2]){

cin.ignore();
for(int i=1; i<3; i++){
    cout<<"Ingrese el nombre del jugador "<<i<<": ";
    getline(cin,nombres[i-1]);
}

}

 void SaludoMultijugador( string nombres[2], string name, int mododejuego){


 if(mododejuego==1){
 cout<<"Bienvenido al juego "<<name<<", buena suerte!"<<endl;

 }
 else{
    for(int x=0; x<1; x++){
    cout<<""<<endl;
    cout<<"Bienvenidos al juego "<<nombres[x]<<" y "<<nombres[x+1]<<", buena suerte!"<<endl;



 }
 }
cout<<""<<endl;
 system("pause");
 system("cls");
 }









