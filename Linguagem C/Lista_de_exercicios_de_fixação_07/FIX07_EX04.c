/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 27/05/2025
Enunciado:
    Faça um programa em Linguagem C que receba uma string e depois um caractere, e retorne o número de vezes que esse caracter aparece na string.

    Exemplo:
    Entrada: Um sorriso e um bom dia ajuda a melhorar a vida de todo mundo         r
    Saída: O caractere >> r << aparece 4 vezes na frase.
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#define TAM 1000

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    int i = 0,
        cont = 0,
        k = 0;

    char frase[TAM],
        caracter = ' ';

    // Entrada
    printf("Frase: ");

    fgets(frase, TAM, stdin);
    frase[strlen(frase) - 1] = '\0';     //Retira o '\n' do vetor char

    printf("Caracter desejado: ");
    scanf("%c", &caracter);

    // Processamento
    k = strlen(frase);
    for (i = 0; i < k; i++)
    {
        if(frase[i] == caracter){
            cont++;
        }
    }
    

    //Saida
    printf("\nSaida:");
    

    printf("\nO caractere >> %c << aparece %d vezes na frase", caracter, cont);

    printf("\nFim do código\n");
    return 0;
}