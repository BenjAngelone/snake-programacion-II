#include <iostream>
#include <string.h>
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

  




