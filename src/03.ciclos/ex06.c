#include <stdio.h>
#include <stdlib.h>

// 6) Escriba un programa en C que escriba la suma de los N primeros números impares

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("uso: debe ingresar dos numeros naturales separados por espacio como parametros\n");
        return 1;
    }

    int n, k, i, j;
    n = atoi(argv[1]);
    k = atoi(argv[2]);
    i = 0;

    // cargar arreglo
    int arreglo[k];
    int arrSize = sizeof(arreglo) / sizeof(arreglo[0]);
    printf("ingrese %d numeros\n", k);
    while (i < k)
    {
        scanf("%d", &arreglo[i]);
        i = i + 1;
    }

    i = 0;
    int suma = 0;
    while (i < n && i < k)
    {
        if (arreglo[i] % 2 != 0)
        {
            suma += arreglo[i];
        }
        i += 1;
    }
    printf("suma de los %d primeros numeros impares es: %d\n", n, suma);

    return 0;
}