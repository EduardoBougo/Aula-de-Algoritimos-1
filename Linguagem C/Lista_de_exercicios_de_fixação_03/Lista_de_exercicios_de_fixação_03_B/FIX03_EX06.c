/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 15/04/2025
Enunciado:
    Criar um programa em linguagem C que leia 2 números. Caso o primeiro número lido seja maior que o segundo, imprima na tela o primeiro número menos o segundo, caso contrário mostre a soma dos dois números.
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    float num_01 = 0,
        num_02 = 0;

    // Entrada
    printf("Digite o primeiro numero: ");
    scanf("%f", &num_01);
    printf("Digite o segundo numero?: ");
    scanf("%f", &num_02);

    // Processamento
    if (num_01 > num_02) {
        printf("\nO numero %.2f menos %.2f e igual a %.2f \n", num_01, num_02, (num_01 - num_02));
    }
    else {
        printf("A soma dos numeros %.2f e %.2f e igual a %.2f", num_01, num_02, (num_01 + num_02));
    }
    // Saida
    printf("\nFim do programa!\n");

    return 0;
}