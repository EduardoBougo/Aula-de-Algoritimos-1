#include <stdio.h>
#define TAM 12
int main() {
    char op = ' ';
 
    int i = 0,
        j = 0,
        lin = 0;
    
    float M[TAM][TAM],
        soma = 0;
        
    scanf("%d", &lin);
    scanf("%c", &op);
    
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            scanf("%f", &M[i][j]);
        }
    }
    for(i = 0; i < TAM; i++){
            soma += M[lin][i];
    }
    
    if(op == 'S'){
        printf("%.1f\n", soma);
    }
    else{
        printf("%.1f\n", (soma / 12));
    }

    return 0;
}