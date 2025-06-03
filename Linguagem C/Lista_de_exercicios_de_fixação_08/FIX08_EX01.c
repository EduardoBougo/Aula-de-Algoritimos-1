/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 03/06/2025
Enunciado:
    Fa�a um programa em Linguagem C que escreva uma fun��o para receber um n�mero e retornar o valor absoluto deste n�mero (a fun��o sempre retorna um valor positivo).
*/

#include<stdio.h>
#include<locale.h>

float modulo(float num);

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    float input = 0,
          output = 0;

    // Entrada
    printf("Digite um valor: ");
    scanf("%f", &input);

    // Processamento
    output = modulo(input);

    // Saida
    printf("O valor absoluto de %.2f, � >>> %.2f <<<", input, output);

    printf("\nFim do c�digo\n");
    return 0;
}

float modulo(float num){
    if(num < 0){
        return -num;
    }
    else{
        return num;
    }
}