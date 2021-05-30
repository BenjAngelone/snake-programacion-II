
#include "juego.h"
#include <string.h>


class vibora: public juego{
  protected:
      int Cabeza_x;
      int Cola_x;
      int Cabeza_y;
      int Cola_y;
      char Nopizarse;
  public:
  vibora();

  void vibora::setCabeza_x(int);
  void vibora::setCola_x(int);
  void vibora::setCabeza_y(int);
  void vibora::setCola_y(int);
  void vibora::setNopizarse(char);
  
  char vibora::getNopizarse();
  int vibora::getCabeza_x();
  int vibora::getCola_x();
  int vibora::getCabeza_y();
  int vibora::getCola_y();

  void obtenerDireccionCola();
  void obtenerDireccionCaveza();
};
