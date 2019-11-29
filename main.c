#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "TADPalavra.h"
#include "TADTexto.h"
#include "TADBiblioteca.h"

int main()
{
    int input,x,y,z;
    char inputLetra;
    input = -2;
    TPalavra word;
    TTexto text;
    TBiblioteca bib;
    //inicializaPalavra(&word);
    srand((unsigned int)time(NULL));
    memset(&word.palavra, '\0', MAXWORD);

    printf("|========================|\n");
    printf("|     Selecao de modo    |\n");
    printf("| 0) Modo Automatico     |\n");
    printf("| 1) Modo Manual         |\n");
    printf("|========================|\n\n");


    scanf("%d", &input);
    printf("\n");

    if(input == 0)
    {
    while(input != 99)
    {
        system("cls");
        printf("|===========================|\n");
        printf("|            Menu           |\n");
        printf("| 0) Inicializar funcoes    |\n");
        printf("| 1) Criar Palavra          |\n");
        printf("| 2) Criar Texto            |\n");
        printf("| 3) Criar Biblioteca       |\n");
        printf("| 4) Remover Palavra        |\n");
        printf("| 5) Remover Texto          |\n");
        printf("| 6) Remover Biblioteca     |\n");
        printf("| 7) Imprimir Palavra       |\n");
        printf("| 8) Imprimir Texto         |\n");
        printf("| 9) Imprimir Biblioteca    |\n");
        printf("| 10) Sair do programa      |\n");
        printf("| 11) Modo Manual           |\n");
        printf("|===========================|\n\n");

        scanf("%d", &input);
        if(input == 0)
        {
            inicializaPalavra(&word);
            inicializaTexto(&text);
            inicializaBiblioteca(&bib);
        }
        if(input == 1)
        {
            printf("==Insira o numero de letras da palavra: ");
            //getchar();
            scanf("%d", &input);
            for(x = 0; x < input; x++)
            {
                inputLetra = (rand() % 25) + 65;
                insereLetra(&word, inputLetra);
            }
            //inputLetra = (rand() % 25) + 65;
            //insereLetra(&word, inputLetra);
            //insereTexto(&bib);
            input = -1;
        }
        if(input == 2)
        {


        }
        if(input == 3)
        {


        }
        if(input == 4)
        {
            y = word.tamanho;
            for(x = 0; x < y; x++)
            {
                removeLetra(&word.palavra, word.palavra[0]);
            }
        }
        if(input == 5)
        {
            //removePalavra(&text, &word);
        }
        if(input == 6)
        {
            //removeTexto(&bib, &text);
        }
        if(input == 7)
        {
            printf("Imprimindo Palavra \n");
            imprimePalavra(word);
            tamanhoPalavra(&word);
            system("pause");
            //imprimeBiblioteca(&bib);
        }
        if(input == 8)
        {


        }
        if(input == 9)
        {


        }
        if(input == 10)
        {
            return 0;
        }
    }

    }

    if(input == 1)
    {
           while(input != -1)
    {





        scanf("%d", &input);
        if(input == 0)
        {
            inicializaPalavra(&word);
            inicializaTexto(&text);
            inicializaBiblioteca(&bib);
        }
        if(input == 1)
        {
            inputLetra = (rand() % 25) + 65;
            insereLetra(&word, inputLetra);
            //insereTexto(&bib);
        }
        if(input == 2)
        {
            getchar();
            scanf("%c", &inputLetra);
            removeLetra(&word, inputLetra);
        }
        if(input == 3)
        {
            imprimePalavra(word);
            //imprimeBiblioteca(&bib);
        }
        if(input == 4)
        {
            //tamanhoPalavra(&word);
            tamanhoBiblioteca(&bib);
        }


    }
    }

    return 0;
}
