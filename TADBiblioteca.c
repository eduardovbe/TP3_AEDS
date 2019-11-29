#include "TADTexto.h"
#include "TADPalavra.h"
#include "TADBiblioteca.h"
void inicializaBiblioteca(TBiblioteca* Biblioteca)
{
    Biblioteca->tamanho = 0;
}
void insereTexto(TBiblioteca* Biblioteca, TTexto* texto)
{
    int y,z;
    char aux[MAXTEXTO];
    for(z=0; z<MAXBIBLIOTECA; z++)
    {
        //printf("=%d=\n", z);
        for(y = 0;y < MAXTEXTO;y++){
            //aux[strcspn(&aux, "\n") = 0];
            strcpy(Biblioteca->textos[z].texto[y].palavra , aux);
            Biblioteca->tamanho++ ;
        }
    printf("\nfim do %d texto\n",z+1);
    }
    printf("\nfim\n");
}
void imprimeBiblioteca(TBiblioteca* Biblioteca)
{
    int y,z;


    for(z = 0; z < Biblioteca->tamanho; z++){
        printf("%d texto:\n",z);
        for(y = 0; y < Biblioteca->textos[z].numeroPalavras; y++)
        {


            printf("\n%s",Biblioteca->textos[z].texto[y].palavra);

        }
    }
    printf("\n");
}
void tamanhoBiblioteca(TBiblioteca* Biblioteca)
{
    printf("%d \n", Biblioteca->tamanho);
}



