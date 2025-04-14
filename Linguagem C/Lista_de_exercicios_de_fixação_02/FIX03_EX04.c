/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 14/04/2025
Enunciado:
    Você está jogando um bingo e só faltam as "pedras" 51. Faça um programa em linguagem C que receba 1 valor "cantado" do usuário, e diga BINGO se deu a sua pedra. Ao final, ganhando ou não, de uma mensagem de fim da rodada.
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
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