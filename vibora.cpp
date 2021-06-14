#include "vibora.h"
#include <iostream>
#include <string.h>
#include "juego.h"
using namespace std;

  vibora::vibora(int a, int b, int c, int d,char f){
    Cabeza_x=5;

    Cabeza_y=5;

    Direcion=f;

  }

  void vibora::setDirecion(char f){
     Direcion=f;
  }

  char vibora::getDirecion(){
     return Direcion;
  }
  void vibora::setCabeza_x(int x){
    Cabeza_x+=x;

  }

  void vibora::setCabeza_y(int z){
    Cabeza_y+=z;

  }



  int vibora::getCabeza_x(){
    return Cabeza_x;
  }

  int vibora::getCabeza_y(){
    return Cabeza_y;
  }


  
  int vibora::obtenerDireccionCaveza(jugador J){ // procesa el char ingresado y lo ubica en el arreglo Codex

    switch (getDirecion())
    {
    case 's':
        setCabeza_y(1);
        return 4;
        break;
    case 'n':
        setCabeza_y(-1);
        return 5;
        break;
    case 'o':
        setCabeza_x(1);
        return 7;
        break;
    case 'e':
        setCabeza_x(-1);
        return 6;
        break;

    default:

          cout<<"Valor no valido"<<endl<<"Vuelva a intenar: "<<getDirecion()<<endl;
          setDirecion(J.escuchardireccion());
          obtenerDireccionCaveza(J);
        break;
    }

}



