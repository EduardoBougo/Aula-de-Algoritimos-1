/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 02/05/2025
Enunciado:
    Faça um programa em Linguagem C que apresente os valores de 10 a 1.
    Usando Do-While
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    int cont = 10;

    // Processamento
    do {
        printf(".%d.", cont);
        cont--;
    } while (cont > 0);

    // Saida

    printf("\nFim do código\n");
    return 0;
}
