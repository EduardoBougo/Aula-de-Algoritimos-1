/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 15/04/2025
Enunciado:
    Fa�a um programa em linguagem C que pe�a um n�mero inteiro e apresente a mensagem ?� par? ou ?� �mpar?.
    Dica: use o operador % (resto da divis�o de inteiros). Por exemplo: 5 % 2 retornar� o resto da divis�o de 5 por 2. Ent�o, 5 % 2 = 1 (porque 5 dividido por 2 � igual a 2 e resta 1). Por outro lado, 6 % 2 = 0, porque 6 dividido por 2 � igual a 3 e resta 0
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    int num = 0;

    // Entrada
    printf("\n----Vamos descobrir se um numero � PAR ou IMPAR----\n");
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