#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Uso: debe ingresar dos numeros naturales separados por espacio como parametros\n");
        return 1;
    }

    int n, k, i, j;
    n = atoi(argv[1]);
    k = atoi(argv[2]);
    i = 0;
    j = 0;

    printf("N:%d, K:%d\n", n, k);

    // cargar arreglo
    int arreglo[5];
    int arrSize = sizeof(arreglo) / sizeof(arreglo[0]);
    printf("Ingrese los primeros 5 numeros\n");
    while (i < 5)
    {
        scanf("%d", &arreglo[i]);
        i = i + 1;
    }

    // imprimir arreglo
    i = 0;
    printf("\ncontenido del arreglo:\n");
    while (i < 5)
    {
        printf("arreglo[%d]=%d\n", i, arreglo[i]);
        i = i + 1;
    }

    // 5.1 es numero natural
    i = 0;
    printf("\n5.1 es numero natural:\n");
    while (i < 5)
    {
        if (arreglo[i] >= 0)
        {
            printf("arreglo[%d]=%d, es un numero natural\n", i, arreglo[i]);
        }

        i = i + 1;
    }

    // 5.2 N primeros numeros pares
    i = 0;
    printf("\n5.2 N primeros numeros pares:\n");
    while (i < n && i < arrSize)
    {
        if (arreglo[i] % 2 == 0)
        {
            printf("arreglo[%d]=%d, es un numero par\n", i, arreglo[i]);
        }

        i = i + 1;
    }

    // 5.3 N primeros multiplos de K
    i = 0;
    int suma = 0;
    printf("\n5.3 N primeros multiplos de K:\n");
    while (i < n && i < arrSize)
    {
        if (arreglo[i] % k == 0)
        {
            suma += arreglo[i];
        }

        i = i + 1;
    }
            printf("la suma de los N(%d) primeros multiplos de K(%d) es: %d\n", n, k, suma);

    return 0;
}