Bienvenido a la Calculadora de Ingeniería
Por favor, selecciona una opción:

1. Calcular Ley de Ohm
2. Calcular Factor de Potencia
3. Calcular Resistencia de un Conductor
4. Calcular Valor de la Resistencia para un LED
5. Salir

codigo en C:
#include <stdio.h>

int main() {
    int opcion;

    do {
        printf("\nBienvenido a la Calculadora de Ingeniería\n");
        printf("Por favor, selecciona una opción:\n");
        printf("1. Calcular Ley de Ohm\n");
        printf("2. Calcular Factor de Potencia\n");
        printf("3. Calcular Resistencia de un Conductor\n");
        printf("4. Calcular Valor de la Resistencia para un LED\n");
        printf("5. Salir\n");
        printf("Ingresa el número de la opción deseada: ");
        
        scanf("%d", &opcion);

        if (opcion == 1) {
            printf("Seleccionaste 'Calcular Ley de Ohm'.\n");
        } 
        else if (opcion == 2) {
            printf("Seleccionaste 'Calcular Factor de Potencia'.\n");
        } 
        else if (opcion == 3) {
            printf("Seleccionaste 'Calcular Resistencia de un Conductor'.\n");
        } 
        else if (opcion == 4) {
            printf("Seleccionaste 'Calcular Valor de la Resistencia para un LED'.\n");
        } 
        else if (opcion == 5) {
            printf("Saliendo de la calculadora...\n");
        } 

    return 0;
}


LEY DE OHM:
#include <stdio.h>

int main() {
    int opcion, subopcion;
    float V, I, R;

    do {
        printf("\nBienvenido a la Calculadora de Ingeniería\n");
        printf("Por favor, selecciona una opción:\n");
        printf("1. Calcular Ley de Ohm\n");
        printf("2. Salir\n");
        printf("Ingresa el número de la opción deseada: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            printf("\nHas seleccionado calcular la Ley de Ohm.\n");
            printf("¿Qué parámetro deseas calcular?\n");
            printf("1. Calcular Tensión (Voltaje)\n");
            printf("2. Calcular Corriente\n");
            printf("3. Calcular Resistencia\n");
            printf("4. Volver al menú principal\n");
            printf("Ingresa el número de la opción deseada: ");
            scanf("%d", &subopcion);

            if (subopcion == 1) { 
                printf("\nIngresa el valor de la corriente (I) en amperios: ");
                scanf("%f", &I);
                printf("Ingresa el valor de la resistencia (R) en ohmios: ");
                scanf("%f", &R);
                V = I * R;
                printf("Tensión = %.2f V\n", V);
            } 
            else if (subopcion == 2) { 
                printf("\nIngresa el valor del voltaje (V) en voltios: ");
                scanf("%f", &V);
                printf("Ingresa el valor de la resistencia (R) en ohmios: ");
                scanf("%f", &R);
                if (R == 0) {
                    printf("Error: La resistencia no puede ser cero.\n");
                } else {
                    I = V / R;
                    printf("Corriente = %.2f A\n", I);
                }
            } 
            else if (subopcion == 3) { 
                printf("\nIngresa el valor del voltaje (V) en voltios: ");
                scanf("%f", &V);
                printf("Ingresa el valor de la corriente (I) en amperios: ");
                scanf("%f", &I);
                if (I == 0) {
                    printf("Error: La corriente no puede ser cero.\n");
                } else {
                    R = V / I;
                    printf("Resistencia = %.2f Ω\n", R);
                }
            } 
            else if (subopcion == 4) {
                continue; 
            } 
            else {
                printf("Opción inválida. Intenta nuevamente.\n");
            }
        } 
        else if (opcion == 2) {
            printf("Saliendo de la calculadora...\n");
        } 
        else {
            printf("Opción inválida. Por favor, ingresa 1 o 2.\n");
        }

    } while (opcion != 2);

    return 0;
}
