/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 13/05/2025
Enunciado:
    Fa�a um programa em Linguagem C que pe�a 5 n�meros inteiros e, no final, troque a ordem do primeiro n�mero com a do �ltimo n�mero digitado. Apresente os dados originais e os dados alterados na tela.
    Casos de teste (ignore os _ ):
    a) Para a entrada: 10 _ 50 _ 20 _ 40 _ 30, apresentar como sa�da:

        original...: 10 _ 50 _ 20 _ 40 _ 30
        alterado.: 30 _ 50 _ 20 _ 40 _ 10

    b) Para a entrada: 8 _ 15 _ 9 _ 16 _ 5, apresentar como sa�da:

        original...: 8 _ 15 _ 9 _ 16 _ 5
        alterado.: 5 _ 15 _ 9 _ 16 _ 8
*/

#include<stdio.h>
#include<locale.h>
#define TAM 5

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    int num[TAM],
        aux = 0,
        i = 0;

    // Entrada
    for (i = 0; i < TAM; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
    }

    // Processamento e Saida
    printf("\nOriginal....:");
    for(i = 0; i < TAM; i++){
        printf("%d ", num[i]);
    }

    aux = num[0];
    num[0] = num[TAM -1];
    num[TAM-1] = aux;
    printf("\nAlterado....:");
        for(i = 0; i < TAM; i++){
        printf("%d ", num[i]);
    }

    printf("\nFim do c�digo\n");
    return 0;
}