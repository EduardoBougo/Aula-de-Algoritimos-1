/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 17/06/2025
Enunciado:
    Complementando o EX02, cria uma nova fun��o que deve apresentar a data recebida por par�metro, por extenso.
    Exemplo de sa�da: 26 de Agosto de 2024
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
void mostrarDataPorExtenso(struct Data dt);

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
    mostrarDataPorExtenso(dt);

    printf("\nFim do c�digo\n");
    return 0;
}

void mostrarDataPorExtenso (struct Data dt){
    char meses[12][10] = {"Janeiro", "Fevereiro", "Mar�o", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    printf("\nExemplo de saida: |%02d de %s de %04d|\n", dt.dia, meses[dt.mes - 1], dt.ano);
}

void mostrarData (struct Data dt){
    printf("\nExemplo de saida: |%02d/%02d/%04d|\n", dt.dia, dt.mes, dt.ano);
}