#include <iostream>
using namespace std;
#include"funciones.h"



void suma_de_puntajes(int i,int dados[6],int ronda,int puntajes[2],int puntajes_rondas_J1[3],int puntajes_rondas_J2[3])
{


    int a=0;
    int b=0;

    if (i==0)
    {
        for(int x=0; x<6; x++)
        {
            a+=dados[x];

        }

    }

    if(i==1)
    {
        for(int j=0; j<6; j++)
        {

            b+=dados[j];


        }

    }

    guardado_del_puntaje(i,ronda,a,b,puntajes_rondas_J1,puntajes_rondas_J2);
}


void guardado_del_puntaje(int i,int ronda,int a,int b, int puntajes_rondas_J1[3], int puntajes_rondas_J2[3])
{

    if(i==0)
    {

        puntajes_rondas_J1[ronda-1]=a;
    }


    if(i==1)
    {

        puntajes_rondas_J2[ronda-1]=b;

    }



}





void buscardor_maximo_puntaje(int i, int puntajes_rondas_J1[3], int puntajes_rondas_J2[3], int puntajes[2])
{

    int com1=0;
    int com2=0;

    for(int x=0; x<3; x++)
    {

        if(com1<puntajes_rondas_J1[x])
        {
            com1=puntajes_rondas_J1[x];
        }

        if(com2<puntajes_rondas_J2[x])
        {
            com2=puntajes_rondas_J2[x];
        }

    }

    guardar_maximo(com1,com2, puntajes);

}












void guardar_maximo(int com1,int com2,int puntajes[2])
{


    puntajes[0]+=com1;


    puntajes[1]+=com2;



}
int quien_gana_por_escalera(int i)
{

    if(i==0)
    {
        return 1;
    }
        else
        {

                if(i==1)
                {
                    return 2;
                }


        }

}
