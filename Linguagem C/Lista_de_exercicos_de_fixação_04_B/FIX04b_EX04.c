/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 02/05/2025
Enunciado:
    Faça um programa em Linguagem C que receba 5 números do usuário. A cada número lido imprima na tela se ele é ou não múltiplo de 3.
    Usando Do-While
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    int cont = 1,
        num = 0;    


    do {
        // Entrada
        printf("\n\nDigite um número: ");
        scanf("%d", &num);
        
        // Processamento e Saida
        printf("============================================");
        if ((num % 3) == 0) {
            printf("\n...O número >> %d << é multiplo de 3...\n", num);
        }
        else {
            printf("\n...O número >> %d << não é multiplo de 3...\n", num);
        }
        printf("============================================");
        cont++;
    } while (cont <= 5);

    // Saida
    printf("\nFim do código\n");

    return 0;
}
