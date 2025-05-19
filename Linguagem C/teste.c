#include <stdio.h>
#define TAM 20

int main() {
    int i = 0,
        num[TAM] = {12};

    for (i = 0; i < TAM; i++) {
        printf("%d\n", num[i]);
    }
    return 0;
}