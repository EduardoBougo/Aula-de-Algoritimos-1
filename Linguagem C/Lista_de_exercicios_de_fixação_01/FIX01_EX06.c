/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 07/04/2025
Enunciado: 
    Elabore um programa em Linguagem C para calcular: (a + b)3
    Casos de teste:
    a) Para os números 2 e 3, o cubo da soma é 125;
    b) Para os números 7 e 5, o cubo da soma é 1728.
*/

#include<stdio.h>

int main() {
    // Declaração de variaveis
    float numero_1 = 0,
        numero_2 = 0,
        soma = 0,
        cubo_da_soma = 0;
        
    // Entrada
    printf("Digite o primeiro número: ");
    scanf("%f", &numero_1);
    printf("Digite o segundo número: ");
    scanf("%f", &numero_2);

    // Processamento
    soma = numero_1 + numero_2;
    cubo_da_soma = soma * soma * soma;

    // Saida
    printf("Para os números %.1f e %.1f, o cubo da soma é %.1f", numero_1, numero_2, cubo_da_soma);
    return 0;
}