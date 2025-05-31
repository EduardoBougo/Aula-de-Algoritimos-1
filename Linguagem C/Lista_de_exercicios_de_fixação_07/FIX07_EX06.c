/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 31/05/2025
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
#define TAM 100

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    char input_username[TAM],
         input_password[TAM],
         user[] = {"joao"},
         password[] = {"123"},
         linha[] = {"\n======================================\n"};



    // Entrada
    puts(linha);

    //Usuario
    printf("Usuário: ");
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

    printf("\nFim do código\n");
    return 0;
}