/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 07/04/2025
Enunciado: 
    Faça um programa em Linguagem C que peça uma temperatura em graus célsius e apresente seu respectivo valor em fahrenheit. O cálculo de conversão é: F = (9 * C / 5) + 32.
    Casos de teste:
    a) Para a temperatura de 50o Celsius, a temperatura em Fahrenheit é 122;
    b) Para a temperatura de 18o Celsius, a temperatura em Fahrenheit é 64,4.

*/

#include<stdio.h>
#include<locale.h>

int main() {
        //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    float temperatura_celsius = 0.0,
        temperatura_fahrenheit = 0.0;

    // Entrada
    printf("Digite a temperatura em graus célcius: ");
    scanf("%f", &temperatura_celsius);

    // Processamento
    temperatura_fahrenheit = (temperatura_celsius * 9 / 5) + 32;
    
    // Saida
    printf("Para a temperatura de %.2f° Celsius, a temperatura em Fahrenheit é %.2f", temperatura_celsius, temperatura_fahrenheit);
    return 0;
}