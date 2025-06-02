/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 01/06/2025
Enunciado:
    Faça um programa em Linguagem C que receba 3 nomes completos (até 30 caracteres) e imprima-os em ordem alfabética.
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#define QUANT 3
#define TAM 30

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    char matrix[QUANT][TAM],
         aux[TAM],
         linha[] = {"\n======================================"};

    int i = 0,
        j = 0,
        k = 0;

    // Entrada
    puts(linha);

    for(i = 0; i < QUANT; i++){
        printf("String %d: ", (i + 1));
        fgets(matrix[i], TAM, stdin);
        matrix[i][strlen(matrix[i]) - 1] = '\0';
    }

    puts(linha);

    // Processamento
    for(i = 0; i < QUANT; i++){
        for(j = (i + 1); j < QUANT; j++){
            k = strcmp(matrix[i], matrix[j]); //testando a ordem alfabetica

            if(k > 0){ //Caso esteja fora de ordem, executa uma troca de posição de linhas na matrix
                strcpy(aux, matrix[i]); 
                strcpy(matrix[i], matrix[j]);
                strcpy(matrix[j], aux);
            }
        }
    }

    for(i = 0; i < QUANT; i++){
        printf("String %d: %s\n", (i + 1), matrix[i]);
    }
    
    printf("\nFim do código\n");
    return 0;
}