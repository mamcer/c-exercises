#include <stdio.h>

int main()
{
    int nro, milenio, centenio, decenio, unidad;
    printf("Ingrese numero a convertir: ");
    scanf("%d", &nro);

    milenio = nro / 1000;
    centenio = (nro % 1000) / 100;
    decenio = (nro % 100) / 10;
    unidad = nro % 10;

    printf("%d\n%d\n%d\n%d\n", milenio, centenio, decenio, unidad);
}