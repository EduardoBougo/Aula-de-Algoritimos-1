/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 00/05/2025
Enunciado:
    Faça um programa em Linguagem C que receba um número do usuário e apresente a fase "Seja bem vindo", tantas vezes quanto for esse número. Um frase por linha.
    Usando Do-While
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
    printf("\nDigite um número: ");
    scanf("%d", &num);

    // Processamento
    do
    {
        printf("\n %d) Seja bem vindo!\n", cont++);
    } while (cont <= num);
    
    // Saida
    printf("\nFim do código\n");
    return 0;
}
