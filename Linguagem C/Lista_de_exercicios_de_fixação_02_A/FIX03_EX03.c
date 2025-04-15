/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 00/04/2025
Enunciado:
    O sal�rio m�nimo em 2024 � equivalente a R$ 1.412,00. Fa�a um programa em linguagem C que receba o valor do sal�rio bruto de um funcion�rio, se ele ganhar menos que 2 sal�rios m�nimos, acres�a um b�nus de 10% ao sal�rio a receber. Ao final apresente o valor do sal�rio bruto, o valor do aumento e o valor do novo sal�rio a receber.
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    float salario_bruto = 0,
        novo_salario = 0,
        aumento_salarial = 0;

    // Entrada
    printf("Digite seu salario bruto: R$ ");
    scanf("%f", &salario_bruto);

    // Processamento
    if (salario_bruto < 1412) {
        aumento_salarial = salario_bruto * 0.1;
    }
    novo_salario = salario_bruto + aumento_salarial;
    // Saida
    printf("\nO salario bruto digitado foi de R$ %.2f, o aumento salarial foi de R$ %.2f e o novo salario e de R$ %.2f\n", salario_bruto, aumento_salarial, novo_salario);
    printf("\nFim do programa!\n");

    return 0;
}