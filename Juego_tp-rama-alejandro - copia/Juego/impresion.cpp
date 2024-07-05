#include <iostream>
#include"funciones.h"
#include "rlutil.h"
using namespace std;

void ganador(string nombre,int valor,string nombre2, int valor2)
{


    string cadena_ganador="FELICADES GANASTE ";
    string cadena_ganador3=" CON UNA PUNTUACION DE: ";

    sonido_de_victoria_puntaje();
    impresion_ganador(cadena_ganador,cadena_ganador3,nombre,valor,valor2,nombre2);
    system("pause");
    system("cls");
    cancion_menu();

}

void segundo_lugar(int valor2, string nombre2){

    string cadena_segundo="MALA SUERTE ";
    string cadena_segundo2=" QUEDASTE EN 2DO LUGAR CON UNA PUNTUACION DE: ";
    cout<<cadena_segundo<<nombre2<<cadena_segundo2<<valor2<<endl;


}


void impresion_ganador(string cadena_ganador,string cadena_ganador3,string nombre,int valor,int valor2,string nombre2)
{
    system("COLOR F0");
    rlutil::saveDefaultColor();
    system("cls");

    for(int i=0; i<10; i++)
    {


        if(i%2==0)
        {

            rlutil::setColor(rlutil::BLACK);
            rlutil::setBackgroundColor(rlutil::WHITE);

        }

        else
        {

            rlutil::setColor(rlutil::WHITE);
            rlutil::setBackgroundColor(rlutil::BLACK);
        }


        rlutil::locate(30,15);
        cout<<cadena_ganador<<nombre<<cadena_ganador3<<valor<<endl;
        rlutil::locate(25,17);
        if(valor2!=0){
        segundo_lugar(valor2,nombre2);
        }
        rlutil::msleep(500);
        rlutil::resetColor();

    }

    rlutil::setColor(rlutil::BLACK);
    rlutil::setBackgroundColor(rlutil::WHITE);
    espacios();
    system("cls");
}


void ganador_por_escalera(string ganador_de_la_escalera)
{
    rlutil::saveDefaultColor();
    string titulo_ganador_escalera="FELICADES GANASTE POR ESCALERA ";
    string titulo_ganador_escalera2=" ERES EL MEJOR!!!";

    sonido_de_victoria_escalera();
    impresion_ganador_escalera(titulo_ganador_escalera,titulo_ganador_escalera2,ganador_de_la_escalera);
    system("cls");
    rlutil::resetColor();

}


void impresion_ganador_escalera(string titulo_ganador_escalera,string titulo_ganador_escalera2, string ganador_de_la_escalera)
{

    system("cls");
    for(int i=0; i<10; i++)
    {


        if(i%2==0)
        {

            rlutil::setColor(rlutil::BLACK);
            rlutil::setBackgroundColor(rlutil::WHITE);

        }

        else
        {

            rlutil::setColor(rlutil::WHITE);
            rlutil::setBackgroundColor(rlutil::BLACK);
        }


        rlutil::locate(35,15);
        cout<<titulo_ganador_escalera<<ganador_de_la_escalera<<titulo_ganador_escalera2<<endl;
        rlutil::msleep(500);


    }





}

void dibujar_cuadrado(int posx, int posy)
{


    rlutil::setColor(rlutil::BLACK);
    for(int x=posx; x<posx+10; x++)
    {
        for(int y=posy; y<posy+5; y++)
        {
            rlutil::locate(x,y);
            cout<< (char) 219;

        }


    }

}


