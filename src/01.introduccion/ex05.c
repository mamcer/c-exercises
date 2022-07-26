#include <stdio.h>

// Escribir un programa que convierta un número dado en segundos en su equivalente en Horas, Minutos y Segundos.

// Ejemplo: Segundos=4000, el programa muestra 1H: 6M: 40S

int main()
{
    int input;
    printf("Ingrese la cantidad de segundos a convertir: ");
    scanf("%d", &input);

    int minutes;
    minutes = (input / 60) % 60;

    int hours;
    hours = input / 60 / 60;

    int seconds;
    seconds = input % 60;

    printf("%dH:%dM:%dS\n", hours, minutes, seconds);
}