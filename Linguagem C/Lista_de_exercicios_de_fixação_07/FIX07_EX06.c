/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 27/05/2025
Enunciado:
    Faça um programa em Linguagem C que receba o nome de usuário e sua senha de acesso a um sistema. Se o usuário for ?joao? e a senha for 123, permita o acesso. Caso contrário, dê uma mensagem de ACESSO NEGADO

    Exemplo1:
    Usuário: joao
    Senha..: 123
    Saída: Seja bem vindo, joao.
    
    Exemplo2:
    Usuário: jose
    Senha..: 123
    Saída: Acesso negado!
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#define TAM 1000

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
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
    printf("\nSaída: Seu nome tem %d letras.",(strlen(entrada) - cont));

    printf("\nFim do código\n");
    return 0;
}