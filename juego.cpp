#include "juego.h"
#include <iostream>
using namespace std;

    juego::juego(int x , int y){
      Tamaño_x=x;
      Tamaño_y=y;
      puntos=0;
      Codex[100][100];
    }


  void juego::setpuntos(){
    puntos++;
  }
  void juego::setTamaño_x(int x){
    Tamaño_x=x;
  }
  void juego::setTamaño_y(int y){
    Tamaño_y=y;
  }
  void juego::setCodex(int x,int y,int c){
    Codex[x][y]=c;
  }

  int juego::getpuntos(){
    return puntos;
  }
  int juego::getTamaño_x(){
    return Tamaño_x;
  }
  int juego::getTamaño_y(){
    return Tamaño_y;
  }
  int juego::getCodex(int f,int g){
    return Codex[f][g];
  }
 


  void juego::Definir_tablero(){
      for(int i =0;i<=getTamaño_y();i++){
        for(int j =0;j<=getTamaño_x();j++){
            if(j==0)setCodex(j,i,3);
            if(j==getTamaño_x())setCodex(j,i,-3);
            if(i==0)setCodex(j,i,2);
            if(i==0 && j==getTamaño_x())setCodex(j,i,-2);
            if(i==getTamaño_y())setCodex(j,i,2);
        }
}
  //Codex[1][1]=4;
  }
  void juego::Generar_comida(){
    int ranx = rand() % (getTamaño_x()-1) + 1;
    int rany = rand() % (getTamaño_y()-1) + 1;
    while(getCodex(ranx,rany)!=0){
        int ranx = rand() % (getTamaño_x()-1) + 1;
        int rany = rand() % (getTamaño_y()-1) + 1;
    }
    setCodex(ranx,rany,8);

  }

  bool juego::CheckFood(int Dx,int Dy){
    if(getCodex(Dx,Dy)==8){
     setpuntos();
      return true;
    }
    return false;
  }
  void  juego::borrarcola(int cabesax ,int  cabesay){
    int  Vp=puntos;
    int  Vx=cabesax;
    int  Vy=cabesay;
    bool cc=true;
    while (cc)
    {
    
    
    switch (getCodex(Vx,Vy))
            {
            case 4:
                Vy--;
                break;
            case 5:
                Vy++;
                
                break;
            case 7:
                Vx--;
                break;
            case 6:
                Vx++;
                break;
            default:
              cc=false;
                break;
            }
            if (Vp<=0){
              setCodex(Vx,Vy,0);
            }
            Vp--;

  }}
  void juego::ColisionDetector(int Vcx,int Vcy){
    
    int chau;
    if(getCodex(Vcx,Vcy)==3 || getCodex(Vcx,Vcy)==-3 || getCodex(Vcx,Vcy)==2 ||getCodex(Vcx,Vcy)== 5 ||getCodex(Vcx,Vcy)== 7 ||getCodex(Vcx,Vcy)== 4 ||getCodex(Vcx,Vcy)== 6 ||getCodex(Vcx,Vcy)==-2){
      system("clear");
      cout<<"Game over "<<endl<<"Puntuacion: "<<getpuntos();
      cin>>chau;
      return;
  }
  }



