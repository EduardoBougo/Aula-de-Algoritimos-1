/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 27/05/2025
Enunciado:
    Faça um programa em Linguagem C que receba o seu nome completo e apresente quantas LETRAS tem seu nome. Aqui, precisa descontar a quantidade de espaços.

    Exemplo:
    Entrada: Joaquim Pereira da Silva
    Saída: Seu nome tem 21 letras.
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

    char entrada[TAM];

    // Entrada
    printf("Entrada: ");

    fgets(entrada, TAM, stdin);
    entrada[strlen(entrada) - 1] = '\0';     //Retira o '\n' do vetor char

    // Processamento
    k = strlen(entrada);
    for (i = 0; i < k; i++)
    {
        if(entrada[i] == ' '){
            cont++;
        }
    }

    //Saida
    printf("\nSaida:");
    printf("\nSaída: Seu nome tem %d letras.",(strlen(entrada) - cont));

    printf("\nFim do código\n");
    return 0;
}