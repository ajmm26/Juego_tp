#include <iostream>
#include"funciones.h"
using namespace std;
#include <algorithm>
int tirarDado()
{
    return rand()% 6 + 1;
}

void seisDados(int dados[6]){
for(int i=0; i<6; i++){

     dados[i]=tirarDado();

}

}


void ordenarVector(int dados[6]){
int tam=6;
 seisDados(dados);
 int aux;
    for(int i = 0; i < tam-1; i++)
    {
        for(int j = i+1; j < tam; j++)
        {
            if(dados[j]<dados[i])
            {
                aux = dados[j];
                dados[j]=dados[i];
                dados[i]=aux;
            }
        }
    }


}

void visualizacion_Del_dado(int dados[6]){

ordenarVector(dados);

}

void nose_verdado(int dados[6]){
for(int i=0; i<6; i++){

cout<<"dado "<<i+1<<": "<<dados[i]<<endl;

}
}
