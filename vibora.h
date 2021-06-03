
#include "juego.h"
#include <string.h>


class vibora{
  protected:
      int Cabeza_x;
      int Cola_x;
      int Cabeza_y;
      int Cola_y;
      char Nopizarse;
      char Direcion;
  public:
  vibora(int, int , int, int,char,char);

  void vibora::setCabeza_x(int);
  void vibora::setCola_x(int);
  void vibora::setCabeza_y(int);
  void vibora::setCola_y(int);
  void vibora::setNopizarse(char);
  void vibora::setDirecion(char);
  
  char vibora::getDirecion(); 
  char vibora::getNopizarse();
  int vibora::getCabeza_x();
  int vibora::getCola_x();
  int vibora::getCabeza_y();
  int vibora::getCola_y();

  void obtenerDireccionCola(juego);
  void obtenerDireccionCaveza(juego);
};
