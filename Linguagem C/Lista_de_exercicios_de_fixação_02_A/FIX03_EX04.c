/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 14/04/2025
Enunciado:
    Voc� est� jogando um bingo e s� faltam as "pedras" 51. Fa�a um programa em linguagem C que receba 1 valor "cantado" do usu�rio, e diga BINGO se deu a sua pedra. Ao final, ganhando ou n�o, de uma mensagem de fim da rodada.
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    int num_bingo = 0;

    // Entrada
    printf("Digite o valor do numero sorteado: ");
    scanf("%d", &num_bingo);

    // Processamento
    if (num_bingo == 51) {
        printf("\nBINGO\n");
    }

    // Saida
    printf("\nFim da rodada.\n");

    return 0;
}