#include <stdio.h>
#include <stdlib.h>


int sumar (int x, int y);
int restar (int x, int y);
int dividir (float x, float y);
int multiplicar (int x, int y);
int factorial (int x, int y);

int main()
{
    int num1;
    int num2;
    int suma;
    int resta;
    float division;
    int multiplicacion;
    int factor;

    printf("Ingrese un numero: ");
    scanf("%d", &num1);

    printf("Ingrese otro numero: ");
    scanf("%d", &num2);

    suma = sumar (num1, num2);
    resta = restar (num1, num2);
    division = dividir  (num1, num2);
    multiplicacion = multiplicar (num1, num2);
    factor = factorial (num1, num2);

    return 0;
}

int sumar (int x, int y)
{
    int suma;
    suma = x + y;

    printf("El resultado de A+B es: %d \n", suma);

    return suma;
}

int restar (int x, int y)
{
    int resta;
    resta = x-y;

    printf("El resultado de A-B es: %d \n", resta);

    return resta;
}

int dividir (float x, float y)
{
    float division;
    division = x/y;

    if (y == 0)
    {
        printf("No es posible dividir por cero \n");
    }
    else
    {
        printf("El resultado de A/B es: %.1f \n", division);
    }

    return division;
}

int multiplicar (int x, int y)
{
    int multiplicacion;
    multiplicacion = x * y;

    printf("El resultado de A*B es : %d \n", multiplicacion);

    return multiplicacion;
}

int factorial (int x, int y)
{
    int factorial;
    int contador;
    int factorial2;
    int contador2;

    contador = 1;
    factorial = 1;
    contador2 = 1;
    factorial2 = 1;

    if (x > 0)
    {
        while(contador<=x)
        {
            factorial = factorial * contador;
            contador++;
        }

        printf("El factorial de %d es: %d \n", x, factorial);
    }
    else
    {
        printf("El primer numero no tiene factorial \n");
    }

    if (y > 0)
    {
        while(contador2<=y)
        {
            factorial2 = factorial2 * contador2;
            contador2++;
        }

        printf("El factorial de %d es: %d \n", y, factorial2);
    }
    else
    {
        printf("El segundo numero no tiene factorial \n");
    }

    return factorial;
}


