
#ifndef _jugador_H_
#define _jugador_H_

class jugador{
 protected:
  char *Nombre;

 public:
  jugador(char*);
  void setNombre(char*);

  char* getNombre();
  //void historial(string, int );
  char escuchardireccion();
};
#endif
    