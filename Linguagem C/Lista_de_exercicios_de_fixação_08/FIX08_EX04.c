/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 03/06/2025
Enunciado:
    Fa�a um programa em Linguagem C para obter do usu�rio uma temperatura em graus Fahrenheit e retornar o valor correspondente em graus Celsius. O c�lculo deve ser realizado por uma fun��o que vai receber por par�metro o valor em Fahrenheit e vai retornar o valor em Celsius.
    F�rmula para convers�o: C = ((F - 32) / 9) * 5

    Casos de teste: 

        32 graus Fahrenheit � igual a 0 grau Celsius;
        212 graus Fahrenheit � igual a 100 graus Celsius;
        86 graus Fahrenheit � igual a 30 graus Celsius. 

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
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis

    // Entrada
    option();

    // Processamento


    // Saida


    printf("\nFim do c�digo\n");
    return 0;
}

void menu(void){
    //Printa o menu
    printf("*************\n");
    printf("Calculadora\n");
    printf("1. Adi��o\n");
    printf("2. Subtra��o\n");
    printf("3. Multiplica��o\n");
    printf("4. Divis�o\n");
    printf("5. Sair\n");
    printf("*************\n");

}

void option(void){
    int option;
    
    while(option != 5){
        menu();

        printf("Op��o: ");
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
                printf("Op��o invalida\n");
        }
    }

}

void addition(void){
    float sum = 0,
          num = 0;

    int rep = repeat(),
        i = 0;

    for(i = 0; i < rep; i++){
        printf("Digite o %d� valor: ", (i + 1));
        scanf("%f", &num);
        sum += num;
    }

    printf("A soma � igual a >>> %.2f <<<\n", sum);
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

    printf("A subtra��o � igual a >>> %.2f <<<\n", sub);
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

    printf("A multiplica��o � igual a >>> %.2f <<<\n", mult);
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

    printf("A divis�o � igual a >>> %.2f <<<\n", div);
}

int repeat(){
    int rep = 0;

    printf("Quantas vezes deseja repetir a opera��o?\n");
    printf("Repeti��es: ");
    scanf("%d", &rep);

    return rep;
}