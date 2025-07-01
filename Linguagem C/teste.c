#include<stdio.h>
#include<locale.h>

struct ponto
{
    float x;
    float y;
};

struct ponto p1 = {1, 1};
struct ponto p2 = {2, 2};

int main() {
    //Acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");


    p1 = p2;

    printf("%.2f - %.2f\n", p1.x, p1.y);
    printf("%.2f - %.2f\n", p2.x, p2.y);

    printf("\nFim do código\n");
    return 0;
}


