#include <iostream>
#include"funciones.h"

int marcador_Unjugador(string name, int turno, int dados[6],int puntaje_J1[1])
{
    int tiradas[3]= {};
    int puntaje=0;

    int ronda;
    for(ronda=1; ronda<4; ronda++)
    {
    bool revision_diez=false;
    bool revision_cero=false;
    bool revision_escalera=false;
        dadosOrdenados(dados);
        revision_escalera=escalera(dados);
        if(revision_escalera==false){

        revision_diez=reglas_dados(dados,ronda,tiradas);
        revision_cero=cero(dados,tiradas,ronda);
        }
        if(revision_cero==false && revision_diez==false)
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
       dados_dibujados(dados);
       espacios();
       if(revision_escalera==true){
        puntaje=corte_por_escalera();
        system("pause");
        system("cls");
        return puntaje;
       }
       imprimir_tirada(dados,revision_diez,revision_cero,revision_escalera);
       espacios();
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
    bool escalera2=false;
    int puntajes_rondas_J1[3]= {};
    int puntajes_rondas_J2[3]= {};
    for(i=0; i<2; i++)
    {
        int ronda;
        for(ronda=1; ronda<4; ronda++)
        {
          bool revision_diez=false;
          bool revision_cero=false;
          bool revision_escalera=false;
            dadosOrdenados(dados);
            revision_escalera=revision_de_escalera_dos_jugadores(dados,i,puntajes);
            if(revision_escalera==true){
                escalera2=revision_escalera;
            }

            if(i==0 && revision_escalera==false)
            {
                revision_diez=reglas_dados(dados,ronda,puntajes_rondas_J1);
                revision_cero=cero(dados,puntajes_rondas_J1,ronda);
            }
            else
            {
                if(i==1 && revision_escalera==false)
                {
                     revision_diez=reglas_dados(dados,ronda,puntajes_rondas_J2);
                     revision_cero=cero(dados,puntajes_rondas_J2,ronda);
                }
            }
            if(revision_diez==false && revision_cero==false  && revision_escalera==false)
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
            dados_dibujados(dados);
            espacios();
            imprimir_tirada(dados,revision_diez,revision_cero,revision_escalera);
            espacios();
            system("pause");
            system("cls");

           if(escalera2==true){
           ronda=4;
           i=2;
           buscardor_maximo_puntaje(i,puntajes_rondas_J1,puntajes_rondas_J2,puntajes);
        }
        }
    }
      if(escalera2==false)
      buscardor_maximo_puntaje(i,puntajes_rondas_J1,puntajes_rondas_J2,puntajes);

}
