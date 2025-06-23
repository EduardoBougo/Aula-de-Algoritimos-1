#include<stdio.h>
#include<locale.h>
#define N_DATAS 2

struct Data
{
    int dia;
    int mes;
    int ano;
};

struct Data receberData(void);
void mostrarData(struct Data dt);

struct Data dt[5], dataNiver;

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    
 



    dt[0] = receberData();
    dt[1] = receberData();

    mostrarData(dt[0]);
    mostrarData(dt[1]);

    printf("\nFim do código\n");
    return 0;
}

struct Data receberData (void){
    struct Data dt;
    printf("Digite o dia: ");
    scanf("%d", &dt.dia);

    printf("Digite o mês: ");
    scanf("%d", &dt.mes);

    printf("Digite o ano: ");
    scanf("%d", &dt.ano);

    return dt;
}

void mostrarData (struct Data dt){
    printf("|%02d/%02d/%04d|", dt.dia, dt.mes, dt.ano);
}
