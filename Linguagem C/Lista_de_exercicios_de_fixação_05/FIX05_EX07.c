/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 15/05/2025
Enunciado:
    Fa�a um programa em Linguagem C que receba (ou gere aleatoriamente) 25 valores. Ap�s digitados, o programa deve ordenar os valores no vetor e apresent�-los na tela em ordem decrescente.
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#define TAM 25 

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    float num[TAM],
        aux = 0;

    int i = 0,
        j = 0;

    srand(time(NULL));
    // Entrada
    for (i = 0; i < TAM; i++) {
        num[i] = rand() % 100;
    }

    // Processamento
    for(j = TAM; j >= 0; j--){
        for(i = (j - 1); i >= 0; i--){
            if(num[i] < num[j]){
                aux = num[j];
                num[j] = num[i];
                num[i] = aux;
            }
        }
    }

    // Saida
    for (i = 0; i < TAM; i++) {
        printf("%.2f\n", num[i]);
    }

    printf("\nFim do c�digo\n");
    return 0;
}