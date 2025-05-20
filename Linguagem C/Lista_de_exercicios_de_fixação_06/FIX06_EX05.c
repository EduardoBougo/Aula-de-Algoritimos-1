/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 20/05/2025
Enunciado:
    Fa�a um programa em Linguagem C que leia uma matriz 4 x 4, imprima a matriz e retorne a localiza��o (a linha e a coluna) do maior valor da matriz.
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#define LIN 4
#define COL 4

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    srand(time(NULL));

    int num[LIN] [COL],
        i = 0,
        j = 0,
        lin_maior_num = 0,
        col_maior_num = 0;

    // Entrada
    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            num[i] [j] = (rand() % 100) + 1;
            if (num[i] [j] > num[lin_maior_num] [col_maior_num]){
                lin_maior_num = i;
                col_maior_num = j;
            }
        }
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
    printf("\nO maior n�mero da matrix � >> %d << e est� na linha %d e coluna %d", num[lin_maior_num] [col_maior_num], lin_maior_num, col_maior_num);
    printf("\n\n------------------------------------------------------------------------\n");

    printf("\nFim do c�digo\n");
    return 0;
}