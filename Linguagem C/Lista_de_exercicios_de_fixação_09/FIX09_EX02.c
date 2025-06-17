/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 17/06/2025
Enunciado:
    Idem ao EX01, todavia, a data deve ser apresentada na tela por meio de uma fun��o que receber� esta data por par�metro.
Exemplo de sa�da: 26/08/2024
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>

struct Data{
    int dia;
    int mes;
    int ano;
} dt; // Declara��o de variaveis

void mostrarData(struct Data dt);

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Entrada
    printf("Digite o dia: ");
    scanf("%d", &dt.dia);

    printf("Digite o m�s: ");
    scanf("%d", &dt.mes);

    printf("Digite o ano: ");
    scanf("%d", &dt.ano);

    // Processamento e Saida
    mostrarData(dt);

    printf("\nFim do c�digo\n");
    return 0;
}

void mostrarData (struct Data dt){
    printf("\nExemplo de saida: |%02d/%02d/%04d|\n", dt.dia, dt.mes, dt.ano);
}
