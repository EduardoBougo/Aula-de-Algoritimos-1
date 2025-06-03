/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 03/06/2025
Enunciado:
    Faça um programa em Linguagem C para obter do usuário uma temperatura em graus Fahrenheit e retornar o valor correspondente em graus Celsius. O cálculo deve ser realizado por uma função que vai receber por parâmetro o valor em Fahrenheit e vai retornar o valor em Celsius.
    Fórmula para conversão: C = ((F - 32) / 9) * 5

    Casos de teste: 

        32 graus Fahrenheit é igual a 0 grau Celsius;
        212 graus Fahrenheit é igual a 100 graus Celsius;
        86 graus Fahrenheit é igual a 30 graus Celsius. 

*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

void menu(void);
void option(void);
int repeat(void);
void addition(void);
void subtraction(void);
void multiplication(void);
void division(void);


int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis

    // Entrada
    option();

    // Processamento


    // Saida


    printf("\nFim do código\n");
    return 0;
}

void menu(void){
    //Printa o menu
    printf("*************\n");
    printf("Calculadora\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("5. Sair\n");
    printf("*************\n");

}

void option(void){
    int option;
    
    while(option != 5){
        menu();

        printf("Opção: ");
        scanf("%d", &option);

        switch(option){
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                break;
            default:
                printf("Opção invalida\n");
        }
    }

}

void addition(void){
    float sum = 0,
          num = 0;

    int rep = repeat(),
        i = 0;

    for(i = 0; i < rep; i++){
        printf("Digite o %d° valor: ", (i + 1));
        scanf("%f", &num);
        sum += num;
    }

    printf("A soma é igual a >>> %.2f <<<\n", sum);
}

void subtraction(void){
    float sub = 0,
          num = 0;

    int rep = repeat(),
        i = 0;

    for(i = 0; i < rep; i++){
        printf("Digite um valor: ");
        scanf("%f", &num);
        sub -= num;
    }

    printf("A subtração é igual a >>> %.2f <<<\n", sub);
}

void multiplication(void){
    float mult = 0,
          num = 0;

    int rep = repeat(),
        i = 0;

    for(i = 0; i < rep; i++){
        printf("Digite um valor: ");
        if(num != 0){
            scanf("%f", &num);
            mult = mult * num;  
        }
    }

    printf("A multiplicação é igual a >>> %.2f <<<\n", mult);
}

void division(void){
    float div = 0,
          num = 0;

    int rep = repeat(),
        i = 0;

    for(i = 0; i < rep; i++){
        printf("Digite um valor: ");
        if(num != 0){
            scanf("%f", &num);
            div = div / num;            
        }
    }

    printf("A divisão é igual a >>> %.2f <<<\n", div);
}

int repeat(){
    int rep = 0;

    printf("Quantas vezes deseja repetir a operação?\n");
    printf("Repetições: ");
    scanf("%d", &rep);

    return rep;
}