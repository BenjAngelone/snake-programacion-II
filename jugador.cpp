#include <iostream>
#include "jugador.h"
#include <string.h>
using namespace std;

  jugador::jugador(char* N){
  Nombre=new char [strlen(N)];
  strcpy(Nombre,N);
  Direcion="F";
  }

  void jugador::setDirecion(char f){
     Direcion=f;
  }

  char jugador::getDirecion(){
     return Direcion;
  }
  void jugador::setNombre(char *N){
   delete [] Nombre;
   Nombre=new char [strlen(N)];
   strcpy(Nombre,N);
 }

  char* jugador::getNombre(){
    return Nombre;
  }

  void jugador::Dibujar(){
    for(int i =0;i<=getTamaño_y();i++){
        for(int j =0;j<=getTamaño_x();j++){
            switch (getCodex(j,i))
            {
            case 0:
                cout<<"  ";
                break;
            case 4||5||6||7||8:
                cout<<"O ";
                break;
            case 3:
                cout<<"| ";
                break;
            case -3:
                cout<<" |"<<endl;
                break;
            case 2:
                cout<<"__";
                break;
            case -1:
                cout<<"@ ";
                break;
            case 8:
                cout<<"* ";
                break;
            
            default:
                break;
}
}
}
}




