/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 16/06/2025
Enunciado:
    Faça um programa em Linguagem C que receba e apresente na tela uma data. Esta data é um registro (struct) com dia, mês e ano (ambos inteiros).
*/

#include<stdio.h>
#include<locale.h>

struct Data{
    int dia;
    int mes;
    int ano;
} dt; // Declaração de variaveis

void dataFormatada(struct Data dt);

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Entrada
    printf("Digite o dia: ");
    scanf("%d", &dt.dia);

    printf("Digite o mês: ");
    scanf("%d", &dt.mes);

    printf("Digite o ano: ");
    scanf("%d", &dt.ano);

    // Processamento e Saida
    dataFormatada(dt);

    printf("\nFim do código\n");
    return 0;
}

void dataFormatada (struct Data dt){
    printf("%02d/%02d/%4d", dt.dia, dt.mes, dt.ano);
}