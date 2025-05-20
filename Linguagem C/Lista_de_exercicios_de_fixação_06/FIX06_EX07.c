/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 20/05/2025
Enunciado:
    Escreva um programa em Linguagem C que simule a venda de ingressos para uma sessão de cinema, sabe-se que o cinema possui 150 poltronas, dispostas em 15 filas de 10 poltronas cada. Representado da seguinte maneira:

    0 - poltrona vazia
    1 - pagante inteira
    2 - pagante meia

    O preenchimento é aleatório (pode usar a função rand() ). Apresente 

    a) Ocupação das poltronas; 
    b) Quantidade de cada tipo; 
    c) Valor apurado na sessão, sabendo que o ingresso custa R$ 18,00 (inteira).
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#define LIN 15
#define COL 10

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    srand(time(NULL));

    int num[LIN] [COL],
        cont[3] = {0, 0, 0},
        i = 0,
        j = 0;

    // Entrada
    // matrix num[][]
    printf("\n\n-----------num[][]-----------");
    for (i = 0; i < LIN; i++)
    {
        printf("\n");
        for (j = 0; j < COL; j++)
        {
            num[i] [j] = rand() % 3;
            printf("| %3.d |", num[i] [j]);
        }
    }




    // Processamento

    // Saida
    printf("\n\n------------------------------------------------------------------------\n");
    printf("\n-------------sum-------------\n");

    printf("\n\n------------------------------------------------------------------------\n");

    printf("\nFim do código\n");
    return 0;
}