/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 27/05/2025
Enunciado:
    Fa�a um programa em Linguagem C que receba uma palavra do usu�rio e apresente cada caractere em uma linha.

    Exemplo:
    Entrada: Maria
    Sa�da:
    M
    a
    r
    i
    a
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#define TAM 100

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    int i = 0;
    char Nome[TAM];

    // Entrada
    printf("Entrada: ");
    fgets(Nome, 100, stdin);

    // Processamento e Saida
    printf("Saida:\n");
    for (i = 0; i < strlen(Nome); i++)
    {
        printf("%c\n", Nome[i]);
    } 
    
    printf("\nFim do c�digo\n");
    return 0;
}