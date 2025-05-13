/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 13/05/2025
Enunciado:
    Fa�a um programa em Linguagem C que pe�a 5 n�meros inteiros ao usu�rio. Armazene esses n�meros em um vetor. Depois, o programa deve apresentar o maior valor armazenado no vetor.
    Casos de teste (ignore os _ ):
    a) Para a entrada: 10 _ 50 _ 20 _ 40 _ 30, apresentar como sa�da:
    
        Maior: 50
    
    b) Para a entrada: 8 _ 15 _ 9 _ 16 _ 5, apresentar como sa�da:
    
        Maior: 16
*/

#include<stdio.h>
#include<locale.h>
#define TAM 5

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    int num[TAM],
        maior_num = 0,
        i = 0;

    // Entrada
    for (i = 0; i < TAM; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
    }

    // Processamento 
    maior_num = num[0];

    for (i = 0; i < TAM; i++) {
        if (num[i] > maior_num) {
            maior_num = num[i];
        }
    }

    // Saida
    printf("\n==========================================\n");
    printf("O maior n�mero digitado foi %d", maior_num);
    printf("\n==========================================\n");
    printf("\nFim do c�digo\n");
    return 0;
}