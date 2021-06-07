#include "vibora.h"
#include <iostream>
#include <string.h>
#include "juego.h"
using namespace std;

  vibora::vibora(int a, int b, int c, int d,char f){
    Cabeza_x=1;
    Cola_x=1;
    Cabeza_y=1;
    Cola_y=1;
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
  void vibora::setCola_x(int y){
    Cola_x+=y;

  }
  void vibora::setCabeza_y(int z){
    Cabeza_y+=z;

  }
  void vibora::setCola_y(int c){
    Cola_y+=c;
  }


  int vibora::getCabeza_x(){
    return Cabeza_x;
  }
  int vibora::getCola_x(){
    return Cola_x;
  }
  int vibora::getCabeza_y(){
    return Cabeza_y;
  }
  int vibora::getCola_y(){
    return Cola_y;
  }

  bool vibora::obtenerDireccionCola(int cola ,int  cabesa ,  int p){
    cout<<"Valor cola "<< cola <<" Valor cabeza " <<cabesa<<endl;
    cout<<"Puntos: "<< p <<endl;
    //if(p==0)cola=cabesa;
    switch (cola)
            {
            case 4:
                setCola_y(1);
                cout<<"Direcion cola:  n "<<endl;
                break;
            case 5:
                setCola_y(-1);
                cout<<"Direcion cola:  s"<<endl;
                break;
            case 7:
                setCola_x(1);
                cout<<"Direcion cola:  e "<<endl;
                break;
            case 6:
                setCola_x(-1);
                cout<<"Direcion cola:  o "<<endl;
                break;
            default:
                cout<<"No encuentro mi cola"<<endl;return false;
            }
            
  return false;


}

  int vibora::obtenerDireccionCaveza(jugador J){

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



