#include <iostream>
using namespace std;
#include"funciones.h"

bool reglas_dados(int dados[6], int ronda, int tiradas[3])
{

    int cont=0;
    int valor=0;
    bool R=false;
    for(int i=0; i<6; i++)
    {

        if(dados[i+1]==dados[i])
        {

            cont++;
            valor=dados[i];

        }

    }

    if(cont==5)
    {

        R=diez_O_Cero(tiradas, ronda, valor);

    }



    return R;

}



bool diez_O_Cero(int tiradas[3], int ronda, int valor)
{


    if(valor==6)
    {
        tiradas[ronda-1]=0;

        cout<<"0"<<endl;
    }

    else
    {
        tiradas[ronda-1]=valor*10;
        cout<<"valor: "<<valor*10<<endl;
    }


    return true;

}


bool escalera(int dados[6])
{

    bool respuesta=false;
    int diferente=0;

    for(int x=0; x<6; x++)
    {

        if(dados[x+1]!=dados[x])
        {

            diferente++;

        }


        if(diferente==6)
        {

            respuesta=true;
            return respuesta;
        }

    }

    return false;

}




bool revision_de_escalera_dos_jugadores(int puntajes[2], int i, int dados[6])
{

    bool respuesta=escalera(dados);

    if(i==0 && respuesta==true)
    {

        puntajes[0]=10000000000;
        return respuesta;
    }


    if(i==1 && respuesta==true)
    {

        puntajes[1]=1000000000000;
        return respuesta;


    }

    return false;

}



int verificacion_100(int puntajes[2]){
int ver;
for(int x=0; x<2; x++){


 if(x==0 && puntajes[x]>=100){

 ver=0;
 return ver;

 }
 else{

   if(x==1 && puntajes[x]>=100){


   ver=1;
   return ver;

   }
 }



}



}


int revision_de_ganador_por_puntaje(string nombres[2], string nombre_ganador, int puntajes[2]){
int R=verificacion_100(puntajes);
int valor=0;



        if(R==0){

            nombre_ganador=nombres[0];
            ganador(nombre_ganador);
            valor=puntajes[0];
            return valor;

        }

        if(R==1){

            nombre_ganador=nombres[1];
            ganador(nombre_ganador);
            valor=puntajes[1];
            return valor;


        }






}



int revision_ganador_un_jugador(int puntaje_J1[1]){
int valor=0;
if(puntaje_J1[0]>=100){

    valor=puntaje_J1[0];
    return valor;

}




}
