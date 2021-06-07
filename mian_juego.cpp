

#include "juego.h"
#include "jugador.h"
#include "vibora.h"
#include <iostream>
#include <time.h>

using namespace std;


int main(){
  char dir;
  int food;

  juego  A(15,16);
  jugador J("BENJA");
  vibora  V(1,1,1,1,'n');
  A.Definir_tablero();
  A.Generar_comida();
  A.Jugar(V,J);
}

