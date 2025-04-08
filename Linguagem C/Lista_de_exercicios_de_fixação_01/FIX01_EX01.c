/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 07/04/2025
*/
/*
Enunciado:
    Faça um programa em Linguagem C que peça a idade do usuário e, em seguida, digite a mensagem: ?Legal! Você tem *idade* anos!?.
    Casos de teste:
    a) Para a idade 18, a mensagem seria: Legal! Você tem 18 anos!
    b) Para a idade 43, a mensagem seria: Legal! Você tem 43 anos!
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    int idade;

    // Entrada
    printf("Digite sua idade em anos:");
    scanf("%d", &idade);
    
    // Saida
    printf("Legal! Você tem %d anos!", idade);
    return 0;
}






