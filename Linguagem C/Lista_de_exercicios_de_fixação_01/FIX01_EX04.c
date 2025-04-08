/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 07/04/2025
Enunciado:
    Elabore um programa em Linguagem C que leia o raio de uma circunfer�ncia, calcule e apresente sua �rea.
    Casos de teste:
    a) Para um raio de 5 cm, a �rea do c�rculo ser� 78,50;
    b) Para um raio de 12 cm, a �rea do c�rculo ser� 452,16.
*/

#include<stdio.h>
#include<locale.h>

int main() {
        //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    float raio_circuferencia = 0,
        pi = 3.14,
        area_do_circulo = 0;

    // Entrada
    printf("Digite o raio do circulo em centimetros: ");
    scanf("%f", &raio_circuferencia);

    // Processamento
    area_do_circulo = raio_circuferencia * raio_circuferencia * pi;

    // Saida
    printf("Para o raio de %.2f cm, a �rea do c�rculo ser� %.2f.", raio_circuferencia, area_do_circulo);
    return 0;
}