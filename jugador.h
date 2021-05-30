#include "juego.h"
class jugador :public juego{
 protected:
  char *Nombre;
  char Direcion;
 public:
  jugador(char* N);
  void setNombre(char *N);
  void jugador::setDirecion(char);
  
  char jugador::getDirecion();
  char* getNombre();

  void Dibujar();
};
