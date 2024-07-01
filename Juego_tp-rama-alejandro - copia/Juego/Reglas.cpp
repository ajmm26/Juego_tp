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

        if(dados[i]==dados[i+1])
        {

            cont++;
            valor=dados[i];

        }

    }

    if(cont==5)
    {

        R=diez(tiradas, ronda, valor);


    }



    return R;

}



bool diez(int tiradas[3], int ronda, int valor)
{


    if(valor!=6)
    {
        tiradas[ronda-1]=valor*10;
       return true;
    }

return false;

}

bool cero(int dados[6],int tirada[3], int ronda){
int cont=0;
for(int i=0; i<6; i++){
    if(dados[i]==6){
        cont++;
    }

}

if (cont==6){
    tirada[ronda-1]=0;
    return true;


}
return false;
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

    return respuesta;

}




bool revision_de_escalera_dos_jugadores(int dados[6],int i,int puntajes[2])
{
 bool negativa=false;
 bool respuestas=escalera(dados);
 if(respuestas==true && i==0){
        puntajes[i]=100000;
        return respuestas;

 }
 else{
    if(respuestas==true && i==1){
        puntajes[i]=100000;
        return respuestas;
    }
 }

 return negativa;

}


int corte_por_escalera(){


    return 100000;




}



int verificacion_100(int puntajes[2]){
int ver;
if(puntajes[0]>=100 && puntajes[1]>=100){
 if(puntajes[0]>puntajes[1]){
    ver=0;
    return ver;
 }

 else{
    if(puntajes[0]<puntajes[1]){
        ver=1;
        return ver;
    }
 }
}
else{

if(puntajes[0]==100000){
  ver=4;
  return ver;

}
else{
    if(puntajes[1]==100000){
        ver=5;
        return 5;
    }
}
}

 if(puntajes[0]>=100){

 ver=0;
 return ver;

            }

   if(puntajes[1]>=100){


   ver=1;
   return ver;
         }

return 2;
}





int revision_de_ganador_por_puntaje(string nombres[2], int puntajes[2]){
int R=verificacion_100(puntajes);
int valor=0;
int valor2=0;
string nombre_ganador;
string nombre_segundo;



        if(R==0){

            nombre_ganador=nombres[0];
            nombre_segundo=nombres[1];
            valor=puntajes[0];
            valor2=puntajes[1];
            ganador(nombre_ganador,valor,nombre_segundo,valor2);
            return valor;

        }

        if(R==1){

            nombre_ganador=nombres[1];
            nombre_segundo=nombres[0];
            valor=puntajes[1];
            valor2=puntajes[0];
            ganador(nombre_ganador,valor,nombre_segundo,valor2);
            return valor;


        }

        if(R==4){
            nombre_ganador=nombres[0];
            valor=puntajes[0];
            ganador_un_jugador(valor,nombre_ganador);
            return valor;

            }
            else{
              if(R==5){
            nombre_ganador=nombres[1];
            valor=puntajes[1];
            ganador_un_jugador(valor,nombre_ganador);
            return valor;
            }


return 5;

}
}



int revision_ganador_un_jugador(int puntaje_J1[1]){
int valor=0;
if(puntaje_J1[0]>=100){

    valor=puntaje_J1[0];
    return valor;

}


return valor;


}

void max_Puntaje_global(int puntaje, int mododejuego,int max_punt){
if(puntaje==100000){

menu_trasero(mododejuego,max_punt);
}
else{
if(max_punt<puntaje){
    max_punt=puntaje;
}
}
menu_trasero(mododejuego,max_punt);
}


