/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 31/05/2025
Enunciado:
    Fa�a um programa em Linguagem C que receba o nome completo do usu�rio e troque o �ltimo sobrenome por ?XPTO?. N�o � apenas para imprimir, precisa substituir o �ltimo sobrenome.

    Exemplo:
    Entrada: Joaquim Pereira da Silva
    Sa�da: Joaquim Pereira da XPTO
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

    for(i = k; input[i] != ' '; i--){    //Retira os espa�os no final da string
        input[i] = '\0';
    }

    for(i = 0; i < k; i++){
        if(input[i] == ' '){
            pos_esp = i;
        }
    }

    input[pos_esp] = '\0';    //Descarta a ultima palavra

    strcat(input, " XPTO");
    
    printf("\nSa�da: ");
    puts(input);

    printf("\nFim do c�digo\n");
    return 0;
}