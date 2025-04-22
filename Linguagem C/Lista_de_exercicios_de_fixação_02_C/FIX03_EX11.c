/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 22/04/2025
Enunciado:
    Faça um programa em Linguagem C que peça o mês do ano (um número de 1 a 12). O algoritmo deve apresentar o nome do mês por extenso e quantos dias o mês tem, ou ?mês inválido?, caso digite um número fora do intervalo válido.
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    int menu;

    // Entrada
    printf("\n=============================================================\n");
    printf("\nDigite um numero que representa um mês do ano (1 a 12): ");
    scanf("%d", &menu);
    printf("\n\n=============================================================\n");
    // Processamento
    switch (menu) {
        case 1:
            printf("\nO mês selecionado foi Janeiro.\n");
            printf("\nE tem 31 dias.\n");
            break;

        case 2:
            printf("\nO mês selecionado foi Fevereiro.\n");
            printf("\nE pode ter 28 ou 29 dias.\n");
            break;

        case 3:
            printf("\nO mês selecionado foi Março.\n");
            printf("\nE tem 31 dias.\n");
            break;

        case 4:
            printf("\nO mês selecionado foi Abril.\n");
            printf("\nE tem 30 dias.\n");
            break;

        case 5:
            printf("\nO mês selecionado foi Maio.\n");
            printf("\nE tem 31 dias.\n");
            break;

        case 6:
            printf("\nO mês selecionado foi Junho.\n");
            printf("\nE tem 30 dias.\n");
            break;

        case 7:
            printf("\nO mês selecionado foi Julho.\n");
            printf("\nE tem 31 dias.\n");
            break;

        case 8:
            printf("\nO mês selecionado foi Agosto.\n");
            printf("\nE tem 31 dias.\n");
            break;

        case 9:
            printf("\nO mês selecionado foi Setembro.\n");
            printf("\nE tem 30 dias.\n");
            break;

        case 10:
            printf("\nO mês selecionado foi Outubro.\n");
            printf("\nE tem 31 dias.\n");
            break;

        case 11:
            printf("\nO mês selecionado foi Novembro.");
            printf("\nE tem 30 dias.\n");
            break;

        case 12:
            printf("\nO mês selecionado foi Dezembro.\n");
            printf("\nE tem 31 dias.\n");
            break;
            
        default:
            printf("\nMês Invalido!\n");
    }

    // Saida
    printf("Fim do programa!");

    return 0;
}