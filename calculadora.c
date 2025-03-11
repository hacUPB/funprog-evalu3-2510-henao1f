#include <stdio.h>

int main() {
    int opcion;
    float muneroA, numnumeroB, resultado;

    printf("Ingrese el primer número: ");
    scanf("%f", &numeroA);
    printf("Ingrese el segundo número: ");
    scanf("%f", &numeroB);

    printf("\nSeleccione una operación:\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicación\n");
    printf("4. División\n");
    printf("Ingrese su opción: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            resultado = numeroA + numeroB;
            printf("\nResultado: %.2f + %.2f = %.2f\n", numemroA, numeroB, resultado);
            break;