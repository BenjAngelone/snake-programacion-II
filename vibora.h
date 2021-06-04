
#include <string.h>


class vibora{
  protected:
      int Cabeza_x;
      int Cola_x;
      int Cabeza_y;
      int Cola_y;
      char Direcion;
      
  public:
  vibora(int, int , int, int,char);

  void setCabeza_x(int);
  void setCola_x(int);
  void setCabeza_y(int);
  void setCola_y(int);
  void setDirecion(char);
  
  char getDirecion(); 
  int getCabeza_x();
  int getCola_x();
  int getCabeza_y();
  int getCola_y();

  bool obtenerDireccionCola(int,int);
  int obtenerDireccionCaveza();
};
