#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vec[5];
    int cantidad;
    int suma;

    cantidad = 0;
    suma = 0;

    for (int i=0; i<5; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vec[i]);
    }

    for (int i=0; i<5; i++)
    {
        printf("%d \n", vec[i]);

        suma = suma + vec[i];
        cantidad = cantidad + 1;

        printf("%")
    }


    return 0;
}
