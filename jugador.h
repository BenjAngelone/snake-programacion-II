#include "juego.h"
class jugador{
 protected:
  char *Nombre;
  
 public:
  jugador(char*);
  void setNombre(char*);

  char* getNombre();
};
