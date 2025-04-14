/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 14/04/2025
Enunciado:
    Você está jogando um bingo e só faltam as "pedras" 73 e 27. Faça um programa em linguagem C que receba 2 valores "cantados" do usuário, se os valores "cantados" forem os seus, diga BINGO!!! Ao final, ganhando ou não, de uma mensagem de fim da rodada.
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    int num_bingo_01 = 0,
        num_bingo_02 = 0;

    // Entrada
    printf("\nDigite o valor do primeiro numero sorteado: ");
    scanf("%d", &num_bingo_01);
    printf("\nDigite o valor do sengundo numero sorteado: ");
    scanf("%d", &num_bingo_02);

    // Processamento
    if ((num_bingo_01 == 73 && num_bingo_02 == 27) || (num_bingo_01 == 27 && num_bingo_02 == 73)) {
        printf("\n BINGO \n");
    }

    // Saida
    printf("\nFim da rodada.\n");

    return 0;
}