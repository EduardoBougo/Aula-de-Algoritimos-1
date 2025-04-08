/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 07/04/2025
Enunciado:
    Faça um programa em Linguagem C para calcular a média ponderada de três notas de um aluno considerando os pesos 2, 3 e 5, respectivamente para a primeira, segunda e terceira nota.
    Casos de teste:
    a) Para as notas 5,0,   4,5   e   9,5, a média ponderada é 7,1;
    b) Para as notas 10,0,   4,0   e   7,5, a média ponderada é 6,95.
*/

#include<stdio.h>

int main() {
    // Declaração de variaveis
    float nota_1 = 0,
        nota_2 = 0,
        nota_3 = 0,
        peso_nota_1 = 2,
        peso_nota_2 = 3,
        peso_nota_3 = 5,
        media_ponderada = 0;

    // Entrada
    printf("Primeira nota: ");
    scanf("%f", &nota_1); 
    printf("Segunda nota: ");
    scanf("%f", &nota_2);
    printf("Terceira nota: ");
    scanf("%f", &nota_3);
    // Processamento
    media_ponderada = ( (nota_1 * peso_nota_1) + (nota_2 * peso_nota_2) + (nota_3 * peso_nota_3) ) / (peso_nota_1 + peso_nota_2 + peso_nota_3);

    // Saida
    printf("Para as notas %.1f, %.1f e %.1f, a media ponderada é %.1f", nota_1, nota_2, nota_3, media_ponderada);

    return 0;
}