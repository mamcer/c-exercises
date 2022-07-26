#include <stdio.h>

int main()
{
    int nro01, nro02;
    printf("Ingrese numero 1: ");
    scanf("%d", &nro01);
    printf("Ingrese numero 2: ");
    scanf("%d", &nro02);

    if (nro01 < nro02)
    {
        printf("%d - %d\n", nro01, nro02);
    }
    else
    {
        printf("%d - %d\n", nro02, nro01);
    }
}