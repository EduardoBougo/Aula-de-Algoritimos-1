/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 22/04/2025
Enunciado:
    Fa�a um programa em Linguagem C que pe�a o m�s do ano (um n�mero de 1 a 12). O algoritmo deve apresentar o nome do m�s por extenso e quantos dias o m�s tem, ou ?m�s inv�lido?, caso digite um n�mero fora do intervalo v�lido.
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    int menu;

    // Entrada
    printf("\n=============================================================\n");
    printf("\nDigite um numero que representa um m�s do ano (1 a 12): ");
    scanf("%d", &menu);
    printf("\n\n=============================================================\n");
    // Processamento
    switch (menu) {
        case 1:
            printf("\nO m�s selecionado foi Janeiro.\n");
            printf("\nE tem 31 dias.\n");
            break;

        case 2:
            printf("\nO m�s selecionado foi Fevereiro.\n");
            printf("\nE pode ter 28 ou 29 dias.\n");
            break;

        case 3:
            printf("\nO m�s selecionado foi Mar�o.\n");
            printf("\nE tem 31 dias.\n");
            break;

        case 4:
            printf("\nO m�s selecionado foi Abril.\n");
            printf("\nE tem 30 dias.\n");
            break;

        case 5:
            printf("\nO m�s selecionado foi Maio.\n");
            printf("\nE tem 31 dias.\n");
            break;

        case 6:
            printf("\nO m�s selecionado foi Junho.\n");
            printf("\nE tem 30 dias.\n");
            break;

        case 7:
            printf("\nO m�s selecionado foi Julho.\n");
            printf("\nE tem 31 dias.\n");
            break;

        case 8:
            printf("\nO m�s selecionado foi Agosto.\n");
            printf("\nE tem 31 dias.\n");
            break;

        case 9:
            printf("\nO m�s selecionado foi Setembro.\n");
            printf("\nE tem 30 dias.\n");
            break;

        case 10:
            printf("\nO m�s selecionado foi Outubro.\n");
            printf("\nE tem 31 dias.\n");
            break;

        case 11:
            printf("\nO m�s selecionado foi Novembro.");
            printf("\nE tem 30 dias.\n");
            break;

        case 12:
            printf("\nO m�s selecionado foi Dezembro.\n");
            printf("\nE tem 31 dias.\n");
            break;
            
        default:
            printf("\nM�s Invalido!\n");
    }

    // Saida
    printf("Fim do programa!");

    return 0;
}