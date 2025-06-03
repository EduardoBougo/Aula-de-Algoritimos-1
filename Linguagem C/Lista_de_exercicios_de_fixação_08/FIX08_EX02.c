/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 03/06/2025
Enunciado:
    Fa�a um programa em Linguagem C que escreva uma fun��o para calcular a m�dia aritm�tica de 3 valores. A fun��o deve receber os valores como par�metro, calcular e apresentar o resultado na tela.
*/

#include<stdio.h>
#include<locale.h>

float media_aritmetica(float num_1, float num_2, float num_3);

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    float input_1 = 0,
          input_2 = 0,
          input_3 = 0,
          output = 0;

    // Entrada
    printf("Digite o valor 1: ");
    scanf("%f", &input_1);
    printf("Digite o valor 2: ");
    scanf("%f", &input_2);
    printf("Digite o valor 3: ");
    scanf("%f", &input_3);
    // Processamento
    output = media_aritmetica(input_1, input_2, input_3);

    // Saida
    printf("A m�dia aritmedica dos valores %.2f, %.2f e %.2f � >>> %.2f <<<", input_1, input_2, input_3, output);

    printf("\nFim do c�digo\n");
    return 0;
}

float media_aritmetica(float num_1, float num_2, float num_3){
    float soma = 0,
          media = 0;

    soma = num_1 + num_2 + num_3;
    media = soma / 3;
    return media;
}