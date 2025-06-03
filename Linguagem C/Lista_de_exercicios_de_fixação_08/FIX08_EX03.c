/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 03/06/2025
Enunciado:
    Fa�a um programa em Linguagem C para simular uma calculadora simples com as seguintes opera��es poss�veis: adi��o, subtra��o, multiplica��o e divis�o. O programa inicia com a apresenta��o ao usu�rio do menu de op��es:
    
    ********** 
    Calculadora 
    1. Adi��o 
    2. Subtra��o 
    3. Multiplica��o 
    4. Divis�o 
    5. Sair
    ********** 
    Entre com a op��o:
    
    * Utilize uma fun��o para apresentar o menu inicial e uma fun��o de cada tipo para resolver as opera��es. Cada opera��es (adi��o; subtra��o; multiplica��o; divis�o) deve usar um tipo de fun��o (sem retorno e sem par�metro; sem retorno e com par�metro; com retorno e sem par�metro; com retorno e com par�metro;) - n�o vale repetir o uso.
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

float temp(float num);

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    float input = 0,
          output = 0;

    // Entrada
    printf("Digite o valor em Graus Fahrenheit: ");
    scanf("%f", &input);

    // Processamento
    output = temp(input);

    // Saida
    system("cls");
    printf("%.2f graus Fahrenheit � igual a %.2f grau Celsius ", input, output);

    printf("\nFim do c�digo\n");
    return 0;
}

float temp(float fahrenheit){
    float celcius = 0;

    celcius = ((fahrenheit - 32) / 9) * 5;

    return celcius;
}