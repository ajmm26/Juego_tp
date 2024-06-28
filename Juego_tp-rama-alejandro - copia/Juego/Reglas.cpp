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
for(int i=0; i<2; i++)
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



int[] obtenerValorDados() {
  int dados[6] = {};
  int num;

  cout << "Ingrese el valor de los dados: " << endl;
  for (int i = 0; i < 6; i++) {
    cin >> num;
    dados[i] = num;
  }

  return dados;
}

void compararPuntuacionEnTodoElJuego(string nombreActual, int puntajeActual,
                                     string nombreMax, int puntajeMax) {
  if (puntajeActual <= puntajeMax) {
    // no supera al máximo salimos de la función sin hacer modificaciones
    return;
  }

  // si supera al máximo mostrar cartel y asignar nuevos máximos
  if (puntajeMax > 0 && puntajeActual > puntajeMax) {
    cout << "NUEVA PUNTUACION MAXIMA: El Jugador " << nombreActual << " con "
         << puntajeActual << " puntos, superó al Jugador " << nombreMax
         << " que tenía " << puntajeMax << " puntos!";
  }

  nombreMax = nombreActual;
  puntajeMax = puntajeActual;
}



int revision_de_ganador_por_puntaje(string nombres[2], int puntajes[2], string nombreMax, int puntajeMax){
int R=verificacion_100(puntajes);
int valor=0;
string nombre_ganador;



        if(R==0){

            nombre_ganador=nombres[0];
            valor=puntajes[0];
            ganador(nombre_ganador,valor);
            compararPuntuacionEnTodoElJuego(nombre_ganador, valor,nombreMax,puntajeMax);
            return valor;

        }

        if(R==1){

            nombre_ganador=nombres[1];
            valor=puntajes[1];
            ganador(nombre_ganador,valor);
            compararPuntuacionEnTodoElJuego(nombre_ganador, valor,nombreMax,puntajeMax);
            return valor;


        }

        if(R==4){
            nombre_ganador=nombres[0];
            valor=puntajes[0];
            ganador_un_jugador(valor,nombre_ganador);
            compararPuntuacionEnTodoElJuego(nombre_ganador, valor,nombreMax,puntajeMax);
            return valor;

            }
            else{
              if(R==5){
            nombre_ganador=nombres[1];
            valor=puntajes[1];
            ganador_un_jugador(valor,nombre_ganador);
            compararPuntuacionEnTodoElJuego(nombre_ganador, valor,nombreMax,puntajeMax);
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
