/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 17/06/2025 até 23/06/2025
Enunciado:
    Construa uma função que recebe 2 (duas) datas como parâmetro (struct) e retorne um inteiro representando a diferença (em dias) entre as duas datas. Faça um programa em Linguagem C que demostre o uso desta função.
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>

#define N_DATAS 2

struct Data{
    int dia;
    int mes;
    int ano;
} dt[N_DATAS]; // Declaração do vetor com os dados

void linha(void); // Mostrar uma linha, para separar conteudos
void mostrarData(struct Data dt); // Mostra a Data no formato dd/mm/aaaa
void mostrarDataPorExtenso(struct Data dt); // Mostra a Data no formato 17 de Junho de 2025
void receberData(struct Data *dt); // Recebe os dados da Data
int validarData(struct Data dt); // Validar se a data é valida -- Dia(1 a 28, 29, 30 ou 31) -- Mês(1 a 12) -- Ano(1900 a 2025)
int anoBissexto(int ano); // Verifica se o ano é Bissexto -- 1 Verdadeiro -- 0 Falso
int numDiasEmData(struct Data dt);
int diferencaEmDias(int dias_1, int dias_2);

    int diasEmCadaMesPadrao[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");

    int i = 0;

    // Recebendo os valores de Data
    for(i = 0; i < N_DATAS; i++){
        receberData(&dt[i]);
    }

    // Processamento e Saida
    printf("\n%d ", numDiasEmData(dt[0]));
    printf("\n%d ", numDiasEmData(dt[1]));

    printf("\nA diferença entre ");
    mostrarData(dt[0]);
    printf(" e ");
    mostrarData(dt[1]);
    printf(" é igual a %d dias\n", diferencaEmDias(numDiasEmData(dt[0]), numDiasEmData(dt[1])));

    printf("\nFim do código\n");
    return 0;
}

void linha (void){
    printf("\n===================================\n");
}

void mostrarData (struct Data dt){
    printf("|%02d/%02d/%04d|", dt.dia, dt.mes, dt.ano);
}

void mostrarDataPorExtenso (struct Data dt){
    char meses[12][10] = {
        "Janeiro", 
        "Fevereiro", 
        "Março", 
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


void receberData (struct Data *dt){
    int validar = 0;
    do
    {
        linha();
        printf("Digite o dia: ");
        scanf("%d", &dt->dia);

        printf("Digite o mês: ");
        scanf("%d", &dt->mes);

        printf("Digite o ano: ");
        scanf("%d", &dt->ano);
        linha();

        validar = (!validarData(*dt));
        if(validar){
            printf("\nData Invalida! Porfavor digite novmente.\n");
        }

    } while ( validar );
}

int validarData (struct Data dt){

    int diasNoMes = diasEmCadaMesPadrao[dt.mes - 1]; // Atribui o número de dias no mês digitado
    
    if((dt.mes == 2) && anoBissexto(dt.ano)){ // Se for Fevereiro e for ano Bissexto, atribui 29 ao número de dias no mes
        diasNoMes = 29;
    }

    if((dt.dia < 1) || (dt.dia > diasNoMes)){ // Testando se o dia é Valido
        return 0;
    }

    if((dt.mes < 1) || (dt.mes > 12)){ // Testando se o mês é Valido
        return 0;
    }

    if((dt.ano < 1900) || (dt.ano > 2025)){ // Testando se o ano é Valido
        return 0;
    }

    return 1; // Retornar verdadeiro(1) pois a data é Valida

}

int anoBissexto (int ano){ // Testando anos bissextos
    /* Testa se é divisivel por 4, e ao mesmo tempo, se é divisivel por 400 ou Não é divisivel por 100 */
    /* Retorna -- (1) Verdadeiro -- (0) Falso */
    return (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0));
}

int numDiasEmData(struct Data dt){
    int totalDias = 0;

    /* Soma os dias dos anos anteriores */
    for(int ano = 1900; ano < dt.ano; ano++){
        totalDias += (anoBissexto(ano) ? 366 : 365); // Se o ano for Bissexto soma 366, se não soma 365
    }

    /* Soma os dias dos mêses anteriores */
    for(int mes = 1; mes < dt.mes; mes++){
        if((mes == 2) && (anoBissexto(dt.ano))){
            totalDias += 29;
        }
        else{
            totalDias += diasEmCadaMesPadrao[mes - 1];
        }
    }

    /* Soma os dias do mês atual */
    totalDias += dt.dia;

    return totalDias;
}

int diferencaEmDias(int dias_1, int dias_2){
    int diferenca = 0;

    diferenca = dias_1 - dias_2;

    if (diferenca < 0){
        diferenca *= (-1);
    }

    return diferenca;
}