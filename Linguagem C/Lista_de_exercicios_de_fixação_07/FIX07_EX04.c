/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 27/05/2025
Enunciado:
    Fa�a um programa em Linguagem C que receba uma string e depois um caractere, e retorne o n�mero de vezes que esse caracter aparece na string.

    Exemplo:
    Entrada: Um sorriso e um bom dia ajuda a melhorar a vida de todo mundo         r
    Sa�da: O caractere >> r << aparece 4 vezes na frase.
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#define TAM 1000

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    int i = 0;

    char frase[TAM],
        caracter = ' ';

    // Entrada
    printf("Entrada: ");

    fgets(frase, TAM, stdin);
    frase[strlen(frase) - 1] = "\0";     //Retira o '\n' do vetor char

    // Processamento
    for (i = 0; i < strlen; i++)
    {
        /* code */
    }
    

    //Saida
    printf("Saida:\n");
    

    printf("\nO caractere >> %c << aparece %d vezes na frase", , );

    printf("\nFim do c�digo\n");
    return 0;
}