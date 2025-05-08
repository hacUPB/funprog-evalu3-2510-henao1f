#include <stdio.h>


int factorial(int n) {
    if (n <= 1) {
        return 1; 
    } else {
        return n * factorial(n - 1); // Paso recursivo
    }
}

int main() {
    int numero;

    printf("Ingrese un número para calcular su factorial: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Error: el factorial no está definido para números negativos.\n");
    } else {
        printf("El factorial de %d es: %d\n", numero, factorial(numero));
    }

    return 0;
}
//este fue con ayuda de la inteligencia artificial