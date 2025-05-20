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

    int num[LIN] [COL],
        i = 0,
        j = 0,
        soma = 0;

    // Entrada
    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            num[i] [j] = (rand() % 100) + 1;
        }
    }

    // matrix num[][]
    printf("\n\n------------------num[][]------------------");
    for (i = 0; i < LIN; i++)
    {
        printf("\n");
        for (j = 0; j < COL; j++)
        {
            printf("| %3.d |", num[i] [j]);
        }
    }

    // Processamento
    for (i = 0; i < LIN; i++)
    {
        soma += num[i] [i];
    }

    // Saida
    printf("\n\n------------------------------------------------------------------------\n");
    printf("\nA soma dos valore da diagonal principal da matriz é >>> %d <<<", soma);
    printf("\n\n------------------------------------------------------------------------\n");

    printf("\nFim do código\n");
    return 0;
}