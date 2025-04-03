#include <stdio.h>
#include <locale.h>

int main() { 
    // Acentuação
    setlocale(LC_ALL, "Portuguese_Portugal.utf8");

    // Declaração de variaveis
    int valor1, valor2, soma;

    // Entrada
    printf("Vamos somar dois números:\n");
    printf("\nDigite o valor1: ");
    scanf("%d", &valor1);
    printf("\nDigite o valor2: ");
    scanf("%d", &valor2);

    // Processamento
    soma = valor1 + valor2;

    // Saída
    printf("\nA soma dos valores %d e %d é igual a %d", valor1, valor2, soma);
    return 0;
}