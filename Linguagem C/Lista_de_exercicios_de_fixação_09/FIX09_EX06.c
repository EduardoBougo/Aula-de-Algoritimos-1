/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 17/06/2025
Enunciado:
    Construa uma fun��o que recebe 2 (duas) datas como par�metro (struct) e retorne um inteiro representando a diferen�a (em dias) entre as duas datas. Fa�a um programa em Linguagem C que demostre o uso desta fun��o.
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>

struct Data{
    int dia;
    int mes;
    int ano;
} dt_1, dt_2; // Declara��o de variaveis

void linha(void); // Mostrar uma linha, para separar conteudos
void mostrarData(struct Data dt); // Mostra a Data no formato dd/mm/aaaa
void mostrarDataPorExtenso(struct Data dt); // Mostra a Data no formato 17 de Junho de 2025
void receberData(struct Data dt); // Recebe os dados da Data
int validarData(struct Data dt); // Validar se a data � valida -- Dia(1 a 28, 29, 30 ou 31) -- M�s(1 a 12) -- Ano(1900 a 2025)
int anoBissexto(struct Data dt);
int numDiasEmData(struct Data dt);


    int diasEmCadaMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Recebendo os valores de Data
    receberData(dt_1); 
    receberData(dt_2);

    // Processamento e Saida
    printf("%d ", numDiasEmData(dt_1));

    printf("\nFim do c�digo\n");
    return 0;
}

void mostrarDataPorExtenso (struct Data dt){
    char meses[12][10] = {
        "Janeiro", 
        "Fevereiro", 
        "Mar�o", 
        "Abril", 
        "Maio", 
        "Junho", 
        "Julho", 
        "Agosto", 
        "Setembro", 
        "Outubro", 
        "Novembro", 
        "Dezembro"};

    printf("\nExemplo de saida: |%02d de %s de %04d|\n", dt.dia, meses[dt.mes - 1], dt.ano);
}

void mostrarData (struct Data dt){
    printf("\nExemplo de saida: |%02d/%02d/%04d|\n", dt.dia, dt.mes, dt.ano);
}

void receberData (struct Data dt){
    do
    {
        linha();
        printf("Digite o dia: ");
        scanf("%d", &dt.dia);

        printf("Digite o m�s: ");
        scanf("%d", &dt.mes);

        printf("Digite o ano: ");
        scanf("%d", &dt.ano);
        linha();
    } while (validarData(dt));
}

int anoBissexto (struct Data dt){ // Testando anos bissextos

    if((dt.ano % 4) != 0){ // N�o � divisivel por 4 -- portanto n�o � Bissexto
        return 0;
    }
    else{ // � divisivel por 4 
        if((dt.ano % 100) == 0){ // � divisivel por 100
            if((dt.ano % 400) != 0){ // � divisivel por 100 e n�o � por 400 -- Portanto n�o � Bissexto
                return 0;
            }
            else{ // � divisivel por 100 e por 400 -- Portanto � Bissexto
                return 1;
            }
            return 0;
        }
        else{ // N�o � divisivel por 100 -- Portanto � Bissexto
            return 1;
        }
    }
}

int validarData (struct Data dt){


    if (anoBissexto(dt) && (dt.mes == 2)){ // Se o ano for Bissexto e for Fevereiro
        diasEmCadaMes[1] = 29; // O n�mero de dias ser� de 29 dias
    }

    if((dt.ano < 1900) || (dt.ano > 2025)){ // Testando se a Data � Invalida
        return 1;
    }
    if((dt.mes < 1) || (dt.mes > 12)){ // Testando se a Data � Invalida
        return 1;
    }
    if((dt.dia < 1) || (dt.dia > diasEmCadaMes[dt.mes - 1])){ // Testando se a Data � Invalida
        return 1;
    }
    return 0; // Retornar verdadeiro(1) pois a data � Valida
}

void linha (void){
    printf("\n===================================\n");
}

int numDiasEmData(struct Data dt){
    int qtdDias = 0;
    int i = 0;

    qtdDias += ((dt.ano - 1900) * 365); // Somando os dias dos anos

    for(i = dt.mes; i > 0; i--){
        qtdDias += diasEmCadaMes[i]; // Somando os dias dos meses
    }
    
    qtdDias += dt.dia;

    return qtdDias;
}

