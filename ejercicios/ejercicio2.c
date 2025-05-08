#include <stdio.h>

int main() {
    int opcion, a, b;

    do {
        
        printf("\n===== MENU =====\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        if (opcion == 1 || opcion == 2) {
            
            printf("Ingrese dos números: ");
            scanf("%d %d", &a, &b);

            if (opcion == 1) {
                printf("Resultado: %d\n", a + b);
            } else {
                printf("Resultado: %d\n", a - b);
            }
        } else if (opcion == 3) {
            printf("Saliendo...\n");
        } else {
            printf("Opción no válida, intenta de nuevo.\n");
        }
    } while (opcion != 3);

    return 0;
}

