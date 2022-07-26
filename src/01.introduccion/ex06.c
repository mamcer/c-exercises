#include <stdio.h>

// 1 pie = 12 pulgadas, 1 yarda = 3 pies, 1 pulgada = 2,54 Cm

int main()
{
    int pies;
    printf("Ingrese la medida en pies a convertir: ");
    scanf("%d", &pies);

    int yardas, pulgadas, metros;
    float centimetros;
    yardas = pies / 3;
    pulgadas = pies * 12;
    centimetros = pulgadas * 2.54;
    metros = centimetros / 100;

    printf("%d pies, %d yardas, %d pulgadas, %f centrimetros, %d metros\n", pies, yardas, pulgadas, centimetros, metros);
}