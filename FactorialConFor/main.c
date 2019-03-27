#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int factorial;
    int contador;

    contador = 1;
    factorial = 1;

    printf("Ingrese un numero: ");
    scanf("%d",&num);

    if (num > 0)
    {
        while(contador<=num)
        {
            factorial = factorial * contador;
            contador++;
        }

        printf("El factorial de %d es: %d",num,factorial);

        return 0;
    }
    else
    {
        printf("El numero no tiene factorial");
    }
}
