/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 13/05/2025
Enunciado:
    Faça um programa em Linguagem C que peça 5 números inteiros. Após digitados, o programa deve ordenar os valores no vetor e apresentá-los na tela em ordem crescente.
    Casos de teste (ignore os _ ):
    a) Para a entrada: 10 _ 50 _ 20 _ 40 _ 30
    
        Saída: 10 _ 20 _ 30 _ 40 _ 50
    
    b) Para a entrada: 8 _ 15 _ 5 _ 16 _ 9
    
        Saída: 5 _ 8 _ 9 _ 15 _ 16
*/

#include<stdio.h>
#include<locale.h>
#define TAM 5

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    int num[TAM],
        i = 0,
        j = 0,
        aux = 0;

    // Entrada
    for (i = 0; i < TAM; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
    }

    // Processamento
    for(j = 0; j < TAM-1; j++){
        for(i = (j + 1); i < TAM; i++){
            if(num[i] < num[j]){
                aux = num[j];
                num[j] = num[i];
                num[i] = aux;
            }
        }
    }

    // Saida
    printf("\nSaída: ");
    for(i = 0; i < TAM; i++){
        printf("%d ", num[i]);
    }

    printf("\nFim do código\n");
    return 0;
}