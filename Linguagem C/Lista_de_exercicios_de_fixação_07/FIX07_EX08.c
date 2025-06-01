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
         linha[] = {"\n======================================"};

    int i = 0,
        k = 0,
        pos_esp = 0;


    // Entrada
    puts(linha);

    printf("Entrada: ");
    fgets(input, TAM, stdin);
    input[strlen(input) - 1] = '\0';

    puts(linha);

    // Processamento
    k = strlen(input);

    for(i = k; input[i] != ' '; i--){    //Retira os espaços no final da string
        input[i] = '\0';
    }

    for(i = 0; i < k; i++){
        if(input[i] == ' '){
            pos_esp = i;
        }
    }

    input[pos_esp] = '\0';    //Descarta a ultima palavra

    strcat(input, " XPTO");
    
    printf("\nSaída: ");
    puts(input);

    printf("\nFim do código\n");
    return 0;
}