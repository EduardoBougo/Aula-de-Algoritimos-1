/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 14/04/2025
Enunciado:
    Fa�a um programa em linguagem C que pe�a a idade do usu�rio. Se ele for menor de idade, d� uma mensagem que ele n�o poder� acessar o sistema. Independente da resposta, finalize o programa.
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    int idade_usuario = 0;

    // Entrada
    printf("Digite sua idade: ");
    scanf("%d", &idade_usuario);

    // Processamento e saida
    if (idade_usuario < 18) {
        printf("\nO usuario n�o pode acessar o sistema devido a sua idade.\n");
    }

    // Saida
    printf("\nFim do programa!\n");
    return 0;
}