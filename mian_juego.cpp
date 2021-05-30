#ifndef __PER_INCLUDED__
#define __PER_INCLUDED__
#include "personaje.h"
#endif
#include "mago.h"
#include "clerigo.h"
#include <iostream>

using namespace std;

int main(){

    mago A("Mago_A","humano",20,20,100), B("Mago_B","humano",20,20,100);
    clerigo C("Cler_C","humano",20,20,100,"DIOS_C");
    cout<<"Personajes\n";
    A.Imprime();
    B.Imprime();
    C.Imprime();

    A.AprendeHechizo("Hechizo 1A");
    A.AprendeHechizo("Hechizo 2A");

    B.AprendeHechizo("Hechizo 1B");
    cout<<"\nA tiene dos Hechizos\nB tiene un Hechizo\n";
    A.Imprime();
    B.Imprime();

    cout<<"\nA Hechiza a B\n";
    A.LanzaHechizo(B);
    A.Imprime();
    B.Imprime();

    cout<<"\nB Hechiza a A\n";
    B.LanzaHechizo(A);
    A.Imprime();
    B.Imprime();

    cout<<"\nC Cura a B\n";
    C.curar(B);
    A.Imprime();
    B.Imprime();
    C.Imprime();

    cout<<"\nA Hechiza a B\n";
    A.LanzaHechizo(B);
    A.Imprime();
    B.Imprime();
    C.Imprime();

  }

