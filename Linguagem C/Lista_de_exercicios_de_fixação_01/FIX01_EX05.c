/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 07/04/2025
Enunciado:
    Elabore um programa em Linguagem C que calcule o preço de venda de um carro. O preço de venda é formado pelo preço da montadora, mais 15% de lucro, mais 11% de IPI, mais 17% de ICMS. As porcentagens são sobre o preço da montadora, que é lido do usuário. Apresente na tela o preço final, o lucro e o valor dos impostos. Tente apresentar todos os dados no formato de uma tabela, com valores alinhados.
    Casos de teste:
    a) Para o preço da montadora igual a R$ 39.294,00, o preço de venda é R$ 56.190,42, o lucro é R$ 5.894,10, o IPI é R$ 4.322,34 e o ICMS é R$ 6.679,98;
    b) Para o preço da montadora igual a R$ 130.000,00, o preço de venda é R$ 185.900,00, o lucro é R$ 19.500,00, o IPI é R$ 14.300,00 e o ICMS é R$ 22.100,00.
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
    float preco_carro_montadora = 0,
    lucro = 0.15,
    ipi = 0.11,
    icms = 0.17,
    lucro_aplicado = 0,
    ipi_aplicado = 0,
    icms_aplicado = 0,
    preco_final = 0;

    // Entrada
    printf("Digite o preço do carro na montadora: R$");
    scanf("%f", &preco_carro_montadora);

    // Processamento
    lucro_aplicado = preco_carro_montadora * lucro;
    ipi_aplicado = preco_carro_montadora * ipi;
    icms_aplicado = preco_carro_montadora * icms;
    preco_final = preco_carro_montadora + lucro_aplicado + ipi_aplicado + icms_aplicado;

    // Saida
    //printf(" Para o preço da montadora igual a R$ %.2f, o preço de venda é R$ %.2f,  o lucro é R$ %.2f, o IPI é R$ %.2f e o ICMS é R$ %.2f", preco_carro_montadora, preco_final, lucro_aplicado, ipi_aplicado, icms_aplicado);
    printf("\n| IPI.........: R$ %10.2f |", ipi);
    printf("\n| ICMS........: R$ %10.2f |", icms);
    printf("\n| Lucro.......: R$ %10.2f |", lucro);
    printf("\n| Preço final.: R$ %10.2f |", preco_final);
    return 0;
}