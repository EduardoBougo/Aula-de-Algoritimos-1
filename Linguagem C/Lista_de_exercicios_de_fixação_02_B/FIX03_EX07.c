/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 15/04/2025
Enunciado:
    Faça um programa em linguagem C que peça um número inteiro e apresente a mensagem ?é par? ou ?é ímpar?.
    Dica: use o operador % (resto da divisão de inteiros). Por exemplo: 5 % 2 retornará o resto da divisão de 5 por 2. Então, 5 % 2 = 1 (porque 5 dividido por 2 é igual a 2 e resta 1). Por outro lado, 6 % 2 = 0, porque 6 dividido por 2 é igual a 3 e resta 0
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    int num = 0;

    // Entrada
    printf("\n----Vamos descobrir se um numero é PAR ou IMPAR----\n");
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &num);

    // Processamento
    if (num % 2 == 0) {
        printf("\nO numero digitado e PAR!\n");
    }
    else {
        printf("\nO numero digitado e IMPAR!");
    }
    // Saida
    printf("\nFim do programa!\n");

    return 0;
}