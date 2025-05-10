#include <stdio.h>
 
int main() {
    int i = 0,
        j = 0;

    for ( i = 0, j = 0; i < 10; i++ ) 
         for ( ; j < 10; j++ ) 
               printf("%d", ( i + j ));
    return 0;
}