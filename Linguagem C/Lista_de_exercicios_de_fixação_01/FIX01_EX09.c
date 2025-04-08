/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 08/04/2025
Enunciado:
    Elabore um programa em Linguagem C para obter do usuário a velocidade em quilómetros por hora (km/h) e informar a mesma velocidade em metros por segundo (m/s).
    Casos de teste:
    a) A velocidade de 72 Km/h corresponde á  velocidade de 20 m/s;
    b) A velocidade de 180 Km/h corresponde á  velocidade de 50 m/s.
*/

#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    // Declaração de variaveis
    float velocidade_Kmh = 0,
        velocidade_ms = 0;

    // Entrada
    printf("Digite sua velocidade em Km/h : ");
    scanf("%f", &velocidade_Kmh);

    // Processamento
    velocidade_ms = (velocidade_Kmh / 3.6);

    //Saida
    printf("A velocidade de %.0f Km/h corresponde á velocidade de %.2f m/s.", velocidade_Kmh, velocidade_ms);

    return 0;
}