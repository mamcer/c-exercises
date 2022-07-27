#include <stdio.h>
#include <stdlib.h>

// 5) Realizar un programa en C, utilizando estructuras de repetición condicional para resolver cada o de los siguientes problemas:

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

    // 5.4 Mostrar por pantalla los números enteros que se encuentran comprendidos en el intervalo [–K ... K] en orden ascendente y luego en orden descendente.
    int minimo = k * -1 - 1;
    j = 0;
    printf("\n5.4 numeros entre [–K ... K] asc\n");
    while (minimo <= k && j < arrSize)
    {
        i = 0;
        int actual = k + 1;
        while (i < arrSize)
        {
            if (arreglo[i] > minimo && arreglo[i] < actual)
            {
                actual = arreglo[i];
            }

            i += 1;
        }
        if (actual <= k)
        {
            printf("%d ", actual);
        }
        minimo = actual;
        i += 1;
    }
    printf("\n");

    int mayor = k + 1;
    j = 0;
    printf("\n5.4 numeros entre [–K ... K] desc\n");
    while (mayor >= k * -1 && j < arrSize)
    {
        i = 0;
        int actual = k * -1 - 1;
        ;
        while (i < arrSize)
        {
            if (arreglo[i] < mayor && arreglo[i] > actual)
            {
                actual = arreglo[i];
            }

            i += 1;
        }
        if (actual >= k * -1)
        {
            printf("%d ", actual);
        }
        mayor = actual;
        i += 1;
    }
    printf("\n");

    // 5.5 Mostrar por pantalla los términos de la sucesión 1,3,6,10,15,21,28..... que sean menores al número K
    printf("\n5.5 numeros sucesión 1,3,6,10,15,21,28.. menores a K\n");
    int actual = 1;
    i = 1;
    while (actual <= k)
    {
        printf("%d,", actual);
        i += 1;
        actual = actual + i;
    }
    printf("\n");

    // 5.6 Calcular el promedio de N números
    printf("\n5.6 promedio de primeros N números\n");
    float total = 0;
    i = 0;
    while (i < n && i < arrSize)
    {
        total += arreglo[i];
        i += 1;
    }
        printf("promedio: %f\n", total / n);

    return 0;
}