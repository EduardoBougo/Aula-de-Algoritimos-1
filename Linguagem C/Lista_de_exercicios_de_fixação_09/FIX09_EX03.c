/*
Nome..: Eduardo Camargo Bougo
Truma.: EC41F Algoritos 1
Data..: 17/06/2025
Enunciado:
    Complementando o EX02, cria uma nova fun��o que deve apresentar a data recebida por par�metro, por extenso.
    Exemplo de sa�da: 26 de Agosto de 2024
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>

struct Data{
    int dia;
    int mes;
    int ano;
} dt; // Declara��o de variaveis

void mostrarData(struct Data dt);
void mostrarMesPorExtenso(struct Data dt, char mesExtenso[]);

int main() {
    //Acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Entrada
    printf("Digite o dia: ");
    scanf("%d", &dt.dia);

    printf("Digite o m�s: ");
    scanf("%d", &dt.mes);

    printf("Digite o ano: ");
    scanf("%d", &dt.ano);

    // Processamento e Saida
    mostrarData(dt);

    printf("\nFim do c�digo\n");
    return 0;
}

void mostrarMesPorExtenso (struct Data dt, char mesExtenso[]){
    switch (dt.mes)
    {
    case 1:
        strcpy(mesExtenso, "Janeiro");
        break;
        
    case 2:
        strcpy(mesExtenso, "Fevereiro");
        break;
        
    case 3:
        strcpy(mesExtenso, "Mar�o");
        break;

    case 4:
        strcpy(mesExtenso, "Abril");
        break;
            
    case 5:
        strcpy(mesExtenso, "Maio");
        break;
        
    case 6:
        strcpy(mesExtenso, "Junho");
        break;
        
    case 7:
        strcpy(mesExtenso, "Julho");
        break;
        
    case 8:
        strcpy(mesExtenso, "Agosto");
        break;
        
    case 9:
        strcpy(mesExtenso, "Setembro");
        break;
        
    case 10:
        strcpy(mesExtenso, "Outubro");
        break;

    case 11:
        strcpy(mesExtenso, "Novembro");
        break;
        
    case 12:
        strcpy(mesExtenso, "Dezembro");
        break;

    default:
        break;
    }
}

void mostrarData (struct Data dt){
    char mesExtenso[10];

    mostrarMesPorExtenso(dt, mesExtenso);
    printf("\nExemplo de saida: |%02d de %s de %04d|\n", dt.dia, mesExtenso, dt.ano);
}