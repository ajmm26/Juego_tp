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


void dadosOrdenados(int dados[6]){

ordenarVector(dados);

}

void icono_dados(int dados[6]){
    for(int i=0; i<6; i++){
        switch(dados[i]){
        case 1:
           imprimirCara1();
            break;
        case 2:
           imprimirCara2();
           break;
        case 3:
           imprimirCara3();
           break;
        case 4:
            imprimirCara4();
            break;
        case 5:
            imprimirCara5();
            break;
        case 6:
            imprimirCara6();
            break;
        }
    }
}
