#include <stdio.h>
#include <stdlib.h>

int sumar (int x, int y);
int restar (int x, int y);
int dividir (int x, int y);
int multiplicar (int x, int y);

int main()
{
    int num1;
    int num2;
    int suma;
    int resta;
    int division;
    int multiplicacion;

    printf("Ingrese un numero: ");
    scanf("%d", &num1);

    printf("Ingrese otro numero: ");
    scanf("%d", &num2);

    suma = sumar (num1, num2);
    resta = restar (num1, num2);
    division = dividir (num1, num2);
    multiplicacion = multiplicar (num1, num2);

    printf("El resultado de A+B es: %d \n", suma);
    printf("El resultado de A-B es: %d \n", resta);
    printf("El resultado de A/B es: %d \n", division);
    printf("El resultado de A*B es : %d \n", multiplicacion);

    return 0;
}

int sumar (int x, int y)
{
    int suma;
    suma = x + y;
    return suma;
}

int restar (int x, int y)
{
    int resta;
    resta = x-y;
    return resta;
}

int dividir (int x, int y)
{
    int division;
    division = x/y;
    return division;
}
int multiplicar (int x, int y)
{
    int multiplicacion;
    multiplicacion = x * y;
    return multiplicacion;
}
