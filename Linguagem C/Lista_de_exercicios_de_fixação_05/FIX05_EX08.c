/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 13/05/2025
Enunciado:
    Faça um programa em Linguagem C para obter dois conjuntos (vetores) A e B (ambos de tamanho 8). Criar um conjunto (vetor) C = A + B, sendo que cada elemento Ci = Ai + Bi, para i = 0, 1, ... , n. Apresentar no final os conjuntos A, B e C. 
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#define TAM 8

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    int vetor_a[TAM],
        vetor_b[TAM],
        vetor_c[TAM],
        i = 0;

    srand(time(NULL));
    // Entrada e Processamento
        // Definir o Vetor A e B. E somando A + b criando C
    for (i = 0; i < TAM; i++) {
        vetor_a[i] = rand() % 100;
        vetor_b[i] = rand() % 100;
        vetor_c[i] = vetor_a[i] + vetor_b[i];
    }

    // Saida
        //Mostrando o vetor A 
    printf("\n\nVetor A:  ");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vetor_a[i]);
    }

        //Mostrando o vetor B
    printf("\n\nVetor B:  ");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vetor_b[i]);
    }
    
        //Mostrando o vetor C 
    printf("\n\nVetor C:  ");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vetor_c[i]);
    }

    printf("\n\nFim do código\n");
    return 0;
}