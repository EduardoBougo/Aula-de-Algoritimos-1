/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 00/04/2025
Enunciado:
    Fa�a um programa em Linguagem C que receba um n�mero do usu�rio e apresente a fase "Seja bem vindo", tantas vezes quanto for esse n�mero. Um frase por linha.
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    int cont = 1,
        num = 0;

    // Entrada
    printf("Digite um valor: ");
    scanf("%d", &num);
    
    // Processamento e Saida
    while (cont <= num) {
        printf("%d) Seja bem vindo.\n", cont++);
    }

    return 0;
}