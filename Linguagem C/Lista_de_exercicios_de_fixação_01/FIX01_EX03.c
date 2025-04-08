/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 07/04/2025
Enunciado: 
    Fa�a um programa em Linguagem C que pe�a uma temperatura em graus c�lsius e apresente seu respectivo valor em fahrenheit. O c�lculo de convers�o �: F = (9 * C / 5) + 32.
    Casos de teste:
    a) Para a temperatura de 50o Celsius, a temperatura em Fahrenheit � 122;
    b) Para a temperatura de 18o Celsius, a temperatura em Fahrenheit � 64,4.

*/

#include<stdio.h>
#include<locale.h>

int main() {
        //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    float temperatura_celsius = 0.0,
        temperatura_fahrenheit = 0.0;

    // Entrada
    printf("Digite a temperatura em graus c�lcius: ");
    scanf("%f", &temperatura_celsius);

    // Processamento
    temperatura_fahrenheit = (temperatura_celsius * 9 / 5) + 32;
    
    // Saida
    printf("Para a temperatura de %.2f� Celsius, a temperatura em Fahrenheit � %.2f", temperatura_celsius, temperatura_fahrenheit);
    return 0;
}