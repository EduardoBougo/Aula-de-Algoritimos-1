/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 15/04/2025
Enunciado:
    Fa�a um programa em linguagem C que apresente um menu e pergunte ao usu�rio se ele deseja calcular:
    1) a �rea de um tri�ngulo (base vezes altura dividido por 2)
    2) a �rea de um c�rculo (pi multiplicado pelo raio ao quadrado)
    3) a �rea de um cubo (6 vezes a �rea do quadrado)
    Depois, solicitar os dados necess�rios para calcular a �rea escolhida, e mostrar o resultado na tela.
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    int menu = 0,
        base_triangulo = 0,
        altura_triangulo = 0,
        raio_circuferencia = 0,
        aresta_cubo = 0;

    // Entrada
    printf("\n====================================\n");
    printf("Menu: ");
    printf("\n\n 1) Calcular a �rea de um tri�ngulo.");
    printf("\n 2) Calcular a �rea de um c�rculo.");
    printf("\n 3) Calcular a �rea de um cubo.\n");
    printf("\n====================================\n");
    printf("Selecione a opcao: ");
    scanf("%d", &menu);
    // Processamento
    if (menu == 1) {
        // Triangulo

    }
    else {
        if (menu == 2) {
            // Circulo

        }
        else {
            if (menu == 3) {
                // Cubo

            }
            else {
                printf("\n!ERRO!\n");
                printf("Opcao inexistente.\n")
            }
        }
    }

    // Saida
    printf("Fim do programa!");

    return 0;
}