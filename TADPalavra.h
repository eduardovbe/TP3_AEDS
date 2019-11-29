#ifndef TADPALAVRA_H_INCLUDED
#define TADPALAVRA_H_INCLUDED
#include "string.h"
#define MAXWORD 1000

typedef struct{
    char palavra[MAXWORD];
    int tamanho;
}TPalavra;

void inicializaPalavra(TPalavra* palavra);
void insereLetra(TPalavra* palavra, char letra);
void removeLetra(TPalavra* palavra, char letra);
void imprimePalavra(TPalavra palavra);
void tamanhoPalavra(TPalavra* palavra);

#endif // TADPALAVRA_H_INCLUDED
