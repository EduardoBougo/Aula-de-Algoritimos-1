/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 03/06/2025
Enunciado:
    Faça um programa em Linguagem C que escreva uma função para calcular a média aritmética de 3 valores. A função deve receber os valores como parâmetro, calcular e apresentar o resultado na tela.
*/

#include<stdio.h>
#include<locale.h>

float media_aritmetica(float num_1, float num_2, float num_3);

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
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
    printf("A média aritmedica dos valores %.2f, %.2f e %.2f é >>> %.2f <<<", input_1, input_2, input_3, output);

    printf("\nFim do código\n");
    return 0;
}

float media_aritmetica(float num_1, float num_2, float num_3){
    float soma = 0,
          media = 0;

    soma = num_1 + num_2 + num_3;
    media = soma / 3;
    return media;
}