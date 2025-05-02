/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 15/04/2025
Enunciado:
    Fa�a uma programa em linguagem C que leia 3 valores ladoA, ladoB e ladoC e verifique se esses valores representam os lados de um tri�ngulo. Para que seja um tri�ngulo, todos os lados devem ser maiores que zero e nenhum lado deve ser igual ou maior que a soma dos outros dois lados. Ao terminar precisa informar tamb�m qual o tipo do tri�ngulo:
    - Escaleno: todos os lados diferentes.
    - Is�sceles: 2 lados iguais.
    - Equil�tero: todos os lados iguais.
    Casos de teste:
    a) Para valores: 5, 5 e 5, Valores representam um tri�ngulo equil�tero!
    b) Para valores: 3, 3 e 4, Valores representam um tri�ngulo is�celes!
    c) Para valores: 5, 9 e 5, Valores representam um tri�ngulo is�celes!
    d) Para valores: 1, 2 e 3, Valores N�O representam os lados de um tri�ngulo!
    e) Para valores: 8, 9 e 12, Valores representam um tri�ngulo escaleno!
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    int lado_A = 0,
        lado_B = 0,
        lado_C = 0;

    // Entrada
    printf("\nDigite o tamanho do lado A do tri�ngulo: ");
    scanf("%d", &lado_A);
    printf("\nDigite o tamanho do lado B do tri�ngulo: ");
    scanf("%d", &lado_B);
    printf("\nDigite o tamanho do lado C do tri�ngulo: ");
    scanf("%d", &lado_C);

    // Processamento
    printf("\n\nPara os valores %d, %d e %d, Valores ", lado_A, lado_B, lado_C);
    //Lados maiores que 0
    if (lado_A > 0 && lado_B > 0 && lado_C > 0) {
        //Condi��o de existencia
        if ((lado_A < lado_B + lado_C) && (lado_B < lado_A + lado_C) && (lado_C < lado_A + lado_B)){
            //Escaleno
            if ((lado_A != lado_B) && (lado_A != lado_C) && (lado_B != lado_C)) {
                printf("representam um tri�ngulo Escaleno!\n");
            }
            else {
                //Equilatero
                if ((lado_A == lado_B) && (lado_A == lado_C) && (lado_B == lado_C)) {
                    printf("representam um tri�ngulo Equilatero!\n");
                }
                //Is�sceles
                else {
                    printf("representam um tri�ngulo Is�celes!\n");
                }
            }
        }
        else {
            printf("N�O represent�o os lados de um tri�ngulo!\n");
        }
    }
    else {
        printf("\nValores digitados n�o permitidos.\n")
    }

    // Saida
    printf("\nFim do codigo!\n");

    return 0;
}