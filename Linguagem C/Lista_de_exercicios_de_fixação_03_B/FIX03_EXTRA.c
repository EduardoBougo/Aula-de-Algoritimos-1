/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 15/04/2025
Enunciado:
    Faça uma programa em linguagem C que leia 3 valores ladoA, ladoB e ladoC e verifique se esses valores representam os lados de um triângulo. Para que seja um triângulo, todos os lados devem ser maiores que zero e nenhum lado deve ser igual ou maior que a soma dos outros dois lados. Ao terminar precisa informar também qual o tipo do triângulo:
    - Escaleno: todos os lados diferentes.
    - Isósceles: 2 lados iguais.
    - Equilátero: todos os lados iguais.
    Casos de teste:
    a) Para valores: 5, 5 e 5, Valores representam um triângulo equilátero!
    b) Para valores: 3, 3 e 4, Valores representam um triângulo isóceles!
    c) Para valores: 5, 9 e 5, Valores representam um triângulo isóceles!
    d) Para valores: 1, 2 e 3, Valores NÃO representam os lados de um triângulo!
    e) Para valores: 8, 9 e 12, Valores representam um triângulo escaleno!
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    int lado_A = 0,
        lado_B = 0,
        lado_C = 0;

    // Entrada
    printf("\nDigite o tamanho do lado A do triângulo: ");
    scanf("%d", &lado_A);
    printf("\nDigite o tamanho do lado B do triângulo: ");
    scanf("%d", &lado_B);
    printf("\nDigite o tamanho do lado C do triângulo: ");
    scanf("%d", &lado_C);

    // Processamento
    printf("\n\nPara os valores %d, %d e %d, Valores ", lado_A, lado_B, lado_C);
    //Lados maiores que 0
    if (lado_A > 0 && lado_B > 0 && lado_C > 0) {
        //Condição de existencia
        if ((lado_A < lado_B + lado_C) && (lado_B < lado_A + lado_C) && (lado_C < lado_A + lado_B)){
            //Escaleno
            if ((lado_A != lado_B) && (lado_A != lado_C) && (lado_B != lado_C)) {
                printf("representam um triângulo Escaleno!\n");
            }
            else {
                //Equilatero
                if ((lado_A == lado_B) && (lado_A == lado_C) && (lado_B == lado_C)) {
                    printf("representam um triângulo Equilatero!\n");
                }
                //Isósceles
                else {
                    printf("representam um triângulo Isóceles!\n");
                }
            }
        }
        else {
            printf("NÃO representão os lados de um triângulo!\n");
        }
    }
    else {
        printf("\nValores digitados não permitidos.\n")
    }

    // Saida
    printf("\nFim do codigo!\n");

    return 0;
}