/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 07/04/2025
*/
/*
Enunciado:
    Fa�a um programa em Linguagem C que pe�a a idade do usu�rio e, em seguida, digite a mensagem: ?Legal! Voc� tem *idade* anos!?.
    Casos de teste:
    a) Para a idade 18, a mensagem seria: Legal! Voc� tem 18 anos!
    b) Para a idade 43, a mensagem seria: Legal! Voc� tem 43 anos!
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    int idade;

    // Entrada
    printf("Digite sua idade em anos:");
    scanf("%d", &idade);
    
    // Saida
    printf("Legal! Voc� tem %d anos!", idade);
    return 0;
}






