/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 31/05/2025
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
#define TAM 100

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    char input_username[TAM],
         input_password[TAM],
         user[] = {"joao"},
         password[] = {"123"},
         linha[] = {"\n======================================\n"};



    // Entrada
    puts(linha);

    //Usuario
    printf("Usu�rio: ");
    fgets(input_username, TAM, stdin);
    input_username[strlen(input_username) - 1] = '\0';

    //Senha
    printf("Senha..: ");
    fgets(input_password, TAM, stdin);
    input_password[strlen(input_password) - 1] = '\0';

    puts(linha);

    // Processamento
    if(!strcmp(input_username, user) && !strcmp(input_password, password)){
        printf("ACESSO PERMITIDO\n");
        printf("Seja bem vindo %s\n", user);
    }
    else{
        printf("ACESSO NEGADO!\n");
    }

    printf("\nFim do c�digo\n");
    return 0;
}