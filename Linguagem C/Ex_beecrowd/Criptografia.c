/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 02/05/2025
Enunciado:
    Solicitaram para que voc� construisse um programa simples de criptografia. Este programa deve possibilitar enviar mensagens codificadas sem que algu�m consiga l�-las. O processo � muito simples. S�o feitas tr�s passadas em todo o texto.

    Na primeira passada, somente caracteres que sejam letras min�sculas e mai�sculas devem ser deslocadas 3 posi��es para a direita, segundo a tabela ASCII: letra 'a' deve virar letra 'd', letra 'y' deve virar caractere '|' e assim sucessivamente. Na segunda passada, a linha dever� ser invertida. Na terceira e �ltima passada, todo e qualquer caractere a partir da metade em diante (truncada) devem ser deslocados uma posi��o para a esquerda na tabela ASCII. Neste caso, 'b' vira 'a' e 'a' vira '`'.

    Por exemplo, se a entrada for ?Texto #3?, o primeiro processamento sobre esta entrada dever� produzir ?Wh{wr #3?. O resultado do segundo processamento inverte os caracteres e produz ?3# rw{hW?. Por �ltimo, com o deslocamento dos caracteres da metade em diante, o resultado final deve ser ?3# rvzgV?.
    Entrada

    A entrada cont�m v�rios casos de teste. A primeira linha de cada caso de teste cont�m um inteiro N (1 ? N ? 1*104), indicando a quantidade de linhas que o problema deve tratar. As N linhas cont�m cada uma delas M (1 ? M ? 1*103) caracteres.
    Sa�da

    Para cada entrada, deve-se apresentar a mensagem criptografada.
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#define TAM 1000

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    char input[TAM];

    int i = 0,
        j = 0,
        cont = 0,
        lin = 0,
        k = 0,
        aux = 0,
        dec[TAM];

    // Entrada
    scanf("%d", &lin);

    for(cont = 0; cont < lin; cont++){
        fgets(input, TAM, stdin);
        input[strlen(input) - 1] = '\0';

        //Transformando o char em decimal
        k = strlen(input);

        for(i = 0; i < k; i++){
            dec[i] = (input[i] - 0);
        }

        //Criptografia
        // 1�Passo
        for(i = 0; i < k; i++){
            if(((65 <= dec[i]) && (dec[i] <= 90)) || ((97 <= dec[i]) && (dec[i] <= 122))){
                dec[i] += 3;
            }
        }

        // 2�Passo
        for(i = 0, j = (k - 1); i <j; i++, j--){
            aux = dec[j];
            dec[j] = dec[i];
            dec[i] = aux;
        }

        // 3�Passo
        for(i = (k / 2); i < k; i++){
            dec[i] -= 1;
        }

        // Transformando o decimal em char
        for(i = 0; i < k; i++){
            input[i] = dec[i];
        }

        // Saida
        printf("%s\n", input);
    }

    printf("\nFim do c�digo\n");
    return 0;
}