/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 07/04/2025
Enunciado:
    Similar ao exercício anterior mas receba também os pesos para cada uma das notas.
    Casos de teste:
    a) Para as notas 5,0 (peso 3,0), 4,5 (peso 3,0) e 9,5 (peso 4,0), a média ponderada é 6,65;
    b) Para as notas 9,0 (peso 2,0), 8,3 (peso 3,0) e 6,5 (peso 5,0), a média ponderada é 7,54.
*/

#include<stdio.h>

int main() {
    // Declaração de variaveis
    float nota_1 = 0,
        peso_nota_1 = 0,
        nota_2 = 0,
        peso_nota_2 = 0,
        nota_3 = 0,
        peso_nota_3 = 0,
        soma_dos_pesos = 0,
        media_ponderada = 0;

    // Entrada
    
    //Primeira//
    printf("Primeira nota: ");
    scanf("%f", &nota_1);
    printf("Peso na primeira nota: ");
    scanf("%f", &peso_nota_1);

    //Segunda//
    printf("Segunda nota: ");
    scanf("%f", &nota_2);
    printf("Peso na Segunda nota: ");
    scanf("%f", &peso_nota_2);

    //Terceira//
    printf("Terceira nota: ");
    scanf("%f", &nota_3);
    printf("Peso na Terceira nota: ");
    scanf("%f", &peso_nota_3);   

    // Processamento
    soma_dos_pesos = (peso_nota_1 + peso_nota_2 + peso_nota_3);
    media_ponderada = ( (nota_1 * peso_nota_1) + (nota_2 * peso_nota_2) + (nota_3 * peso_nota_3) ) / soma_dos_pesos;

    // Saida
    printf("Para as notas %.1f (Peso %.1f), %.1f (Peso %.1f) e %.1f (Peso %.1f), a media ponderada é %.2f", nota_1, peso_nota_1, nota_2, peso_nota_2, nota_3, peso_nota_3, media_ponderada);

    return 0;
}