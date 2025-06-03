/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 03/06/2025
Enunciado:
    Faça um programa em Linguagem C que escreva uma função para receber um número e retornar o valor absoluto deste número (a função sempre retorna um valor positivo).
*/

#include<stdio.h>
#include<locale.h>

float modulo(float num);

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    float input = 0,
          output = 0;

    // Entrada
    printf("Digite um valor: ");
    scanf("%f", &input);

    // Processamento
    output = modulo(input);

    // Saida
    printf("O valor absoluto de %f, é >>> %.2f <<<", input, output);

    printf("\nFim do código\n");
    return 0;
}

float modulo(float num){
    if(num < 0){
        return -num;
    }
    else{
        return num;
    }
}