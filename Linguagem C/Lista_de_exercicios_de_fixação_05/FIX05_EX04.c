/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 13/05/2025
Enunciado:
    Faça um programa em Linguagem C que peça o salário de 8 funcionários de uma determinada empresa. Armazene esses dados em um vetor. Calcule a média salarial dos funcionários. Depois, o programa deve apresentar quantos funcionários recebem menos que a média salarial.
*/

#include<stdio.h>
#include<locale.h>
#define TAM 8

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
        int num[TAM],
        i = 0,
        cont = 0,
        soma = 0;

    float media = 0;

    // Entrada
    for (i = 0; i < TAM; i++) {
        printf("Sálario do %d° funcionários: ", i+1);
        scanf("%d", &num[i]);
        soma += num[i];
    }

    // Processamento
    media = soma / TAM;
        for (i = 0; i < TAM; i++) {
            if(num[i] < media){
                cont++;
            }
    }

    // Saida
    printf("\n==========================================\n");
    printf("A media salarial foi de %.2f. E %d funcionários estão a baixo da média. ", media, cont);
    printf("\n==========================================\n");

    printf("\nFim do código\n");
    return 0;
}