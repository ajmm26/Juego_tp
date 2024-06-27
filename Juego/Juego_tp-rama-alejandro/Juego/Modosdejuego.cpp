#include"funciones.h"
#include <iostream>
using namespace std;

void decision(int num)
{
    if(num==1)
    {
        cout<<"                                                      UN JUGADOR                                    "<<endl;

    }

    else
    {
        cout<<"                                                       MULTIJUGADOR                                                   "<<endl;
    }







}











void encabezadoUnjugador(int mododejuego, string name)
{
    system("cls");
    decision(mododejuego);
    int turno=1;
    int dados[6]= {};
    int puntaje=0;
    int puntaje_J1[1]= {};
    while(puntaje<100)
    {
        puntaje=marcador_Unjugador(name,turno,dados,puntaje_J1);
        turno++;



    }

ganador(name);
menu_trasero(mododejuego);
}


void encabezadoMultijugador(string nombres[2], int mododejuego)
{
     system("cls");
    decision(mododejuego);
    int i;
    string nombre_ganador;
    int espuntaje=0;
    int dados[6]= {};
    int turno=1;
    int puntajes[2]= {};
    while(espuntaje<100)
    {
        marcador_multijugador(nombres,dados,turno,puntajes,espuntaje);
        espuntaje=revision_de_ganador_por_puntaje(nombres,nombre_ganador,puntajes);
        turno++;
    }


    menu_trasero(mododejuego);
}








