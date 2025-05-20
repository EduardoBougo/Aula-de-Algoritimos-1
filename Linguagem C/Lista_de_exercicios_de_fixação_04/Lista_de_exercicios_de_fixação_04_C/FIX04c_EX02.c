/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 28/04/2025
Enunciado:
    Faça um programa em Linguagem C que apresente os valores de 10 a 1.
    Usando for
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    int cont = 10;

    // Processamento e Saida
    for (cont = 10; cont > 0; cont--)
    {
        printf("%d - ", cont);
    }
    
    return 0;
}