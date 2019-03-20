#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Mostrar numeros del 1 al 10 con while
    int i;
    i = 0;

    while (i<10)
    {
        i = i +1;
        printf ("%d \n", i);
    }

    return 0;*/

    /* Mostrar numeros del 1 al 10 con do-while
    int i;
    i = 0;

    do
    {
        i = i +1;
        printf("%d \n", i);

    }while (i < 10);

    return 0; */

    /* Mostrar numeros del 1 al 10 con for

    int i;
    i = 0;

    for (i = 0; i < 10; i++)
    {
        printf("%d \n", (i+1));
    }*/

    /* Ingresar una hora con switch

    int hora;

    printf("Ingrese una hora: ");
    scanf("%d", &hora);

    switch (hora)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("A dormir");
        break;

        case 7:
        case 8:
            printf("Buenos dias");
        break;

        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
            printf("Cualquier cosa");
        break;

        default:
            printf("Ingrese un hora valida");
        break;
    }*/

    /*char hora;

    printf("Ingrese una hora: ");
    scanf ("%c", &hora);

    switch (hora)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("A dormir");
        break;
    }*/

    int valor;
    int max;
    int min;
    int flag;
    char rta;

    do
    {
        printf("Ingrese un valor: ");
        scanf("%d", &valor);

        if (flag = 0 || valor > max)
        {
            max = valor;
        }
        if (flag = 0 || valor < min)
        {
            min = valor;
            flag = 1;
        }
    }

    do
    {
        printf("Confirmar[S/N]?");
        fflush(stdin);
        scanf("%c", &rta);
        rta=toupper (rta);

    }while (rta != 'S' && rta != 'N');

}
