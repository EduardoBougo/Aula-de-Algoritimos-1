/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 07/04/2025
Enunciado:
    Elabore um programa em Linguagem C que leia o raio de uma circunferência, calcule e apresente sua área.
    Casos de teste:
    a) Para um raio de 5 cm, a área do círculo será 78,50;
    b) Para um raio de 12 cm, a área do círculo será 452,16.
*/

#include<stdio.h>
#include<locale.h>

int main() {
        //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    float raio_circuferencia = 0,
        pi = 3.14,
        area_do_circulo = 0;

    // Entrada
    printf("Digite o raio do circulo em centimetros: ");
    scanf("%f", &raio_circuferencia);

    // Processamento
    area_do_circulo = raio_circuferencia * raio_circuferencia * pi;

    // Saida
    printf("Para o raio de %.2f cm, a área do círculo será %.2f.", raio_circuferencia, area_do_circulo);
    return 0;
}