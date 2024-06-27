#include <iostream>
#include"funciones.h"

int marcador_Unjugador(string name, int turno, int dados[6],int puntaje_J1[1])
{
    int tiradas[3]= {};
    int puntaje=0;
    bool gp;

    int ronda;
    for(ronda=1; ronda<4; ronda++)
    {
        dadosOrdenados(dados);
        gp=reglas_dados(dados,ronda,tiradas);
        if(gp==false)
        {
            puntaje_UnJugador(ronda,dados,tiradas);
        }
        cout<<"___________________________________________________________________________________________________________________"<<endl;
        cout<<"                                                                                                                   "<<endl;

        cout<<"                         "<<name<<"             |    "<<"Turno: "<<turno<<"                 |"<<"Ronda: "<<ronda<<"       "<<endl;
        cout<<"                                                                                                                   "<<endl;
        cout<<"___________________________________________________________________________________________________________________"<<endl;
        cout<<"                                                                                                                   "<<endl;
        cout<<"                             Puntuacion: "<<puntaje_J1[0]<<"                                                     "<<endl;
        cout<<"                                                                                                                   "<<endl;
        cout<<"___________________________________________________________________________________________________________________"<<endl;
        system("pause");
        system("cls");
    }
    max_puntacion(tiradas,puntaje_J1);
   puntaje=revision_ganador_un_jugador(puntaje_J1);
  return puntaje;
}

















void marcador_multijugador(string nombres[2], int dados[6], int turno,int puntajes[2],int espuntaje)
{
    int i;
    bool revision_diez_O_cero=false;
    bool revision_escalera=false;
    int puntajes_rondas_J1[3]= {};
    int puntajes_rondas_J2[3]= {};
    for(i=0; i<2; i++)
    {
        int ronda;
        for(ronda=1; ronda<4; ronda++)
        {
            dadosOrdenados(dados);
            revision_escalera=revision_de_escalera_dos_jugadores(puntajes,i,dados);

            if(i==0 && revision_escalera==false)
            {
                revision_diez_O_cero=reglas_dados(dados,ronda,puntajes_rondas_J1);
            }
            else
            {
                if(i==1 && revision_escalera==false)
                {
                    revision_diez_O_cero=reglas_dados(dados,ronda,puntajes_rondas_J2);
                }
            }
            if(revision_diez_O_cero==false && revision_escalera==false)
            {
                suma_de_puntajes(i,dados,ronda,puntajes,puntajes_rondas_J1,puntajes_rondas_J2);
            }
            cout<<"___________________________________________________________________________________________________________________"<<endl;
            cout<<"|                                    |                                            |                                 |"<<endl;
            cout<<"|                                    |                                            |                                 |"<<endl;
            cout<<"|                                    |                                            |                                 |"<<endl;
            cout<<"|                                    |                                            |                                 |"<<endl;
            cout<<"|                 "<<nombres[i]<<"             |    "<<"Turno: "<<turno<<"                          |"<<"Ronda: "<<ronda<<"                      |"<<endl;
            cout<<"|                                    |                                            |                                 |"<<endl;
            cout<<"|                                    |                                            |                                 |"<<endl;
            cout<<"|                                    |                                            |                                 |"<<endl;
            cout<<"___________________________________________________________________________________________________________________"<<endl;
            cout<<"|                                                                                                                   |"<<endl;
            cout<<"|                                                                                                                   |"<<endl;
            cout<<"|                              Puntuacion: "<<puntajes[i]<<"                                                                |"<<endl;
            cout<<"|                                                                                                                   |"<<endl;
            cout<<"|                                                                                                                   |"<<endl;
            cout<<"___________________________________________________________________________________________________________________"<<endl;
            icono_dados(dados);
            system("pause");
            system("cls");
            if(revision_escalera==true)
            {
            string ganador_de_la_escalera=nombres[i];
             ganador_por_escalera(ganador_de_la_escalera);

            }
        }
    }
    buscardor_maximo_puntaje(i,puntajes_rondas_J1,puntajes_rondas_J2,puntajes);
}
