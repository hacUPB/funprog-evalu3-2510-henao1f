#include <stdio.h>

int main() {
    int opcion;
    float numeroA, numeroB, resultado;

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
            printf("\nResultado: %.2f + %.2f = %.2f\n", numeroA, numeroB, resultado);
            break;
        case 2:
            resultado = numeroA - numeroB;
            printf("\nResultado: %.2f - %.2f = %.2f\n", numeroA, numeroB, resultado);
            break;
        case 3: 
            resultado = numeroA * numeroB;
            printf("\nResultado: %.2f * %.2f = %.2f\n", numeroA, numeroB, resultado);
            break;
        case 4:
            if (numeroB != 0) {
                resultado = numeroA / numeroB;
                printf("\nResultado: %.2f / %.2f = %.2f\n", numeroA, numeroB, resultado);
            } else {
                printf("\nError: No se puede dividir entre cero.\n");
            }
            break;
        default:
            printf("\nOpción no válida. Vuelve a intentarlo.\n");
    }

    return 0;
}
