/*
Nome..: Eduardo Camargo Bougo
Truma.: EC42A Algoritos 2
Data..: 13/08/2025
Enunciado:
    Crie um algoritmo que pe�a uma temperatura em Celsius, fa�a a convers�o para Fahrenheit e apresente o valor convertido. F= (9*C/5) + 32
*/

#include<stdio.h>
#include<locale.h>

float Conversao (float c);

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    float celcius = 0,
          fahrenheit = 0;

    // Entrada
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celcius);

    // Processamento
    fahrenheit = Conversao(celcius);

    // Saida
    printf("\nA temperatura %.2f graus Celsius pode ser convertida para %.2f graus Fahrenheit.\n", celcius, fahrenheit);
    printf("\nFim do c�digo\n");
    return 0;
}

float Conversao (float c){
    float fahrenheit = 0;

    fahrenheit = ((c/5) * 9) + 32;

    return fahrenheit;
}