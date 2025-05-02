/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 29/04/2025
Enunciado:
    Faça um programa em Linguagem C para calcular a média de notas obtida por um grupo de 8 alunos.
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    int cont = 1;

    float media = 0,
        nota,
        soma = 0;

    while (cont <= 8) {
        // Entrada
        printf("Digite a nota do aluno %d: ", cont);
        scanf("%f", &nota);

        // Processamento
        soma += nota;

        cont++;
    }
    media = soma / (cont - 1);
    // Saida
    printf("\nA média dos alunos foi de %.2f\n", media);

    return 0;
}