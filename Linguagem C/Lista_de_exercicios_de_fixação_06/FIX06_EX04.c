/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 20/05/2025
Enunciado:
    Faça um programa em Linguagem C que crie uma matriz 6 x 6 de valores digitados pelo usuário. Calcule e apresente a soma dos valores da diagonal principal da matriz.
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#define LIN 6
#define COL 6

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    srand(time(NULL));

    int mat_1[LIN] [COL],
        mat_2[LIN] [COL],
        multi[LIN] [COL],
        i = 0,
        j = 0;

    // Entrada
    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            mat_1[i] [j] = rand() % 100;
            mat_2[i] [j] = rand() % 100;
        }
    }
    
    // mat_1
    printf("\n\n--------mat_1--------");
    for (i = 0; i < LIN; i++)
    {
        printf("\n");
        for (j = 0; j < COL; j++)
        {
            printf("| %3.d |", mat_1[i] [j]);
        }
    }

    // mat_2
    printf("\n\n--------mat_2--------");
    for (i = 0; i < LIN; i++)
    {
        printf("\n");
        for (j = 0; j < COL; j++)
        {
            printf("| %3.d |", mat_2[i] [j]);
        }
    }

    // Processamento
    // multi
    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            multi[i] [j] = (mat_1[i] [j] * mat_2[i] [j]);
        }
    }

    // Saida
    printf("\n\n-----------multi-----------");
    for (i = 0; i < LIN; i++)
    {
        printf("\n");
        for (j = 0; j < COL; j++)
        {
            printf("| %5.d |", multi[i] [j]);
        }
    }

    printf("\nFim do código\n");
    return 0;
}