/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 19/05/2025
Enunciado:
    Fa�a um programa em Linguagem C que receba um conjunto de 20 n�meros inteiros, verificar se existem n�meros repetidos e em quais posi��es. As mensagens de sa�da N�O precisam estar id�nticas, mas os n�meros (valores) sim. O vetor sempre trabalha com as posi��es de 0 a tamanho - 1. Para melhorar a apresenta��o, ao mostrar ao usu�rio, estamos sempre acrescentando +1.
    Casos de teste:
    
        Para o conjunto 5, 15, 5, 1, 1, 4, 10, 25, 22, 17, 12, 20, 30, 7, 9, 11, 4, 18, 10 e 10.
        o n�mero 5 est� repetido nas posi��es 1 - 3;
        o n�mero 1 est� repetido nas posi��es 4 - 5;
        o n�mero 10 est� repetido nas posi��es 7 - 19 - 20; 
        Para o conjunto 6, 15, 5, 1, 2, 4, 1, 25, 22, 17, 12, 1, 30, 7, 9, 1, 16, 18, 10 e 20.
        o n�mero 1 est� repetido nas posi��es 4 - 7 - 12 - 16;
        Para o conjunto 2, 10, 5, 1, 14, 4, 21, 25, 22, 17, 12, 28, 30, 7, 9, 11, 6, 18, 32 e 20.
        n�o existem n�meros repetidos. 
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#define TAM 20

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    srand(time(NULL));

    int num[TAM],
        aux[TAM],
        i = 0,
        j = 0;

    //Zerando o vetor auxiliar
    for (i = 0; i < TAM; i++) {
        aux[i] = 0;
    }

    // Entrada
    for (i = 0; i < TAM; i++) {
        num[i] = rand() % 30;
    }

    // Saida
    printf("\n================================================\n");
    printf("\nPara o conjunto");
    for (i = 0; i < TAM; i++) {
        printf(" - %d", num[i]);
    }
    // Processamento
    for(j = 0; j < TAM-1; j++){
        for(i = (j + 1); i < TAM; i++){
            if(num[j] == num[i]){
                if(aux[] != -1){
                    aux[j] = -1;
                    aux[i] = -1;
                }

            }
        }
    }



    printf("\n================================================\n");
    printf("\nFim do c�digo\n");
    return 0;
}