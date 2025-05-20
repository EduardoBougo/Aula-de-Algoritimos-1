/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 15/04/2025
Enunciado:
    Faça um programa em linguagem C que peça um número inteiro. Em seguida, o programa deve apresentar uma mensagem conforme a seguinte regra: 
    a. Se o valor for positivo: ?Valor positivo?; 
    b. Se o valor for negativo: ?Valor negativo?; 
    c. Se não for nenhuma das opções (se for 0): ?Valor neutro?.
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
    if (num > 0) {
        printf("O valor digitado e Positivo!");
    }
    else {
        if (num < 0) {
            printf("O valor digitado e Negativo!");
        }
        else {
            printf("O valor digitado e Nulo!");
        }
    }
    // Saida
    printf("\nFim do programa!\n");

    return 0;
}