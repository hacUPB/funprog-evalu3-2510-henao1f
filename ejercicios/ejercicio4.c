#include <stdio.h>

int main () {
    int numero;

    printf("ingresar un numero entero: ");
    scanf("%d", &numero);
    
    for(int i = 1; i <= numero; i++) {
        for(int h = 1; h <= i; h++){
            printf("%d", h);
        }
        printf("\n");
    }
    return 0;
}