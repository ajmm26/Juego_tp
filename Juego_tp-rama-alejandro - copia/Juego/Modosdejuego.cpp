#include"funciones.h"
#include <iostream>
using namespace std;

void decision(int num)
{
    if(num==1 || num==3)
    {
        cout<<"                                                      UN JUGADOR                                    "<<endl;

    }

    else
    {
        if(num==2 || num==4)
        cout<<"                                                       MULTIJUGADOR                                                   "<<endl;
    }







}



/*void jugador_modo_simulado(int mododejuego, string name,int max_punt)
{
    system("cls");
    decision(mododejuego);
    int turno=1;
    int dados[6]= {};
    int puntaje=0;
    int puntaje_J3[1]= {};
    while(puntaje<100)
    {
        puntaje=modo_simulado(name,turno,dados,puntaje_J3);
        turno++;



    }
ganador_un_jugador(puntaje,name);
max_Puntaje_global(puntaje,mododejuego,max_punt);
}


void encabezadoMultijugador_Simulado(string nombres[2], int mododejuego,int max_punt)
{
     system("cls");
    decision(mododejuego);
    int i;
    bool escalera;
    string nombre_ganador;
    int puntaje=0;
    int dados[6]= {};
    int turno=1;
    int puntajes[2]= {};
        while(puntaje<100){
        marcador_multijugador_simulado(nombres,dados,turno,puntajes,puntaje);
        turno++;
        puntaje=revision_de_ganador_por_puntaje(nombres,puntajes);

}

   max_Puntaje_global(puntaje,mododejuego,max_punt);
}*/






void encabezadoUnjugador(int mododejuego, string name,int max_punt)
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
ganador_un_jugador(puntaje,name);
max_Puntaje_global(puntaje,mododejuego,max_punt);
}


void encabezadoMultijugador(string nombres[2], int mododejuego,int max_punt)
{
     system("cls");
    decision(mododejuego);
    int i;
    bool escalera;
    string nombre_ganador;
    int puntaje=0;
    int dados[6]= {};
    int turno=1;
    int puntajes[2]= {};
        while(puntaje<100){
        marcador_multijugador(nombres,dados,turno,puntajes,puntaje);
        turno++;
        puntaje=revision_de_ganador_por_puntaje(nombres,puntajes);

}

   max_Puntaje_global(puntaje,mododejuego,max_punt);
}
