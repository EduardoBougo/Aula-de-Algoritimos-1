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
        area_triangulo = 0,
        raio_circuferencia = 0,
        area_circuferencia = 0,
        aresta_cubo = 0,
        area_cubo;

    // Entrada
    printf("\n====================================\n");
    printf("Menu: ");
    printf("\n\n 1) Calcular a �rea de um tri�ngulo.");
    printf("\n 2) Calcular a �rea de um c�rculo.");
    printf("\n 3) Calcular a �rea de um cubo.\n");
    printf("\n====================================\n");
    printf("\nSelecione a opcao: ");
    scanf("%d", &menu);
    printf("\n------------------------------------\n");
    // Processamento
    if (menu == 1) {
        // Triangulo
        // Entrada
        printf("\nVamos calcular a area de um triangulo!\n");
        printf("\nDigite o tamanho da base do triangulo: ");
        scanf("%d", &base_triangulo);
        printf("\nDigite o tamanho da altura do triangulo: ");
        scanf("%d", &altura_triangulo);

        // Processamento
        area_triangulo = (base_triangulo * altura_triangulo) / 2;

        // Saida
        printf("\nO resultado da area do triangulo e de: %d", area_triangulo);
    }
    else {
        if (menu == 2) {
            // Circulo
            // Entrada
            printf("\nVamos calcular a area de um circulo!\n");
            printf("\nDigite o tamanho do raio do circulo: ");
            scanf("%d", &raio_circuferencia);

            // Processamento
            area_circuferencia = 3,14 * (raio_circuferencia * raio_circuferencia);

            // Saida
            printf("\nO resultado da area da circuferencia e de: %d", area_circuferencia);

        }
        else {
            if (menu == 3) {
                // Cubo
                // Entrada
                printf("\nVamos calcular a area de um cubo!\n");
                printf("\nDigite o tamanho da aresta do cubo: ");
                scanf("%d", &aresta_cubo);

                // Processamento
                area_cubo = 6 * (aresta_cubo * aresta_cubo);

                // Saida
                printf("\nO resultado da area docubo e de: %d", area_cubo);

            }
            else {
                printf("\n------!ERRO!------");
                printf("\nOpcao inexistente.");
                printf("\n------!ERRO!------");
            }
        }
    }

    // Saida
    printf("\n\n------------------------------------\n");
    printf("\nFim do programa!\n");

    return 0;
}