/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 28/04/2025
Enunciado:
    Fa�a um programa em Linguagem C que apresente os valores de 1 a 10.
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    int cont = 1;


    // Processamento e Saida
    while (cont <= 10) {
        printf("%d - ", cont);
    cont ++;
    }

    return 0;
}