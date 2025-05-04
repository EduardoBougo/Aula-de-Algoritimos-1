/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 29/04/2025
Enunciado:
     Fa�a um programa em Linguagem C para apresentar a tabuada de um n�mero escolhido pelo usu�rio (1 a 10).
     Usando for
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    int cont = 0,
        tab = 0;

    // Entrada
    printf("Escolha qual tabuada usar: ");
    scanf("%d", &tab);

    // Processamento e Saida
    while (cont <= 10) {
        printf("\n  |  %d x %2d = %3d  |", tab, cont, (cont * tab));
        cont ++;
    }

    return 0;
}