/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 31/05/2025
Enunciado:
    Faça um programa em Linguagem C que receba uma palavra do usuário e retire o hífen se acaso existir. Não é apenas para imprimir, precisa retirar o hífen da palavra.

    Exemplo1:
    Entrada: segunda-feira
    Saída: segunda feira

    Exemplo2:
    Entrada: Teste sem hifen
    Saída: Teste sem hifen
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#define TAM 100

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    char input[TAM],
         linha[] = {"\n======================================\n"};

    int i = 0,
        k = 0;


    // Entrada
    puts(linha);

    printf("Entrada: ");
    fgets(input, TAM, stdin);
    input[strlen(input) - 1] = '\0';

    puts(linha);

    // Processamento
    k = strlen(input);
    for(i = 0; i < k; i++){
        if(input[i] == '-'){
            input[i] = ' ';
        }
    }

    printf("\nSaída: ");
    puts(input);

    printf("\nFim do código\n");
    return 0;
}