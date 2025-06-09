#include <stdio.h>
#include<string.h>
#define TAM 100
int main() {
 
    int leds[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6},
        i = 0,
        j = 0,
        k = 0,
        soma = 0,
        N = 0;
        
    char num[TAM];
    
    scanf("%d", &N);
    getchar();
    
    for(i = 0; i < N; i++){
        fgets(num, TAM, stdin);
        num[strlen(num) - 1] = '\0';
        
        soma = 0;
        
        k = strlen(num);
        
        for(j = 0; num[j] != '\0'; j++){
                soma += leds[(num[j] - 0)];  
        }
        printf("%d leds\n", soma);
    }
    
    return 0;
}