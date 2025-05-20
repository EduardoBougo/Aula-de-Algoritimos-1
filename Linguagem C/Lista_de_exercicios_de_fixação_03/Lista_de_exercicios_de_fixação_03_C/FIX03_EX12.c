/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 22/04/2025
Enunciado:
    Fa�a um programa em Linguagem C para mostrar um menu com as op��es de um card�pio de restaurante ao usu�rio e obter o prato desejado. Ap�s a escolha do prato, perguntar ao usu�rio se deseja pagar a gorjeta ao gar�om (10% sobre o valor do prato) e mostrar o valor final de acordo com a resposta.
    Casos de teste:
    a) Para op��o com c�digo igual a 2 e com pagamento de gorjeta ao gar�om, o valor final � R$ 29,70;
    b) Para op��o com c�digo igual a 1 e sem pagamento de gorjeta ao gar�om, o valor final � R$ 65,00;
    c) Para op��o com c�digo igual a 5 e com pagamento de gorjeta ao gar�om, o valor final � R$ 8,25. 
*/

#include<stdio.h>
#include<locale.h>

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    int menu = 0;
    int gorgeta;
    float preco_prato = 0,
        valor_final = 0;

    // Entrada
    printf("\n================================\n");
    printf("1) Picanha........: R$ 65,00\n");
    printf("2) Lasanha........: R$ 27,00\n");
    printf("3) Strogonoff.....: R$ 22,00\n");
    printf("4) Bife acebolado.: R$ 20,00\n");
    printf("5) P�o com ovo....: R$  7,50\n");
    printf("================================\n");
    printf("\nSelecione uma op��o: ");
    scanf("%d", &menu);
    // "Limpeza de memoria" --  getchar() 
    getchar();

    printf("%d",menu);

    // Processamento
    switch (menu) {
        case 1:
            preco_prato = 65;
            break;

        case 2:
            preco_prato = 27;
            break;

        case 3:
            preco_prato = 22;
            break;

        case 4:
            preco_prato = 20;
            break;

        case 5:
            preco_prato = 7.50;
            break;

        default:
            printf("Valor Invalido!");
    }
    printf("\nDeseja adicionar a gorjeta do gar�om (10 sobre o valor do prato)?\n");
    printf("(S/N) ---> ");
    scanf("%d", &gorgeta);
    valor_final = preco_prato;

    printf("%d",menu);

    // Saida
    printf("\nPara a op��o com o c�digo igual a %d e ", menu);
    if (gorgeta == 0) {
        valor_final = preco_prato * 1.1;
        printf("com pagamento de gorjeta ao gar�om, ");
    }
    else {
        printf("sem pagamento de gorjeta ao gar�om, ");
    }
    printf("o valor final � R$ %.2f.", valor_final);
    printf("\nFim do codigo!\n");

    return 0;
}