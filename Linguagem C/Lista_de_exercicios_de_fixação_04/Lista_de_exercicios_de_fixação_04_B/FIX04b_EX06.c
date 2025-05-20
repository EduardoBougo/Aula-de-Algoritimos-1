/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 02/05/2025
Enunciado:
    Faça um programa em Linguagem C para apresentar a tabuada de um número escolhido pelo usuário (1 a 10).
    Usando Do-While
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    int cont = 0,
        tab = 0;

    // Entrada
    printf("\nDigite qual tabuada usar: ");
    scanf("%d", &tab);

    // Processamento
    do
    {
        printf("\n  |  %d x %2d = %3d  |", tab, cont, (cont * tab));
        cont++;
    } while (cont <= 10);

    // Saida
    printf("\nFim do código\n");
    return 0;
}