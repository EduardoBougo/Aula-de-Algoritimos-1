#include <stdio.h>
#include <locale.h>

int main() { 
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declara��o de variaveis
    int valor1, valor2, soma;

    // Entrada
    printf("Vamos somar dois n�meros:\n");
    printf("\nDigite o valor1: ");
    scanf("%d", &valor1);
    printf("\nDigite o valor2: ");
    scanf("%d", &valor2);

    // Processamento
    soma = valor1 + valor2;

    // Sa�da
    printf("\nA soma dos valores %d e %d � igual a %d", valor1, valor2, soma);
    return 0;
}