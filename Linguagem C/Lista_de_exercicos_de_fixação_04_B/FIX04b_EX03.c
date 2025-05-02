/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 00/05/2025
Enunciado:
    Faça um programa em Linguagem C que imprima todos os múltiplos de 3, entre 1 e 100.
    Usando Do-While
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    int cont = 0;

    // Processamento
    do {
        if ((cont % 3) == 0) {
            printf(".%d.", cont);
        }
        cont++;
    } while (cont <= 100);

    // Saida
    printf("\nFim do código\n");

    return 0;
}
