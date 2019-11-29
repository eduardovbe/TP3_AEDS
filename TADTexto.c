#include "TADTexto.h"
#include "TADPalavra.h"
void inicializaTexto(TTexto* texto)
{
    int x,y;
    /*for(x = 0; x < MAXTEXTO; x++)
    {
        for(y=0; y< MAXWORD; y++)
        {
          texto->texto[x].palavra[y] = ' ';
        }
    }*/
    texto->numeroPalavras = 0;
}
void inserePalavra(TTexto* texto, TPalavra* palavra)
{
    int y;
    char aux[MAXWORD];
    for(y=0; y<MAXTEXTO; y++)
    {
      scanf("%s",&aux);
      strcpy(texto->texto[y].palavra , aux);
      texto->numeroPalavras++ ;
    }
    printf("\n fim");
}
void imprimeTexto(TTexto* texto)
{
    int y;

    for(y = 0; y < texto->numeroPalavras; y++)
    {


        printf("\n%s",texto->texto[y].palavra);


    }
    printf("\n");
}
void tamanhoTexto(TTexto* texto)
{
    printf("%d \n", texto->numeroPalavras);
}

