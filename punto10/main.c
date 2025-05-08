#include <stdio.h>
#include "operaciones.h"

int main() {
    int x = 20;
    int y = 8;

    int resultado = restar(x, y);

    printf("La resta de %d - %d es: %d\n", x, y, resultado);

    return 0;
}
