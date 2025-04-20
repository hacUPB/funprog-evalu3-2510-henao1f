#include <stdio.h>

int maximo(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2, resultado;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    resultado = maximo(num1, num2);

    printf("El número mayor es: %d\n", resultado);

    return 0;
}
