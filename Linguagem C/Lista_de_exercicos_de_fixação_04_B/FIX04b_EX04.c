/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 02/05/2025
Enunciado:
    Fa�a um programa em Linguagem C que receba 5 n�meros do usu�rio. A cada n�mero lido imprima na tela se ele � ou n�o m�ltiplo de 3.
    Usando Do-While
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    int cont = 1,
        num = 0;    


    do {
        // Entrada
        printf("\n\nDigite um n�mero: ");
        scanf("%d", &num);
        
        // Processamento e Saida
        printf("============================================");
        if ((num % 3) == 0) {
            printf("\n...O n�mero >> %d << � multiplo de 3...\n", num);
        }
        else {
            printf("\n...O n�mero >> %d << n�o � multiplo de 3...\n", num);
        }
        printf("============================================");
        cont++;
    } while (cont <= 5);

    // Saida
    printf("\nFim do c�digo\n");

    return 0;
}
