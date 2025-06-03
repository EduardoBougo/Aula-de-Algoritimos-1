/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 03/06/2025
Enunciado:
    Faça um programa em Linguagem C para simular uma calculadora simples com as seguintes operações possíveis: adição, subtração, multiplicação e divisão. O programa inicia com a apresentação ao usuário do menu de opções:
    
    ********** 
    Calculadora 
    1. Adição 
    2. Subtração 
    3. Multiplicação 
    4. Divisão 
    5. Sair
    ********** 
    Entre com a opção:
    
    * Utilize uma função para apresentar o menu inicial e uma função de cada tipo para resolver as operações. Cada operações (adição; subtração; multiplicação; divisão) deve usar um tipo de função (sem retorno e sem parâmetro; sem retorno e com parâmetro; com retorno e sem parâmetro; com retorno e com parâmetro;) - não vale repetir o uso.
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

float temp(float num);

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    float input = 0,
          output = 0;

    // Entrada
    printf("Digite o valor em Graus Fahrenheit: ");
    scanf("%f", &input);

    // Processamento
    output = temp(input);

    // Saida
    system("cls");
    printf("%.2f graus Fahrenheit é igual a %.2f grau Celsius ", input, output);

    printf("\nFim do código\n");
    return 0;
}

float temp(float fahrenheit){
    float celcius = 0;

    celcius = ((fahrenheit - 32) / 9) * 5;

    return celcius;
}