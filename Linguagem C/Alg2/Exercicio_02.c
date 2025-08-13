/*
Nome..: Eduardo Camargo Bougo
Truma.: EC42A Algoritos 2
Data..: 00/00/2025
Enunciado:
    Crie um algoritmo que pe�a uma temperatura em Fahrenheit, fa�a a convers�o para Celsius e apresente o valor convertido. C= 5*(F-32)/9
*/

#include<stdio.h>
#include<locale.h>

float Conversao (float f);

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    float celcius = 0,
          fahrenheit = 0;

    // Entrada
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Processamento
    celcius = Conversao(fahrenheit);

    // Saida
    printf("\nA temperatura %.2f graus Fahrenheit pode ser convertida para %.2f graus Celsius.\n", fahrenheit, celcius);
    printf("\nFim do c�digo\n");
    return 0;
}

float Conversao (float f){
    float celcius = 0;

    celcius = 5 * ((f - 32) / 9);

    return celcius;
}