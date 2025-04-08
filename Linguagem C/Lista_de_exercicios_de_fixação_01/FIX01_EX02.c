/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 07/04/2025
Enunciado: 
    Faça um programa em Linguagem C que peça o ano de nascimento do usuário e apresente sua provável idade.
    Casos de teste:
    a) Para o ano 2000, a provável idade é 22;
    b) Para o ano 1976, a provável idade é 46.
*/

#include<stdio.h>
#include<locale.h>

int main() {
        //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    int idade = 0,
        Ano_nascimento = 0,
        Ano_atual = 2025;

    // Entrada
    printf("Digite qual ano você nasceu:");
    scanf("%d", &Ano_nascimento);

    // Processamento
    idade = Ano_atual - Ano_nascimento;

    // Saida
    printf("Para o ano %d, a provável idade é %d", Ano_nascimento, idade);
    return 0;
}