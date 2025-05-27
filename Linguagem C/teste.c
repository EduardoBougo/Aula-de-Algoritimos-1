#include <stdio.h>
#define TAM 4

int main() {
    char nome[232423];

    printf("Digite seu nome bb: ");
    fgets(nome, 232423, stdin);

    printf("Nossa! %s Que nome bonito gatinho\n", nome);
    return 0;
}