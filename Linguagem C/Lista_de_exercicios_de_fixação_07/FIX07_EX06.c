/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 27/05/2025
Enunciado:
    Fa�a um programa em Linguagem C que receba o nome de usu�rio e sua senha de acesso a um sistema. Se o usu�rio for ?joao? e a senha for 123, permita o acesso. Caso contr�rio, d� uma mensagem de ACESSO NEGADO

    Exemplo1:
    Usu�rio: joao
    Senha..: 123
    Sa�da: Seja bem vindo, joao.
    
    Exemplo2:
    Usu�rio: jose
    Senha..: 123
    Sa�da: Acesso negado!
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#define TAM 1000

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    int i = 0,
        cont = 0,
        k = 0;

    char entrada[TAM];

    // Entrada
    printf("Entrada: ");

    fgets(entrada, TAM, stdin);
    entrada[strlen(entrada) - 1] = '\0';     //Retira o '\n' do vetor char

    // Processamento
    k = strlen(entrada);
    for (i = 0; i < k; i++)
    {
        if(entrada[i] == ' '){
            cont++;
        }
    }

    //Saida
    printf("\nSaida:");
    printf("\nSa�da: Seu nome tem %d letras.",(strlen(entrada) - cont));

    printf("\nFim do c�digo\n");
    return 0;
}