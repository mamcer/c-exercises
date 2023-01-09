#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void imprimirNombre(int c, char arr[c][20])
{
    for(int i=0;i<c;i++) 
    {
        printf("nombre en la posicion %d: %s\n", i, arr[i]);
    }
}

void imprimirEdadDistancia(int c, float arr[c][2])
{
    for(int i=0;i<c;i++) 
    {
        printf("edad en la posicion %d: %f\n", i, arr[i][0]);
        printf("distancia en la posicion %d: %f\n", i, arr[i][1]);
    }
}

int escribirArchivo(char* nombre, char *filename)
{
    FILE *fp = fopen(filename, "a+");
    if (fp == NULL)
    {
        printf("Error abriendo el archivo %s", filename);
        return -1;
    }
    
    fprintf(fp, "%s\n", nombre);
    fclose(fp);
    
    return 0;
}

void guardarEspecies(int c, float edadDis[c][2], char nombreAves[c][20], char *filename)
{
    for(int i=0;i<c;i++) 
    {
        if(edadDis[i][0] > 5 || edadDis[i][1] > 100)
        {
            escribirArchivo(nombreAves[i], filename);
        }
    }
}

int verificarSiSeEncuentra(char ave[20], char *filename)
{
    FILE *fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error abriendo el archivo %s", filename);
        return -1;
    }
    
    char line[20];
    while (fgets(line, sizeof(line) - 2, fp)) {
        if(strcmp(line, ave) == 0) 
        {
            return 1;
        }
    }
    fclose(fp);
    
    return 0;
}

int main()
{
    // 1. vector edad, distancia, nombres
    int c;
    printf("Ingrese la cantidad de columnas 'C': ");
    scanf("%d", &c);
    float edadDistancia[c][2];
    char nombres[c][20];

    float edad, distancia;
    for(int i=0;i<c;i++) 
    {
            printf("Ingrese la edad en años para la columna %i: ", i);
            scanf("%f", &edad);
            printf("Ingrese la distancia en kilometros para la columna %i: ", i);
            scanf("%f", &distancia);
            edadDistancia[i][0] = edad;
            edadDistancia[i][1] = distancia;
    }

    for(int i=0;i<c;i++) 
    {
            printf("Ingrese el nombre para la columna %i: ", i);
            scanf("%s", &nombres[i]);
    }

    imprimirEdadDistancia(c, edadDistancia);

    imprimirNombre(c, nombres);

    // 2. en un archivo los que vuelen mas de 100km o tengan mas de 5 años
    char *filename = "aves.txt";
    guardarEspecies(c, edadDistancia, nombres, filename);

    // 3. nombre de especie indique si se encuentra en el archivo
    char *ave;
    int result;
    ave = malloc(20);
    printf("Ingrese un nombre de ave: ");
    scanf("%s", ave);
    result = verificarSiSeEncuentra(ave, filename);
    if(result == 1)
    {
        printf("El ave %s Si existe en el archivo\n", ave);
    }
    else
    {
        printf("El ave %s No existe en el archivo\n", ave);
    }

    return 0;
}