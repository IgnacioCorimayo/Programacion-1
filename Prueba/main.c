#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main()
{
    int opcion;
    int num1;
    int num2;

    num1 = 0;
    num2 = 0;

    printf("1- Ingrese el primer operando \n");
    printf("2- Ingrese el segundo operando \n");
    printf("3- Calcular todas las operaciones \n");
    printf("4- Informar resultados \n");
    printf("5- Salir \n");

    printf("\nIngrese una opcion: ");
    scanf("%d", &opcion);

    while (!(opcion > 0 && opcion < 6))
    {
        printf ("Ingrese una opción valida: ");
        scanf("%d", &opcion);
    }

    if (opcion == 1)
    {
        printf("Ingrese el 1º operando: ");
        scanf("%d", &num1);

        printf("El primer operando es: %d ", num1);

        printf("\nIngrese otra opcion distinta, para continuar \n");
        scanf("%d", &opcion);

        while (!(opcion > 1 && opcion <6))
        {
            printf ("Error, ingrese una opcion distinta \n");
            scanf("%d", &opcion);
        }
    }

    if (opcion == 2)
    {
        printf("Ingrese el 2º operando: ");
        scanf("%d", &num2);

        printf("El segundo operando es: %d ", num2);

        printf("\nIngrese otra opcion distinta, para continuar \n");
        scanf("%d", &opcion);

        while (!(opcion > 2 && opcion <6))
        {
        printf ("Error, ingrese una opcion distinta \n");
        scanf("%d", &opcion);
        }
    }

    if (opcion == 3)
    {
        printf("Calcular todas las operaciones");

        printf("\nIngrese otra opcion distinta, para continuar \n");
        scanf("%d", &opcion);

        while (!(opcion > 3 && opcion <6))
        {
        printf ("Error, ingrese una opcion distinta \n");
        scanf("%d", &opcion);
        }
    }

    if (opcion == 4)
    {
        printf("Informar resultados");

        sumar (num1, num2);
        restar (num1, num2);
        dividir (num1, num2);
        multiplicar (num1, num2);
        factorial (num1, num2);
    }
}

