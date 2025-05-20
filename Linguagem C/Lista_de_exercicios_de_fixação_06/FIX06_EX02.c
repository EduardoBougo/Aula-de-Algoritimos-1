/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 20/05/2025
Enunciado:
    Faça um programa em Linguagem C que crie uma matriz de 2x3, de números inteiros e a populacione usando laço PARA (FOR). Por fim, calcule e apresente a soma de cada linha.
    Por exemplo, se o usuário digitar:
    | 3 | 1 | 4 |
    | 7 | 8 | 1 |
    Então, o algoritmo deverá apresentar respectivamente: 8 e 16.
*/

#include<stdio.h>
#include<locale.h>
#define LIN 2
#define COL 3

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    int num[LIN] [COL],
        i = 0,
        j = 0,
        soma = 0;

    // Entrada
    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("Valor [%d] [%d] : ", i, j);
            scanf("%d", &num[i] [j]);
        }
    }
    
    // Processamento e Saida
    for (i = 0; i < LIN; i++)
    {
        soma = 0;
        for (j = 0; j < COL; j++)
        {
            soma += num[i] [j];
        }
        printf("\nSoma da linha %d é igual a %d", i, soma);
    }

    printf("\nFim do código\n");
    return 0;
}