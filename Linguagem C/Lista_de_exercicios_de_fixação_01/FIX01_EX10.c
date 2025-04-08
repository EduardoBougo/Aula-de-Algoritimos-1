/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 07/04/2025
Enunciado:
    Elabore um programa em Linguagem C para calcular a distância entre dois pontos, ??(x1, y1) e ??(x2, y2), por meio da fórmula:
    Casos de teste:
    a) Dados os pontos A(1, 1) e B(3, 1), ??AB é igual a 2;
    b) Dados os pontos A(-3, -11) e B(2, 1), ??AB é igual a 13. 
*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração de variaveis
    float x1 = 0,
    x2 = 0,
    y1 = 0,
    y2 = 0,
    distancia_AB = 0;

    // Entrada

    //X1//
    printf("Digite um valor para o ponto A x1: ");
    scanf("%f", &x1);

    //Y1//
    printf("Digite um valor para o ponto A y1: ");
    scanf("%f", &y1);

    //X2//
    printf("Digite um valor para o ponto B x2: ");
    scanf("%f", &x2);

    //Y2//
    printf("Digite um valor para o ponto B y2: ");
    scanf("%f", &y2);

    // Processamento
    distancia_AB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    //Saida
    printf("\nDados os pontos A(%.0f, %.0f) e B(%.0f, %.0f) distancia de AB é igual a %.2f", x1, y1, x2, y2, distancia_AB);

    return 0;
}