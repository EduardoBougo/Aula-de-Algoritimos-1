/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 19/05/2025
Enunciado:
    Fa�a um programa em Linguagem C que dado o conjunto de temperaturas m�dias de cada um dos dias do m�s (para um m�s de trinta dias), apresente:

    A menor temperatura do m�s; 
    A maior temperatura do m�s; 
    A temperatura m�dia mensal; 
    O n�mero de dias no m�s em que a temperatura foi inferior � m�dia mensal. 
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#define TAM 30

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    srand(time(NULL));

    int num[TAM],
        min = -10,
        max = 35,
        i = 0,
        j = 0,
        aux = 0,
        soma = 0,
        inferior_media = 0;

    float media = 0;

    // Entrada
    for (i = 0; i < TAM; i++) {
        num[i] = rand() % (max - min + 1) + min;
        soma += num[i];
    }

    // Processamento
    media = soma / TAM;

    for(j = 0; j < TAM-1; j++){
        for(i = (j + 1); i < TAM; i++){
            if(num[i] < num[j]){
                aux = num[j];
                num[j] = num[i];
                num[i] = aux;
            }
        }
    }

    for (i = 0; i < TAM; i++) {
        if(num[i] < media){
            inferior_media++;
        }
    }
    // Saida
    printf("\nA menor temperatura do m�s >>> %d <<<", num[0]);
    printf("\nA maior temperatura do m�s >>> %d <<<", num[TAM-1]);
    printf("\nA temperatura media mensal foi de >>> %.2f <<<", media);
    printf("\nO n�mero de dias no m�s em que a temperatura foi inferior � m�dia mensal >>> %d <<<", inferior_media);

    printf("\nFim do c�digo\n");
    return 0;
}