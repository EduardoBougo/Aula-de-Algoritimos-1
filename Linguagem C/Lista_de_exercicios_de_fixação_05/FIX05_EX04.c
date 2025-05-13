/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 13/05/2025
Enunciado:
    Fa�a um programa em Linguagem C que pe�a o sal�rio de 8 funcion�rios de uma determinada empresa. Armazene esses dados em um vetor. Calcule a m�dia salarial dos funcion�rios. Depois, o programa deve apresentar quantos funcion�rios recebem menos que a m�dia salarial.
*/

#include<stdio.h>
#include<locale.h>
#define TAM 8

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
        int num[TAM],
        i = 0,
        cont = 0,
        soma = 0;

    float media = 0;

    // Entrada
    for (i = 0; i < TAM; i++) {
        printf("S�lario do %d� funcion�rios: ", i+1);
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
    printf("A media salarial foi de %.2f. E %d funcion�rios est�o a baixo da m�dia. ", media, cont);
    printf("\n==========================================\n");

    printf("\nFim do c�digo\n");
    return 0;
}