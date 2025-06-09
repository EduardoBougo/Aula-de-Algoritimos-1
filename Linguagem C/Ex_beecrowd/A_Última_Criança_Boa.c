/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 09/06/2025
Enunciado:
    Papai Noel classifica todas as crianças do mundo em duas listas: uma das boazinhas e outra das malcriadas. Ele gostaria de saber qual das crianças do mundo é a última da lista de boazinhas, se usar a ordem alfabética. Para isso, ele pediu a todos seus elfos ajudantes que escrevessem os nomes das crianças boas em uma folha.

    Entretanto, cada elfo escreveu os nomes de um jeito: maiúscula no início e minúsculas depois, todas maiúsculas, todas minúsculas, e todo tipo de combinação entre maiúsculas e minúsculas.

    Papai Noel quer sua ajuda para, dada a lista de nome das crianças boas, dizer qual delas é a última.
    Entrada

    A entrada possui várias linhas. Em cada linha há o nome de uma criança boa. Nenhum elfo escreveu os nomes com acentos. O maior nome tem no máximo 80 caracteres. Não existem mais de 1000 crianças na lista. Todos os nomes são distintos. A lista de nomes termina com EOF.
    Saída

    A saída é dada em uma linha. O nome da criança que fica na última posição da lista deve ser mostrado. Mostre o nome exatamente como foi lido na entrada. Use a ordem alfabética dos nomes para ordenar, mas considere maiúsculas e minúsculas como iguais.
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

            if(k > 0){ //Caso esteja fora de ordem, executa uma troca de posição de linhas na lista
                strcpy(aux, lista[i]);
                strcpy(lista[i], lista[j]);
                strcpy(lista[j], aux);
            }
        }
    }
    return lista[QTD][TAM];
}


int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    // Declaração de variaveis
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


    printf("\nFim do código\n");
    return 0;
}