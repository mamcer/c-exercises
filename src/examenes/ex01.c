#include <stdio.h>
#include <string.h>
#include <ctype.h>

int esPalindromo(char pal[20])
{
    int inicio = 0;
    int final = strlen(pal) - 1;
    while (inicio <= final)
    {
        if (tolower(pal[inicio]) != tolower(pal[final]))
        {
            return 0;
        }

        inicio += 1;
        final -= 1;
    }

    return 1;
}

void verificarPalindromo(char pal[20])
{
    if (esPalindromo(pal))
    {
        printf("'%s' es un palindromo\n", pal);
    }
    else
    {
        printf("'%s' no es un palindromo\n", pal);
    }
}

int esVocal(char c)
{
    if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u')
    {
        return 1;
    }

    return 0;
}

void contarVocales(char pal[20])
{
    int cantidadVocales = 0;

    int i = 0;
    do
    {
        if (esVocal(pal[i]))
        {
            cantidadVocales += 1;
        }
        i += 1;
    } while (i < 20);

    printf("La cantidad de vocales de '%s' es: %d\n", pal, cantidadVocales);
}

int main()
{
    // escribir un programa que permite ingresar dos nombres de provincias, mostrar por pantalla la cantidad de vocales de cada una y mostrar por pantalla si el nombre de la provincia es un palindromo

    char pal1[20];
    char pal2[20];
    printf("ingrese provincia 1: ");
    scanf("%s", pal1);

    printf("ingrese provincia 2: ");
    scanf("%s", pal2);

    contarVocales(pal1);
    contarVocales(pal2);

    verificarPalindromo(pal1);
    verificarPalindromo(pal2);
}