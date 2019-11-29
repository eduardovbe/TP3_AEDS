#ifndef TADTEXTO_H_INCLUDED
#define TADTEXTO_H_INCLUDED
#include "TADPalavra.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define MAXTEXTO 100

typedef struct{
    int numeroPalavras;
    TPalavra texto[MAXTEXTO];
}TTexto;

void inicializaTexto(TTexto* texto);
void inserePalavra(TTexto* texto, TPalavra* palavra);
void removePalavra(TTexto* texto, int pos);
void removePalavraLoop(TTexto* texto);
void imprimeTexto(TTexto* texto);
void tamanhoTexto(TTexto* texto);

#endif // TADTEXTO_H_INCLUDED
