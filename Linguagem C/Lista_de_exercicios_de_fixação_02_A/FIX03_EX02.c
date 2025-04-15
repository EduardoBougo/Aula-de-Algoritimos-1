/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 14/04/2025
Enunciado:
    Faça um programa em linguagem C que peça a idade do usuário. Se ele for menor de idade, dê uma mensagem que ele não poderá acessar o sistema. Independente da resposta, finalize o programa.
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    int idade_usuario = 0;

    // Entrada
    printf("Digite sua idade: ");
    scanf("%d", &idade_usuario);

    // Processamento e saida
    if (idade_usuario < 18) {
        printf("\nO usuario não pode acessar o sistema devido a sua idade.\n");
    }

    // Saida
    printf("\nFim do programa!\n");
    return 0;
}