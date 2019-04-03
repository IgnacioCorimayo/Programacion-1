#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"
#include "menu.h"

int main()
{
    int opcion;
    int num1;
    int num2;

    num1 = 0;
    num2 = 0;

    do
    {
        menus ();

        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
            case 1:
                printf("Ingrese el 1º operando: ");
                scanf("%d", &num1);

                printf("El primer operando es: %d \n", num1);

            break;

            case 2:
                printf("Ingrese el 2º operando: ");
                scanf("%d", &num2);

                printf("El segundo operando es: %d \n", num2);
            break;

            case 3:
                printf("Calculando todas las operaciones. Ingrese la opcion 4 para ver los resultados \n");
            break;

            case 4:
                printf("Informar resultados \n");

                sumar (num1, num2);
                restar (num1, num2);
                dividir (num1, num2);
                multiplicar (num1, num2);
                factorial (num1, num2);
            break;

            case 5:

            break;

            default:

            break;
        }
    }while (opcion!=5);
}
