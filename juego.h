
#include "jugador.h"
#include "vibora.h"
class juego{
  protected:
      int Tamano_x;
      int Tamano_y;
      int puntos;
      int Codex[100][100]; //Almacena la actual dispocicion del juego de forma codificada
  public:
  juego(int, int);


  void setTamano_x(int);
  void setTamano_y(int);
  void setpuntos();
  void setCodex(int,int,int);

  int getTamano_x();
  int getTamano_y();
  int getpuntos ();
  int getCodex(int,int);

  void Dibujar(); //esta funcion se encarga de traducir el arreglo Codex a la parte grafica mostrada
  

  void Jugar(vibora ,jugador);
  void Generar_comida();
  bool CheckFood(int ,int);
  void ColisionDetector(int,int,jugador);
  void Definir_tablero();
  void  borrarcola(int,int);

};

