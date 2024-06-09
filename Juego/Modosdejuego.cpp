#include"funciones.h"
#include <iostream>
using namespace std;

void decision(int num){
    if(num==1){
        cout<<"                                                      UN JUGADOR                                    "<<endl;
    }

else{
   cout<<"                                                       MULTIJUGADOR                                                   "<<endl;
}







}











void encabezadoUnjugador(int mododejuego, string name){

decision(mododejuego);

cout<<"___________________________________________________________________________________________________________________"<<endl;
cout<<"|                                    |                                            |                                 |"<<endl;
cout<<"|                                    |                                            |                                 |"<<endl;
cout<<"|                                    |                                            |                                 |"<<endl;
cout<<"|                                    |                                            |                                 |"<<endl;
cout<<"|           "<<name<<"               |                                            |                                 |"<<endl;
cout<<"|                                    |                                            |                                 |"<<endl;
cout<<"|                                    |                                            |                                 |"<<endl;
cout<<"|                                    |                                            |                                 |"<<endl;
cout<<"___________________________________________________________________________________________________________________"<<endl;

}