void dibujar_dado(int numero, int posx, int posy)
{

    dibujar_cuadrado(posx,posy);
    rlutil::setColor(rlutil::WHITE);
    rlutil::setBackgroundColor(rlutil::BLACK);
    switch(numero)
    {
    case 1:
        rlutil::locate(posx+4,posy+2);
        cout<<(char) 254;
        rlutil::locate(posx+5,posy+2);
        cout<<(char) 254;
        break;
    case 2:
        rlutil::locate(posx+1,posy);
        cout<<(char) 220;
        rlutil::locate(posx+8,posy+4);
        cout<<(char)223;
        break;
    case 3:
        rlutil::locate(posx+1,posy);
        cout<<(char) 220;
        rlutil::locate(posx+4,posy+2);
        cout<<(char) 254;
        rlutil::locate(posx+5,posy+2);
        cout<<(char) 254;
        rlutil::locate(posx+8,posy+4);
        cout<<(char)223;
        break;
    case 4:
        rlutil::locate(posx+1,posy);
        cout<<(char) 220;
        rlutil::locate(posx+8,posy);
        cout<<(char) 220;
        rlutil::locate(posx+8,posy+4);
        cout<<(char)223;
        rlutil::locate(posx+1,posy+4);
        cout<<(char)223;
        break;
    case 5:
        rlutil::locate(posx+1,posy);
        cout<<(char) 220;
        rlutil::locate(posx+8,posy);
        cout<<(char) 220;
        rlutil::locate(posx+4,posy+2);
        cout<<(char) 254;
        rlutil::locate(posx+5,posy+2);
        cout<<(char) 254;
        rlutil::locate(posx+8,posy+4);
        cout<<(char)223;
        rlutil::locate(posx+1,posy+4);
        cout<<(char)223;
        break;
    case 6:
        rlutil::locate(posx+1,posy);
        cout<<(char) 220;
        rlutil::locate(posx+8,posy);
        cout<<(char) 220;
        rlutil::locate(posx+1,posy+2);
        cout<<(char) 254;
        rlutil::locate(posx+8,posy+2);
        cout<<(char) 254;
        rlutil::locate(posx+8,posy+4);
        cout<<(char)223;
        rlutil::locate(posx+1,posy+4);
        cout<<(char)223;
        break;

    }
}

void espacios()
{

    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;


}


void imprimir_tirada(int dados[6],bool tirada_de_diez, bool tirada_de_cero, bool revision_escalera)
{
    int a=0;
    if(revision_escalera==false)
    {

        for(int i=0; i<6; i++)
        {

            a+=dados[i];

        }


        if(tirada_de_diez==true)
        {

            cout<<"Sacaste 6 dados Iguales!!!"<<endl;
            cout<<"un dado se multiplica por 10: "<<dados[0]*10;

        }
        else
        {

            if(tirada_de_cero==true)
            {

                cout<<"Mala suerte, sacaste 6 dados de 6"<<endl;
                cout<<"Tu puntaje de esta ronda es 0";

            }

            else
            {

                cout<<"El puntaje de tu tirada en esta tirada es de: "<<a<<endl;

            }
        }
    }
}



void proximo_turno(string nombres[2], int i, int puntajes[2])
{
    int cont=0;
    for(int x=0; x<2; x++){
    if(puntajes[x]<100){
        cont++;
    }
    }
    if(cont==2){
    rlutil::saveDefaultColor();
    system("cls");
    if(i==0)
    {

        imprimir_proximo_turno(nombres,1,40,12);


    }
    else
    {
        if(i==1)
        {
            imprimir_proximo_turno(nombres,0,40,12);
        }
    }

rlutil::resetColor();
espacios();
system("pause");
system("cls");

    }
}


void imprimir_proximo_turno(string nombres[2],int i, int posx, int posy)
{
    rlutil::setColor(rlutil::BLACK);
    rlutil::setBackgroundColor(rlutil::WHITE);
     rlutil::locate(45,15);
     cout<<"PROXIMO TURNO: "<<nombres[i];

    for(int x=posx; x<posx+35; x++)
    {
            rlutil::locate(x,posy-1);
            cout<<(char)95;
            rlutil::locate(x,posy+6);
            cout<<(char)95;


    }
        for(int y=posy; y<posy+7; y++)
        {

            rlutil::locate(posx,y);
            cout<<(char)124;
            rlutil::locate(posx+35,y);
            cout<<(char)124;




        }



}


