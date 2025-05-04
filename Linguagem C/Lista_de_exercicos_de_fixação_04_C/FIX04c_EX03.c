/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 28/04/2025
Enunciado:
    Faça um programa em Linguagem C que imprima todos os múltiplos de 3, entre 1 e 100.
    Usando for
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    int cont = 0;

    // Processamento e Saida
    for (cont = 0; cont <= 100; cont++)
    {
        if ((cont % 3) == 0){
            printf("%d - ", cont);
        }
    }

    return 0;
}