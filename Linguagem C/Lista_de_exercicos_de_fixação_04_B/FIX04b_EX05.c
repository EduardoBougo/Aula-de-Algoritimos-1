/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 00/05/2025
Enunciado:
    Fa�a um programa em Linguagem C que receba um n�mero do usu�rio e apresente a fase "Seja bem vindo", tantas vezes quanto for esse n�mero. Um frase por linha.
    Usando Do-While
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
    printf("\nDigite um n�mero: ");
    scanf("%d", &num);

    // Processamento
    do
    {
        printf("\n %d) Seja bem vindo!\n", cont++);
    } while (cont <= num);
    
    // Saida
    printf("\nFim do c�digo\n");
    return 0;
}
