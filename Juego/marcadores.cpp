#include <iostream>
#include"funciones.h"




int marcador_multijugador(string nombres[2], int dados[6], int turno,int puntajes[2]){
int puntaje=0;
int espuntaje=0;
int i=0;
for(i=0; i<2; i++){
int ronda;
for(ronda=1; ronda<4; ronda++){
espuntaje+=sumaTotal(dados,nombres,puntaje);
visualizacion_Del_dado(dados);
suma_De_puntajes(puntajes,i,espuntaje);
cout<<"___________________________________________________________________________________________________________________"<<endl;
cout<<"|                                    |                                            |                                 |"<<endl;
cout<<"|                                    |                                            |                                 |"<<endl;
cout<<"|                                    |                                            |                                 |"<<endl;
cout<<"|                                    |                                            |                                 |"<<endl;
cout<<"|                 "<<nombres[i]<<"          |    "<<"Turno: "<<turno<<"                          |"<<"Ronda: "<<ronda<<"                      |"<<endl;
cout<<"|                                    |                                            |                                 |"<<endl;
cout<<"|                                    |                                            |                                 |"<<endl;
cout<<"|                                    |                                            |                                 |"<<endl;
cout<<"___________________________________________________________________________________________________________________"<<endl;
cout<<"|                                                                                                                   |"<<endl;
cout<<"|                                                                                                                   |"<<endl;
cout<<"|                              Puntuacion: "<<espuntaje<<"                                                                |"<<endl;
cout<<"|                                                                                                                   |"<<endl;
cout<<"|                                                                                                                   |"<<endl;
cout<<"___________________________________________________________________________________________________________________"<<endl;
nose_verdado(dados);
system("pause");
system("cls");
}
}

return espuntaje;
}
