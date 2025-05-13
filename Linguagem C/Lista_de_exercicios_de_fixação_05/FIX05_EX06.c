/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 13/05/2025
Enunciado:
    Fa�a um programa em Linguagem C que pe�a 5 n�meros reais. Depois, o programa deve apresentar a m�dia. Por �ltimo, o programa deve procurar qual n�mero digitado � o mais pr�ximo da m�dia e apresent�-lo na tela.
    Casos de teste (ignore os _ ):
    a) Para a entrada: 3.50 _ 7.40 _ 12.80 _ 1.60 _ 4.00
    
        M�dia.......: 5.86
        Mais pr�ximo: 7.40 (apresenta a menor diferen�a at� o valor da m�dia)
    
    b) Para a entrada: 17.15 _ 15.3 _ 5.88 _ 7.77 _ 9.99
    
        M�dia.......: 11.22
        Mais pr�ximo: 9.99 (apresenta a menor diferen�a at� o valor da m�dia) 
*/

#include<stdio.h>
#include<locale.h>
#define TAM 5

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    int num[TAM],
        i = 0,
        soma = 0;

    float media = 0;


    // Entrada
    for (i = 0; i < TAM; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
    }

    // Processamento
    //corrigir
    media = soma / TAM;
    for(j = 0; j < TAM-1; j++){
        for(i = (j + 1); i < TAM; i++){
            if(num[i] < num[j]){
                aux = num[j];
                num[j] = num[i];
                num[i] = aux;
            }
        }
    }

    // Saida


    printf("\nFim do c�digo\n");
    return 0;
}