/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 19/05/2025
Enunciado:
    Faça um programa em Linguagem C que receba um conjunto de 20 números inteiros, verificar se existem números repetidos e em quais posições. As mensagens de saída NÃO precisam estar idênticas, mas os números (valores) sim. O vetor sempre trabalha com as posições de 0 a tamanho - 1. Para melhorar a apresentação, ao mostrar ao usuário, estamos sempre acrescentando +1.
    Casos de teste:
    
        Para o conjunto 5, 15, 5, 1, 1, 4, 10, 25, 22, 17, 12, 20, 30, 7, 9, 11, 4, 18, 10 e 10.
        o número 5 está repetido nas posições 1 - 3;
        o número 1 está repetido nas posições 4 - 5;
        o número 10 está repetido nas posições 7 - 19 - 20; 
        Para o conjunto 6, 15, 5, 1, 2, 4, 1, 25, 22, 17, 12, 1, 30, 7, 9, 1, 16, 18, 10 e 20.
        o número 1 está repetido nas posições 4 - 7 - 12 - 16;
        Para o conjunto 2, 10, 5, 1, 14, 4, 21, 25, 22, 17, 12, 28, 30, 7, 9, 11, 6, 18, 32 e 20.
        não existem números repetidos. 
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#define TAM 20

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    srand(time(NULL));

    int num[TAM],
        aux[TAM],
        num_aux = 0,
        i = 0,
        j = 0;

    //Zerando o vetor auxiliar
    for (i = 0; i < TAM; i++) {
        aux[i] = 0;
    }

    // Entrada
    printf("\n================================================\n");
    printf("\nPara o conjunto");

    for (i = 0; i < TAM; i++) {
        num[i] = rand() % 10;
        printf(" - %d", num[i]);
        aux[i] = i;
    }
    printf("\n================================================\n");

    // Processamento
    printf("a");
    for(i = 0; i < TAM-1; i++){
        for(j = (i + 1); j < TAM; j++){
            if(num[j] < num[i]){
                //Ordenação
                num_aux = num[j];
                num[j] = num[i];
                num[i] = num_aux;

                //Salvando posição
                num_aux = aux[j];
                aux[j] = aux[i];
                aux[i] = num_aux;
            }
        }
    }
    printf("a");
    printf("\n================================================\n");
    for (i = 0; i < TAM; i++) {
        printf(" - %d", num[i]);
    }
    printf("\n================================================\n");
    for (i = 0; i < TAM; i++) {
        printf(" - %d", aux[i]);
    }
    

/*    for(i = 0; i < TAM-1; i++){
        for(j = (i + 1); j < TAM; j++){
            if(num[i] == num[j]){
                if(aux[j] != -1){
                    aux[i] = -1;
                    aux[j] = -1;
                    printf("- %d", num[j]);
                }
            }
        }
    }
*/

    printf("\n================================================\n");
    printf("\nFim do código\n");
    return 0;
}