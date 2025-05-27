/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 27/05/2025
Enunciado:
    Fa�a um programa em Linguagem C que receba o nome completo do usu�rio e apresente-o com uma mensagem de boas vindas.

    Exemplo:
    Entrada: Jo�o Manoel da Silva
    Sa�da: BOM DIA, Jo�o Manoel da Silva.
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
    printf("Digite seu nome: ");
    gets(Nome);

    // Processamento e Saida
    printf("BOM DIA, ");
    for (i = 0; i < strlen(Nome); i++)
    {
        printf("%c", Nome[i]);
    }
    printf(".");   
    
    printf("\nFim do c�digo\n");
    return 0;
}