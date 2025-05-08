#include <stdio.h>
 
int suma(int *, int *); //Se declara una función sumaque recibe punteros a enteros como parámetros. Esto significa que los valores de las variables pueden modificarse dentro de la función 

int main(int argc, char const *argv[])
{
    int resultado, num1, num2;
    num1 = 100;
    num2 = 400;
    resultado = suma(&num1, &num2); // Se envían las direcciones de num1y num2a la función suma(). resultadoAlmacenará el valor que devuelve la función.
    printf("suma = %d\n", resultado);
    printf("num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
 
int suma(int *ptr_n1, int *ptr_n2)
{
    int res_suma;
    res_suma = (*ptr_n1) + (*ptr_n2);
    (*ptr_n1) = 999; // Cambia el valor de num1
    (*ptr_n2) = 777; // Cambia el valor de num2
    return res_suma;
}