/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 29/04/2025
Enunciado:
    Fa�a um programa em Linguagem C para calcular a m�dia de notas obtida por um grupo de 8 alunos.
    Usando for
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    int cont = 1;

    float media = 0,
        nota,
        soma = 0;

    for (cont = 1; cont <= 8; cont++)
    {
        // Entrada
        printf("Digite a nota do aluno %d: ", cont);
        scanf("%f", &nota);

        // Processamento
        soma += nota;
    }
    
    media = soma / (cont - 1);
    // Saida
    printf("\nA m�dia dos alunos foi de %.2f\n", media);

    return 0;
}