#ifndef TADBIBLIOTECA_H_INCLUDED
#define TADBIBLIOTECA_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>
#include "TADTexto.h"

#define MAXBIBLIOTECA 100

typedef struct{
    TTexto textos[MAXBIBLIOTECA];
    int tamBiblioteca;
}TBiblioteca;

void inicializaBiblioteca(TBiblioteca* Biblioteca);
void insereTexto(TBiblioteca* Biblioteca, TTexto* texto);
void removeTexto(TBiblioteca* Biblioteca, int pos);
void removeTextoLoop(TBiblioteca* Biblioteca);
void imprimeBiblioteca(TBiblioteca* Biblioteca);
void tamanhoBiblioteca(TBiblioteca* Biblioteca);

#endif // TTADBIBLIOTECA_H_INCLUDED
