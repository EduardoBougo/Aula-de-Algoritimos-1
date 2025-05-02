/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 00/05/2025
Enunciado:
    Fa�a um programa em Linguagem C para calcular a m�dia de notas obtida por um grupo de 8 alunos.
    Usando Do-While
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    float nota = 0,
        soma = 0,
        media = 0;
    int cont = 1;

    do
    {
        // Entrada
        printf("Digite a nota do aluno %d: ", cont);
        scanf("%f", &nota);

        // Processamento
        soma += nota;

        cont++;
    } while (cont <= 8);
    media = (soma / (cont - 1));

    // Saida
    printf("\nA media dos %d alunos foi de >>> %.2f <<<\n", (cont - 1), media);

    printf("\nFim do c�digo\n");
    return 0;
}
