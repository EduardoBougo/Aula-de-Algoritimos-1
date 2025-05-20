/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 20/05/2025
Enunciado:
    Faça um programa em Linguagem C que permita ao usuário entrar com um array MULTIdimensional (matriz) 3 x 3 de números inteiros. Crie também um array UNIdimensional (vetor) pela armazenar a soma dos números de cada coluna da matriz. Mostre na tela esse array resultante. Por exemplo, a matriz:
    | 5  | -8 | 10 |
    | 1  | 2  | 15 |
    | 25 | 10 | 7  |
    Vai gerar um vetor, onde cada posição é a soma das colunas da matriz.  Como exemplo, a primeira posição será 5 + 1 + 25 = 31, e assim por diante:
    | 31 | 4 | 32 |
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

    int num[LIN] [COL],
        sum[COL],
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

    for (i = 0; i < COL; i++)
    {
        soma = 0;
        for (j = 0; j < LIN; j++)
        {
            soma += num[j] [i];
        }
        sum[i] = soma;
    }

    // matrix num[][]
    printf("\n\n-----------num[][]-----------");
    for (i = 0; i < LIN; i++)
    {
        printf("\n");
        for (j = 0; j < COL; j++)
        {
            printf("| %3.d |", num[i] [j]);
        }
    }

    // Processamento

    // Saida
    printf("\n\n------------------------------------------------------------------------\n");
    printf("\n-------------sum-------------\n");
    for (i = 0; i < COL; i++)
    {
        printf("| %3.d |", sum[i]);
    }
    printf("\n\n------------------------------------------------------------------------\n");

    printf("\nFim do código\n");
    return 0;
}