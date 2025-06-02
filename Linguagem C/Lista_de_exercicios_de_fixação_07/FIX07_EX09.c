/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 01/06/2025
Enunciado:
     Fa�a um programa em Linguagem C que receba 2 nome completos (at� 30 caracteres) e imprima-os em ordem alfab�tica.
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#define TAM 30

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    char input_1[TAM],
         input_2[TAM],
         linha[] = {"\n======================================"};

    int i = 0;


    // Entrada
    puts(linha);

    printf("String 1: ");
    fgets(input_1, TAM, stdin);
    input_1[strlen(input_1) - 1] = '\0';

    printf("String 2: ");
    fgets(input_2, TAM, stdin);
    input_2[strlen(input_2) - 1] = '\0';

    puts(linha);

    // Processamento
    i = strcmp(input_1, input_2);

    if(i == 0){
        printf("As duas strings s�o identicas\n");
        printf("%s == %s", input_1, input_2);
    }
    if(i < 0){
        printf("%s, %s\n",input_1, input_2);
    }
    if(i > 0){
        printf("%s, %s\n",input_2, input_1);
    }
    printf("%d", i);

    printf("\nFim do c�digo\n");
    return 0;
}