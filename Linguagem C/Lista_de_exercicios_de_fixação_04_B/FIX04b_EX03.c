/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 00/05/2025
Enunciado:
    Fa�a um programa em Linguagem C que imprima todos os m�ltiplos de 3, entre 1 e 100.
    Usando Do-While
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    int cont = 0;

    // Processamento
    do {
        if ((cont % 3) == 0) {
            printf(".%d.", cont);
        }
        cont++;
    } while (cont <= 100);

    // Saida
    printf("\nFim do c�digo\n");

    return 0;
}
