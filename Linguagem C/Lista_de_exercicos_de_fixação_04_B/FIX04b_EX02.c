/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 02/05/2025
Enunciado:
    Fa�a um programa em Linguagem C que apresente os valores de 10 a 1.
    Usando Do-While
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    int cont = 10;

    // Processamento
    do {
        printf(".%d.", cont);
        cont--;
    } while (cont > 0);

    // Saida

    printf("\nFim do c�digo\n");
    return 0;
}
