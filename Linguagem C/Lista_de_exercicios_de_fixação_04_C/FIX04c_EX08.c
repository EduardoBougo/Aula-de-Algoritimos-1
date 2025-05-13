/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 29/04/2025
Enunciado:
    Construa um programa em Linguagem C que, dado um conjunto de valores inteiros e positivos (recebidos do usuário), determine qual o menor valor do conjunto. O final do conjunto de valores é conhecido através do valor zero, que não deve ser considerado.
    Usando for
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    float num = 0,
        menor_num = 0;

    //primeiro numero == menor numero
    printf("\nDigite um valor [Digite 0 caso queira parar]: ");
    scanf("%f", &num);
    menor_num = num;

    // Processamento
    for (; num != 0;)
    {
        printf("\nDigite um valor [Digite 0 caso queira parar]: ");
        scanf("%f", &num);
        if ((num != 0) && (num < menor_num)) {
            menor_num = num;
        }
    }
    
    //Saida
    if (menor_num == 0) {
        printf("\n\n================================================\n");
        printf("\n...........Nenhum número foi digitado...........\n");
        printf("\n================================================\n");
    }
    else {
        printf("\n\n================================================\n");
        printf("\nO menor número digitado foi >>> %f <<<\n", menor_num);
        printf("\n================================================\n");
    }
    return 0;
}