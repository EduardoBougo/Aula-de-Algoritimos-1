/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 07/04/2025
Enunciado:
    Elabore um programa em Linguagem C que calcule o pre�o de venda de um carro. O pre�o de venda � formado pelo pre�o da montadora, mais 15% de lucro, mais 11% de IPI, mais 17% de ICMS. As porcentagens s�o sobre o pre�o da montadora, que � lido do usu�rio. Apresente na tela o pre�o final, o lucro e o valor dos impostos. Tente apresentar todos os dados no formato de uma tabela, com valores alinhados.
    Casos de teste:
    a) Para o pre�o da montadora igual a R$ 39.294,00, o pre�o de venda � R$ 56.190,42, o lucro � R$ 5.894,10, o IPI � R$ 4.322,34 e o ICMS � R$ 6.679,98;
    b) Para o pre�o da montadora igual a R$ 130.000,00, o pre�o de venda � R$ 185.900,00, o lucro � R$ 19.500,00, o IPI � R$ 14.300,00 e o ICMS � R$ 22.100,00.
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    float preco_carro_montadora = 0,
    lucro = 0.15,
    ipi = 0.11,
    icms = 0.17,
    lucro_aplicado = 0,
    ipi_aplicado = 0,
    icms_aplicado = 0,
    preco_final = 0;

    // Entrada
    printf("Digite o pre�o do carro na montadora: R$");
    scanf("%f", &preco_carro_montadora);

    // Processamento
    lucro_aplicado = preco_carro_montadora * lucro;
    ipi_aplicado = preco_carro_montadora * ipi;
    icms_aplicado = preco_carro_montadora * icms;
    preco_final = preco_carro_montadora + lucro_aplicado + ipi_aplicado + icms_aplicado;

    // Saida
    //printf(" Para o pre�o da montadora igual a R$ %.2f, o pre�o de venda � R$ %.2f,  o lucro � R$ %.2f, o IPI � R$ %.2f e o ICMS � R$ %.2f", preco_carro_montadora, preco_final, lucro_aplicado, ipi_aplicado, icms_aplicado);
    printf("\n| IPI.........: R$ %10.2f |", ipi);
    printf("\n| ICMS........: R$ %10.2f |", icms);
    printf("\n| Lucro.......: R$ %10.2f |", lucro);
    printf("\n| Pre�o final.: R$ %10.2f |", preco_final);
    return 0;
}