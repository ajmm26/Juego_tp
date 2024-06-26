#include"funciones.h"
#include <iostream>
using namespace std;

void decision(int num){
    if(num==1){
        cout<<"                                                      UN JUGADOR                                    "<<endl;
    }

else{
   cout<<"                                                       MULTIJUGADOR                                                   "<<endl;
}







}











void encabezadoUnjugador(int mododejuego, string name){

decision(mododejuego);

cout<<"___________________________________________________________________________________________________________________"<<endl;
cout<<"|                                    |                                            |                                 |"<<endl;
cout<<"|                                    |                                            |                                 |"<<endl;
cout<<"|                                    |                                            |                                 |"<<endl;
cout<<"|                                    |                                            |                                 |"<<endl;
cout<<"|           "<<name<<"               |                                            |                                 |"<<endl;
cout<<"|                                    |                                            |                                 |"<<endl;
cout<<"|                                    |                                            |                                 |"<<endl;
cout<<"|                                    |                                            |                                 |"<<endl;
cout<<"___________________________________________________________________________________________________________________"<<endl;

}


void encabezadoMultijugador(string nombres[2], int mododejuego){


decision(mododejuego);
int i;
int espuntaje=0;
int dados[6]={};
int turno=1;
int puntajes[2]={};
while(espuntaje<=100){

espuntaje=marcador_multijugador(nombres,dados,turno,puntajes);

turno++;

}


}





