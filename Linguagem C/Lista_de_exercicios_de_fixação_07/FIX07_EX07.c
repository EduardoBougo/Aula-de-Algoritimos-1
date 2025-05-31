/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 31/05/2025
Enunciado:
    Fa�a um programa em Linguagem C que receba uma palavra do usu�rio e retire o h�fen se acaso existir. N�o � apenas para imprimir, precisa retirar o h�fen da palavra.

    Exemplo1:
    Entrada: segunda-feira
    Sa�da: segunda feira

    Exemplo2:
    Entrada: Teste sem hifen
    Sa�da: Teste sem hifen
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#define TAM 100

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
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

    printf("\nSa�da: ");
    puts(input);

    printf("\nFim do c�digo\n");
    return 0;
}