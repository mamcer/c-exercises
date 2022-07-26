#include <stdio.h>

// F = (9 / 5)C + 32

int main()
{
    float celsius, farenheit;
    printf("Ingrese la temperatura en celsius a convertir: ");
    scanf("%f", &celsius);

    farenheit =  (9 / 5)*celsius + 32;

    printf("%f celsius, %f farenheit\n", celsius, farenheit);
}