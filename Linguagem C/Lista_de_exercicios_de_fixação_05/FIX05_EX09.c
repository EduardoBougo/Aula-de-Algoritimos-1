/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 19/05/2025
Enunciado:
    Faça um programa em Linguagem C que dado o conjunto de temperaturas médias de cada um dos dias do mês (para um mês de trinta dias), apresente:

    A menor temperatura do mês; 
    A maior temperatura do mês; 
    A temperatura média mensal; 
    O número de dias no mês em que a temperatura foi inferior à média mensal. 
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#define TAM 30

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
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
    printf("\nA menor temperatura do mês >>> %d <<<", num[0]);
    printf("\nA maior temperatura do mês >>> %d <<<", num[TAM-1]);
    printf("\nA temperatura media mensal foi de >>> %.2f <<<", media);
    printf("\nO número de dias no mês em que a temperatura foi inferior à média mensal >>> %d <<<", inferior_media);

    printf("\nFim do código\n");
    return 0;
}