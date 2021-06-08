

#include "juego.h"
#include "jugador.h"
#include "vibora.h"
#include <iostream>
#include <time.h>

using namespace std;


int main(){

  juego  A(15,16);
  jugador J("BENJA");
  vibora  V(1,1,1,1,'n');
  A.Jugar(V,J);
}

