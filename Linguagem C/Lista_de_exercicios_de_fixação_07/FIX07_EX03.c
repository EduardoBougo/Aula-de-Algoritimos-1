/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 27/05/2025
Enunciado:
    Faça um programa em Linguagem C que receba uma frase do usuário e apresente-a de trás para frente.

    Exemplo:
    Entrada: Testando uma frase
    Saída: esarf amu odnatseT
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#define TAM 100

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    int i = 0,
        j = 0;

    char frase[TAM],
        aux = ' ';

    // Entrada
    printf("Entrada: ");

    fgets(frase, 100, stdin);
    frase[strlen(frase) - 1] = '\0';     //Retira o '\n' do vetor char

    // Processamento e Saida
    printf("Saida:\n");
    //Invertendo os caracteres
    for (i = 0, j = (strlen(frase) - 1); i < j; i++, j--)
    {
        aux = frase[i];
        frase[i] = frase[j];
        frase[j] = aux;
    } 

    printf("\n%s", frase);

    printf("\nFim do código\n");
    return 0;
}