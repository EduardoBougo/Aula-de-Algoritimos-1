/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 29/04/2025
Enunciado:
    Fa�a um programa em Linguagem C que receba 5n�mero do usu�rio. A cada n�mero lido imprima na tela se ele � ou n�o m�ltiplo de 3.
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    int cont = 1,
        num = 0;

            while (cont <= 5) {
                // Entrada
                printf("\n====================");
                printf("\nDigite um valor: ");
                scanf("%d", &num);
                // Processamento
                if (num % 3 == 0) {
                    printf("\nO n�mero %d � m�ltiplo de 3.\n", num);
                }
                else {
                    printf("\nO n�mero %d n�o � multiplo de 3.\n", num);
                }
                cont++;
                // Saida
            }


    return 0;
}