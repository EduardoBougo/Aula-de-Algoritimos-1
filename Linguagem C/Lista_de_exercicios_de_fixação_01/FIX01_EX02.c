/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 07/04/2025
Enunciado: 
    Fa�a um programa em Linguagem C que pe�a o ano de nascimento do usu�rio e apresente sua prov�vel idade.
    Casos de teste:
    a) Para o ano 2000, a prov�vel idade � 22;
    b) Para o ano 1976, a prov�vel idade � 46.
*/

#include<stdio.h>
#include<locale.h>

int main() {
        //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    int idade = 0,
        Ano_nascimento = 0,
        Ano_atual = 2025;

    // Entrada
    printf("Digite qual ano voc� nasceu:");
    scanf("%d", &Ano_nascimento);

    // Processamento
    idade = Ano_atual - Ano_nascimento;

    // Saida
    printf("Para o ano %d, a prov�vel idade � %d", Ano_nascimento, idade);
    return 0;
}