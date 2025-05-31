/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 31/05/2025
Enunciado:
    Faça um programa em Linguagem C que receba o nome completo do usuário e troque o último sobrenome por ?XPTO?. Não é apenas para imprimir, precisa substituir o último sobrenome.

    Exemplo:
    Entrada: Joaquim Pereira da Silva
    Saída: Joaquim Pereira da XPTO
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
        k = 0,
        cont = 0;


    // Entrada
    puts(linha);

    printf("Entrada: ");
    fgets(input, TAM, stdin);
    input[strlen(input) - 1] = '\0';

    puts(linha);

    // Processamento
    k = strlen(input);
    for(i = 0; i < k; i++){
        if(input[i] == ' '){
            cont++;
        }
    }
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