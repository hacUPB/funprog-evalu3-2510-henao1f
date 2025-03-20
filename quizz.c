#include <stdio.h>

int main() {
    int secreto = 15;
    int intento;

    printf("¡Bienvenido al juego Adivina el número!\n");

    printf("Ingresa tu número: "); // corregi "ingresa tu numero :"
    scanf("%d", &intento);  //corregi intento

    while (intento != secreto) { // elimine el espacio en "! ="
        if (intento < secreto) {
            printf("El número es mayor, intenta de nuevo: ");
        } else {
            printf("El número es menor, intenta de nuevo: ");
        }
        scanf("%d", &intento);  //corregi intento
    }

    printf("¡Felicidades! Has adivinado el número.\n");

    return 0;
}             //corregi el posicionamiento de las llaves mejorando el posicionamiento
