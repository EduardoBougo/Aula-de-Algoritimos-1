/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 15/05/2025
Enunciado:
    Faça um programa em Linguagem C que peça 5 números reais. Depois, o programa deve apresentar a média. Por último, o programa deve procurar qual número digitado é o mais próximo da média e apresentá-lo na tela.
    Casos de teste (ignore os _ ):
    a) Para a entrada: 3.50 _ 7.40 _ 12.80 _ 1.60 _ 4.00
    
        Média.......: 5.86
        Mais próximo: 7.40 (apresenta a menor diferença até o valor da média)
    
    b) Para a entrada: 17.15 _ 15.3 _ 5.88 _ 7.77 _ 9.99
    
        Média.......: 11.22
        Mais próximo: 9.99 (apresenta a menor diferença até o valor da média) 
*/

#include<stdio.h>
#include<locale.h>
#define TAM 5

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
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
    printf("\nMédia.......: %.2f", media);
    printf("\nMais próximo: %.2f", num_prox);

    printf("\nFim do código\n");
    return 0;
}