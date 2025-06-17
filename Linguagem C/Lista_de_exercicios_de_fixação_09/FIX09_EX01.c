/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 16/06/2025
Enunciado:
    Fa�a um programa em Linguagem C que receba e apresente na tela uma data. Esta data � um registro (struct) com dia, m�s e ano (ambos inteiros).
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>

struct Data{
    int dia;
    int mes;
    int ano;
} dt; // Declara��o de variaveis

void dataFormatada(struct Data dt, char data[]);

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");

    char data[12];

    // Entrada
    printf("Digite o dia: ");
    scanf("%d", &dt.dia);

    printf("Digite o m�s: ");
    scanf("%d", &dt.mes);

    printf("Digite o ano: ");
    scanf("%d", &dt.ano);

    // Processamento
    dataFormatada(dt, data);

    // Saida
    printf("\nData formatada: %s", data);

    printf("\nFim do c�digo\n");
    return 0;
}

void dataFormatada (struct Data dt, char data[]){
    sprintf(data, "%02d/%02d/%04d", dt.dia, dt.mes, dt.ano);
}
