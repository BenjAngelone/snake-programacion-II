
#include <iostream>
#include <string.h>
#include <fstream>
#include <cstdlib>
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
  
  char jugador::escuchardireccion(){
    cout<<endl<<"Ingrese un valor(n,s,e,o): ";
    char dir;
    cin>>dir;
    return dir;
  }
  //void jugador::historial(string n, int p){
    //string text, line;
  


  //ifstream file ("historial.txt");

    //while (getline(file, line)){
        //text=text+line+"\n";
    //}
    //file.close();

    //ofstream file2 ("historial.txt");
    //file2 << text << "Jugador: " << n << " Puntos: " << p;

//}






