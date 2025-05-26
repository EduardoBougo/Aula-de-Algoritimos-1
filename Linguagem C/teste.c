#include <stdio.h>
#define TAM 4

int main() {
    int i = 0,
        num[TAM] = {};

    for (i = 0; i < TAM; i++) {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < TAM; i++) {
        printf("%d\n", num[i]);
    }
    return 0;
}