/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 29/04/2025
Enunciado:
    Faça um programa em Linguagem C que receba 5número do usuário. A cada número lido imprima na tela se ele é ou não múltiplo de 3.
    Usando for
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    int cont = 0,
        num = 0;

    for (cont = 1; cont <= 5; cont++)
    {
        // Entrada
        printf("\n====================");
        printf("\nDigite um valor: ");
        scanf("%d", &num);
        // Processamento e Saida
        if (num % 3 == 0) {
            printf("\nO número %d é múltiplo de 3.\n", num);
        }
        else {
            printf("\nO número %d não é multiplo de 3.\n", num);
        }
    }

    return 0;
}