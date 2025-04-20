#include <stdio.h>

const char* mensaje = "Hola desde la función sin parámetros!";

void imprimirMensaje() {
    printf("%s\n", mensaje);
}

int main() {
    imprimirMensaje();
    return 0;
}
