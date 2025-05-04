/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 02/05/2025
Enunciado:
    Fa�a um programa em Linguagem C que receba idade e o peso de sete pessoas. Calcule e mostre: i) a quantidade de pessoas com mais de 90 quilos; ii) a m�dia das idades das pessoas.
    Usando for
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    int cont = 1,
        quilos_90_mais = 0,
        idade = 0;

    float peso = 0,
        soma_idade = 0;

    while (cont <= 7)
    {
        // Entrada
        printf("\n=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n");
        printf("\n--Cadastro %d--\n", cont);
        printf("Idade(anos): ");
        scanf("%d", &idade);
        printf("Peso(Kg): ");
        scanf("%f", &peso);

        // Processamento
        soma_idade += idade;

        if (peso >= 90)
        {
            quilos_90_mais++;
        }
        
        cont++;
    }

    // Saida
    printf("\n\nDentre as pessoas cadatradas, %d pessoas tem mais de 90 quilos, e a m�dia das idades das pessoas � %f anos.\n", quilos_90_mais, (soma_idade / (cont - 1)));

    printf("\nFim do c�digo\n");

    return 0;
}