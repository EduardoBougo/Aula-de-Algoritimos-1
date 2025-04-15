/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 14/04/2025
Enunciado:
    Faça um programa em linguagem C que leia uma valor do usuário e diga se ele é um valor igual a zero.
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    int valor = 0;

    // Entrada
    printf("Digite um valor: ");
    scanf("%d", &valor);

    // Processamento e saida
    if (valor == 0) {
        printf("\nO valor dgitado é igual a zero\n");
    }
    printf("\nFim do programa!\n");
    return 0;
}