
#include "jugador.h"
#include "vibora.h"
#include "juego.h"
#include <iostream>

using namespace std;
void Dibujar(juego A){
    for(int i =0;i<=A.getTamaño_y();i++){
        for(int j =0;j<=A.getTamaño_x();j++){
            switch (A.getCodex(j,i))
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

int main(){
  char dir;

  juego  A(5,6);
  vibora  V(1,1,1,1,'s','n');
  A.Definir_tablero();
  while (true){
    cin>>dir;
    V.setDirecion(dir);
    V.obtenerDireccionCaveza(A);
    A.ColisionDetector(V.getCabeza_x(),V.getCabeza_y());
    V.obtenerDireccionCola(A);
    Dibujar(A);
  }
  }
  
    