/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 13/05/2025
Enunciado:
    Fa�a um programa em Linguagem C que pe�a 6 n�meros inteiros e, depois, apresente-os na tela na forma invertida ao que foi digitado.
    Casos de teste (ignore os _ ):
    a) Para a entrada: 1 _ 3 _ 2 _ 4 _ 5 _ 9, a sa�da ser�: 9 _ 5 _ 4 _ 2 _ 3 _ 1
    b) Para a entrada: 70 _ 18 _ 7 _ 51 _ 12 _ 6, a sa�da ser�: 6 _ 12 _ 51 _ 7 _ 18 _ 70
*/

#include<stdio.h>
#include<locale.h>
#define TAM 6

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    int num [TAM],
        i = 0;

    // Entrada
    for (i = 0; i < TAM; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
    }

    // Processamento e Saida
    for(i = TAM-1; i >= 0; i--){
        printf("%d ", num[i]);
    }

    printf("\nFim do c�digo\n");
    return 0;
}