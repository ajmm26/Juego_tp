#include <iostream>
#include"funciones.h"
#include "rlutil.h"
using namespace std;
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


void dadosOrdenados(int dados[6]){

ordenarVector(dados);

}

void dados_dibujados(int dados[6]){
  system("COLOR F0");
    rlutil::hidecursor();
    rlutil::saveDefaultColor();

for(int i=1; i<7; i++){

 int cara=dados[i-1];

dibujar_dado(cara,i*15,20);
}

rlutil::resetColor();



}


