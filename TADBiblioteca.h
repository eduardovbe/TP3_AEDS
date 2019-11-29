#ifndef TADBIBLIOTECA_H_INCLUDED
#define TADBIBLIOTECA_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>
#include "TADTexto.h"

#define MAXBIBLIOTECA 2 //10 x 1000 x 100

typedef struct{
    TTexto textos[MAXBIBLIOTECA];
    int tamanho;
}TBiblioteca;

void inicializaBiblioteca(TBiblioteca* Biblioteca);
void insereTexto(TBiblioteca* Biblioteca, TTexto* texto);
void removeTexto(TBiblioteca* Biblioteca, TTexto* texto);
void imprimeBiblioteca(TBiblioteca* Biblioteca);
void tamanhoBiblioteca(TBiblioteca* Biblioteca);

#endif // TTADBIBLIOTECA_H_INCLUDED
