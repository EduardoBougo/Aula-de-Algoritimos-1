/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 09/06/2025
Enunciado:
    Papai Noel classifica todas as crian�as do mundo em duas listas: uma das boazinhas e outra das malcriadas. Ele gostaria de saber qual das crian�as do mundo � a �ltima da lista de boazinhas, se usar a ordem alfab�tica. Para isso, ele pediu a todos seus elfos ajudantes que escrevessem os nomes das crian�as boas em uma folha.

    Entretanto, cada elfo escreveu os nomes de um jeito: mai�scula no in�cio e min�sculas depois, todas mai�sculas, todas min�sculas, e todo tipo de combina��o entre mai�sculas e min�sculas.

    Papai Noel quer sua ajuda para, dada a lista de nome das crian�as boas, dizer qual delas � a �ltima.
    Entrada

    A entrada possui v�rias linhas. Em cada linha h� o nome de uma crian�a boa. Nenhum elfo escreveu os nomes com acentos. O maior nome tem no m�ximo 80 caracteres. N�o existem mais de 1000 crian�as na lista. Todos os nomes s�o distintos. A lista de nomes termina com EOF.
    Sa�da

    A sa�da � dada em uma linha. O nome da crian�a que fica na �ltima posi��o da lista deve ser mostrado. Mostre o nome exatamente como foi lido na entrada. Use a ordem alfab�tica dos nomes para ordenar, mas considere mai�sculas e min�sculas como iguais.
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#define TAM 82
#define QTD 2


char* ordenador(char lista[QTD][TAM], int tam){
    char aux[82];
    int i = 0,
        j = 0,
        k = 0;

    for(i = 0; i < tam; i++){
        for(j = (i + 1); j < tam; j++){
            k = stricmp(lista[i], lista[j]); //testando a ordem alfabetica

            if(k > 0){ //Caso esteja fora de ordem, executa uma troca de posi��o de linhas na lista
                strcpy(aux, lista[i]);
                strcpy(lista[i], lista[j]);
                strcpy(lista[j], aux);
            }
        }
    }
    return lista[QTD][TAM];
}


int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declara��o de variaveis
    char lista[QTD][TAM],
         input[TAM];

    int i = 0;

    for(i = 0; i < QTD; i++){
        //Entrada de dados
        fgets(input, TAM, stdin);
        input[strlen(input) - 1] = '\0';

        if(strcmp(input, "EOF") == 0){
            break;
        }
        else{
            strcpy(lista[i], input);
        }

        lista = ordenador(lista, i - 1);
 
    }


    printf("\nFim do c�digo\n");
    return 0;
}