/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 15/05/2025
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
    float num[TAM],
        num_prox = 0,
        diferenca = 0,
        menor_diferenca,
        soma = 0,
        media = 0;

    int i = 0;

    // Entrada
    for (i = 0; i < TAM; i++) {
        printf("Digite um numero: ");
        scanf("%f", &num[i]);
        soma += num[i];
    }

    // Processamento
    media = soma / TAM;
    menor_diferenca = soma;

    for (i = 0; i < TAM; i++) {
        if(media < num[i]){
            diferenca = num[i] - media;
        }
        else{
            diferenca = media - num[i];
        }
        
        if(diferenca < menor_diferenca){
            num_prox = num[i];
            menor_diferenca = diferenca;
        }
    }

    // Saida
    printf("\nM�dia.......: %.2f", media);
    printf("\nMais pr�ximo: %.2f", num_prox);

    printf("\nFim do c�digo\n");
    return 0;
}