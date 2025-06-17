/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 17/06/2025
Enunciado:
    Construa uma fun��o que receba uma data por par�metro (struct), valide esta data e retorne um inteiro representando se est� ou n�o correta. As regras de valida��o de uma data seguem o seguinte crit�rio: 

    Regra de valida��o: dias entre 1 e 30 (inclusive); m�s entre 1 e 12 (inclusive); anos entre 1900 e 2025 (inclusive);
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>

struct Data{
    int dia;
    int mes;
    int ano;
} dt; // Declara��o de variaveis

void linha(void); // Mostrar uma linha, para separar conteudos
void mostrarData(struct Data dt); // Mostra a Data no formato dd/mm/aaaa
void mostrarDataPorExtenso(struct Data dt); // Mostra a Data no formato 17 de Junho de 2025
void receberData(void); // Recebe os dados da Data
int validarData(struct Data dt); // Validar se a data � valida -- Dia(1 a 30) -- M�s(1 a 12) -- Ano(1900 a 2025)

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Recebendo os valores de Data
    receberData();

    // Processamento e Saida
    mostrarData(dt);
    mostrarDataPorExtenso(dt);

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

void receberData (void){
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

int validarData (struct Data dt){
    if((dt.dia < 1) || (dt.dia > 30)){ // Testando se a Data � Invalida
        return 1;
    }
    if((dt.mes < 1) || (dt.mes > 12)){ // Testando se a Data � Invalida
        return 1;
    }
    if((dt.ano < 1900) || (dt.ano > 2025)){ // Testando se a Data � Invalida
        return 1;
    }
    return 0; // Retornar verdadeiro(1) pois a data � Valida
}

void linha (void){
    printf("\n===================================\n");
}