#include <iostream>
#include"funciones.h"
#include "rlutil.h"

void ganador(string nombre){


 string cadena_ganador="FELICADES GANASTE ";
 string cadena_ganador2=" ERES EL MEJOR!!!";

impresion_ganador(cadena_ganador,cadena_ganador2,nombre);

}



void impresion_ganador(string cadena_ganador, string cadena_ganador2,string nombre){

system("cls");

for(int i=0; i<10; i++){


    if(i%2==0){

        rlutil::setColor(rlutil::BLACK);
         rlutil::setBackgroundColor(rlutil::WHITE);

    }

    else{

         rlutil::setColor(rlutil::WHITE);
         rlutil::setBackgroundColor(rlutil::BLACK);
    }


    rlutil::locate(35,15);
    cout<<cadena_ganador<<nombre<<cadena_ganador2<<endl;
    rlutil::msleep(500);

}

rlutil::setColor(rlutil::BLACK);
rlutil::setBackgroundColor(rlutil::WHITE);

cout<<" "<<endl;
cout<<" "<<endl;
cout<<" "<<endl;
system("pause");
system("cls");
}


 void ganador_por_escalera(string ganador_de_la_escalera){

  string titulo_ganador_escalera="FELICADES GANASTE POR ESCALERA ";
  string titulo_ganador_escalera2=" ERES EL MEJOR!!!";


impresion_ganador_escalera(titulo_ganador_escalera,titulo_ganador_escalera2,ganador_de_la_escalera);


 }


void impresion_ganador_escalera(string titulo_ganador_escalera ,string titulo_ganador_escalera2, string ganador_de_la_escalera){

system("cls");

for(int i=0; i<40; i++){


    if(i%2==0){

        rlutil::setColor(rlutil::BLACK);
         rlutil::setBackgroundColor(rlutil::WHITE);

    }

    else{

         rlutil::setColor(rlutil::WHITE);
         rlutil::setBackgroundColor(rlutil::BLACK);
    }


    rlutil::locate(35,15);
    cout<<titulo_ganador_escalera<<ganador_de_la_escalera<<titulo_ganador_escalera2<<endl;
    rlutil::msleep(500);

}





}
