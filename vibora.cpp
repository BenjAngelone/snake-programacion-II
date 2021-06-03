#include "vibora.h"
#include <iostream>
#include <string.h>
#include "juego.h"
using namespace std;

  vibora::vibora(int a, int b, int c, int d,char e ,char f){
    Cabeza_x=1;
    Cola_x=0;
    Cabeza_y=1;
    Cola_y=0;
    Nopizarse=0;
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
  void vibora::setNopizarse(char f){
    Nopizarse=f;
  }

  char vibora::getNopizarse(){
     return Nopizarse;
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
  

  void vibora::obtenerDireccionCola(juego G){
    if(getCola_y()==0 || getCola_x()==0)return;
    switch (G.getCodex(getCola_x(),getCola_y()))
            {
            case 4:
                setCola_y(1);
                break;
            case 5:
                setCola_y(-1);
                break;
            case 7:
                setCola_x(1);
                break;
            case 6:
                setCola_x(-1);
                break;
            if(G.CheckFood(G.getTamaño_x(),G.getTamaño_y()))G.Generar_comida();return;
            G.setCodex(getCola_x(),getCola_y(),0);
} 
}
  
  void vibora::obtenerDireccionCaveza(juego G){

    if (getNopizarse()==getDirecion())cout<<"Valor no valido";return;
    switch (getDirecion())
    {
    case 'n':
        G.setCodex(getCabeza_x(),getCabeza_y(),4);
        setCabeza_y(1);
        setNopizarse('s');
        break;
    case 's':
        G.setCodex(getCabeza_x(),getCabeza_y(),5);
        setCabeza_y(-1);
        setNopizarse('n');
        break;
    case 'e':
        G.setCodex(getCabeza_x(),getCabeza_y(),7);
        setCabeza_x(1);
        setNopizarse('o');
        break;
    case 'o':
        G.setCodex(getCabeza_x(),getCabeza_y(),6);
        setNopizarse('e');
        setCabeza_x(-1);
        break; 
    default:
        cout<<"Valor no valido"<<endl;
        break;
    }
    
}



