#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main ()
{
    int i;
    double d;
    long l;
    char cad0[20], *cad1;

    printf("Ingrese una cadena de caracteres: \n");
    gets(cad0);

    i = atoi(cad0); // La funcion atoi convierte un conjunto de numeros es un solo valor.
    printf("\n %s \t %d",cad0, i+3);
    printf("\n");

    printf("Ingrese una cadena de caracteres: \n");
    gets(cad0);
    d = atof(cad0); // La funcion atof convierte un conjunto de numeros en double.
    printf("\n%s \t %lf",cad0, d+1.50);

    d = strtod(cad0, &cad1); // La funcion strtod convierte un conjunto de numeros a un tipo double. Luego se almacena en la segunda asignacion.
    printf("\n%s \t %lf",cad0,d+1.50);
    puts(cad1);

    l = atol(cad0);  // La funcion atol convierte un conjunto de numeros a un tipo long.
    printf("\n%s \t %ld",cad0, l+10);

    l = strtol(cad0, &cad1, 0); // La funcion strtol convierte un conjunto de numeros a un tipo long y se almacenas en la asignacion de &cad1.
    printf("\n%s \t %ld",cad0,l+10);
    puts(cad1);

    getch ();
    return 0;
}
