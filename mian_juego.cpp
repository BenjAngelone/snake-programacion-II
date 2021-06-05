

#include "juego.h"
#include "vibora.h"
#include <iostream>
#include <time.h>

using namespace std;
void Dibujar(juego A){
    for(int i =0;i<=A.getTamaño_y();i++){
        for(int j =0;j<=A.getTamaño_x();j++){

            switch (A.getCodex(j,i))
            {
            case 0:
                cout<<"  ";
                break;
            case 4: case 5:case 6:case 7:
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
            case -2:
                cout<<"__"<<endl;
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
  int food;
  juego  A(15,16);
  vibora  V(1,1,1,1,'n');
  A.Definir_tablero();
  A.Generar_comida();
  while (true)
  {
    Dibujar(A); 
    cout<<endl<<"Ingrese un valor(n,s,e,o): ";
    cin>>dir;
    system("clear");
    //system("cls");
    V.setDirecion(dir);
    int c=V.obtenerDireccionCaveza();//posicion virtual de la cabeza
    if(A.CheckFood(V.getCabeza_x(),V.getCabeza_y())){
        cout<<"comi"<<endl;A.Generar_comida(); //come y no borra la  cola
        food=1;
    }
    else{ 
        food=0;
    }
    A.ColisionDetector(V.getCabeza_x(),V.getCabeza_y());//detecta coliciones 
    A.setCodex(V.getCabeza_x(),V.getCabeza_y(),c);//avanza la cabeza
    
    V.obtenerDireccionCola(A.getCodex(V.getCola_x(),V.getCola_y()),A.getCodex(V.getCabeza_x(),V.getCabeza_y()),A.getpuntos ());//sincroniza la cola
    if(food==0){
        A.setCodex(V.getCola_x(),V.getCola_y(),0);//borra la  cola
    }
    cout<<"Posicion cola ( "<< V.getCola_x() <<" , "<<V.getCola_y() <<" )"<<endl;
    cout<<"Posicion Cabeza ( "<< V.getCabeza_x() <<" , "<<V.getCabeza_y() <<" )"<<endl;
    
    

}
}

