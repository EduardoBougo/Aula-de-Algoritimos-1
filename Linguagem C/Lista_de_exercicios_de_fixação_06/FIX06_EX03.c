/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 20/05/2025
Enunciado:
    Faça um programa em Linguagem C que crie três matrizes de 3 x 3 de inteiros: mat1, mat2 e mult. Em seguida, peça para o usuário digitar os valores para mat1 e mat2. Ao final, o algoritmo deverá preencher a matriz mult com a multiplicação das respectivas posições das matrizes anteriores. Então, por exemplo:
    | 3 | 1 | 4 |
    | 7 | 8 | 1 |
    | 2 | 1 | 3 |
        mat1
    | 2 | 2 | 0 |
    | 3 | 4 | 1 |
    | 5 | 2 | 1 |
        mat2
    | 6  | 2  | 0 |
    | 21 | 32 | 1 |
    | 10 | 2  | 3 |
        mult
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#define LIN 3
#define COL 3

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
            printf("| %3d |", mat_1[i] [j]);
        }
    }

    // mat_2
    printf("\n\n--------mat_2--------");
    for (i = 0; i < LIN; i++)
    {
        printf("\n");
        for (j = 0; j < COL; j++)
        {
            printf("| %3d |", mat_2[i] [j]);
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
            printf("| %5d |", multi[i] [j]);
        }
    }

    printf("\nFim do código\n");
    return 0;
}