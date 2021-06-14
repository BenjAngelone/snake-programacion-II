
#include <iostream>
#include <string.h>

#include "jugador.h"

using namespace std;

  jugador::jugador(char* N){
  Nombre=new char [strlen(N)];
  strcpy(Nombre,N);
   }
  void jugador::setNombre(char *N){
   delete [] Nombre;
   Nombre=new char [strlen(N)];
   strcpy(Nombre,N);
 }

  char* jugador::getNombre(){
    return Nombre;
  }
  
  char jugador::escuchardireccion(){    //espera la direccion introducida por el jugador
    cout<<endl<<"Ingrese un valor(n,s,e,o): ";
    char dir;
    cin>>dir;
    return dir;
  }
  





