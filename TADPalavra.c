#include "TADPalavra.h"
void inicializaPalavra(TPalavra* palavra)
{
    palavra->tamanho = 0;
}
void insereLetra(TPalavra* palavra, char letra)
{
    int local = palavra->tamanho;
    palavra->palavra[local] = letra;
    palavra->tamanho++;
}

void removeLetra(TPalavra* palavra, char letra)
{
    int x;
    int mover = 0;

    for(x = 0; x < palavra->tamanho; x++)
    {
       //ABCD / C -> ABD
       if(palavra->palavra[x] == letra)
       {
           mover = 1;
       }

       if(mover != 0)
       {
           if(x == palavra->tamanho -1)
           {
               palavra->palavra[x] = '\0';
           }
           else
           {
               palavra->palavra[x] = palavra->palavra[x+1];
           }
       }
    }
    palavra->tamanho--;
}

void imprimePalavra(TPalavra palavra)
{
    printf("Palavra: %s\n", palavra.palavra);
}

void tamanhoPalavra(TPalavra* palavra)
{
    printf("Tamanho: %d\n", palavra->tamanho);
}
