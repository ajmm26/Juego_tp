#include <iostream>
using namespace std;
#include"funciones.h"




int sumaTotal(int dados[6], string nombres[2], int puntaje){

int estotalpuntaje=+suma_del_turno(dados,nombres,puntaje);

return estotalpuntaje;
}



int suma_del_turno(int dados[6], string[2], int puntaje){


for(int i=0; i<6; i++){

 puntaje=puntaje+dados[i];


}




return puntaje;

}


void suma_De_puntajes(int puntajes[2],int i,int espuntaje){

for(int x=i; x<i+1; x++){


    puntajes[i]=espuntaje;
    cout<<puntajes[i]<<endl;

}



}




