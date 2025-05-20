/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 20/05/2025
Enunciado:
    Fa�a um programa em Linguagem C que crie uma matriz de 2x2, de n�meros inteiros. Populacione-a usando la�o PARA (FOR) e, por fim, apresente todos os valores na tela (com aparencia de matriz).
*/

#include<stdio.h>
#include<locale.h>
#define LIN 2
#define COL 2

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    int num[LIN] [COL],
        i = 0,
        j = 0;

    // Entrada
    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("Valor [%d] [%d] : ", i, j);
            scanf("%d", &num[i] [j]);
        }
    }
    
    // Saida
    printf("\n..:: Apresentando valores ::..");
    printf("\n-----------------------");
    for (i = 0; i < LIN; i++)
    {
        printf("\n");
        for (j = 0; j < COL; j++)
        {
            printf("| %4d |", num[i] [j]);
        }
    }

    printf("\nFim do c�digo\n");
    return 0;
}