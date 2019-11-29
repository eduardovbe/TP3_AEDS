#include "TADTexto.h"
#include "TADPalavra.h"
void inicializaTexto(TTexto* texto)
{
    int x,y;
    strcpy(texto->texto[0].palavra, "\0");
    texto->numeroPalavras = 0;
}
void inserePalavra(TTexto* texto, TPalavra* palavra)
{
    strcpy(texto->texto[texto->numeroPalavras].palavra , palavra->palavra);
    texto->texto[texto->numeroPalavras].tamanho = palavra->tamanho;
    texto->numeroPalavras++ ;
}

void removePalavra(TTexto* texto, int pos)
{
    int x;
    int mover = 0;
    for(x = 0; x < texto->numeroPalavras; x++)
    {
       //ABCD / C -> ABD
       if(x == pos)
       {
           mover = 1;
       }

       if(mover != 0)
       {
           if(x == texto->numeroPalavras-1)
           {
               strcpy(texto->texto[x].palavra, "\0");
               texto->texto[x].tamanho = 0;
           }
           else
           {
               strcpy(texto->texto[x].palavra, texto->texto[x+1].palavra);
               texto->texto[x].tamanho = texto->texto[x+1].tamanho;
           }
       }
    }
    //system("pause");
    texto->numeroPalavras--;
}

void removePalavraLoop(TTexto* texto)
{
    int y = texto->numeroPalavras;
    int z;
    for(z = 0; z < y; z++)
    {
        //printf("Hi");
        removePalavra(texto, 0);
    }
}

void imprimeTexto(TTexto* texto)
{
    int y;
    printf("\n");
    for(y = 0; y < texto->numeroPalavras; y++)
    {


        printf("%s ",texto->texto[y].palavra);


    }
    printf("\n");
}
void tamanhoTexto(TTexto* texto)
{
    printf("Tamanho: %d\n", texto->numeroPalavras);
}

