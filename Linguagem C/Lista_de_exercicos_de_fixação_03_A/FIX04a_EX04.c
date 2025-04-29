/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 00/04/2025
Enunciado:
    Faça um programa em Linguagem C que receba um número do usuário e apresente a fase "Seja bem vindo", tantas vezes quanto for esse número. Um frase por linha.
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
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