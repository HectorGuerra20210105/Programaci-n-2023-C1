#include<stdio.h>
#include<string.h>

int main ()
{
    char *cad0 = "Hola Mexico";
    char cad1[20], cad2[20], cad3[20] = "Buenos dias!!!!";

    strcpy(cad1, cad0); // La funcion strcpy se utiliza para copiar los mensajes
    printf("\nPrueba de la funcion strcpy. Se copia la cadena cad0 a cad1: %s\n",cad1);

    strcpy(cad1, cad3);
    printf("\nPrueba de la funcion strcpy. Se copia la cadena cad3 a cad1: %s\n",cad1);

    strcpy(cad1, "XX");
    printf("\nPrueba de la funcion strcpy. Se copia la cadena XX a cad1: %s\n",cad1);

    strncpy(cad2, cad0, 4); // La funcion strncpy puede copiar cierta cantidad de caracteres
    cad2[4] = '\0';
    printf("\nPrueba de la funcion strcpy. Se copia 4 caracteres de cad0 a cad2: %s\n",cad2);

    strncpy(cad2, cad3, 3);
    cad2[3] = '\0';
    printf("\nPrueba de la funcion strcpy. Se copia 3 caracteres de cad3 a cad2: %s\n",cad2);

    strcat(cad0, cad3); // La funcion strcat Permite incorporar un conjunto de caracteres a otro variable
    printf("\nPrueba de la funcion strcat. Se incorpora la cadena cad3 a cad0: %s\n",cad0);

    strcat(cad1, "YY");
    printf("\nPrueba de la funcion strcat. Se incorpora la cadena YY a cad1: %s\n",cad1);

    strcat(cad2, "");
    strncat(cad2, cad0, 4);
    printf("\nPrueba de la funcion strncat. Se incorpora 4 caracteres de cad0 a cad2: %s\n",cad2);


    cad0 = strstr(cad0,"Mexico"); // La funcion strstr se utiliza para localizar una cadena de caracteres dentro de otra cadena.
    printf("\nPrueba de la funcion strstr. Se trata de localizar la cadena Mexico dentro de cad0: %s\n",cad0);

    cad0 = strstr(cad0,"Guatemala");
    printf("\nPrueba de la funcion strstr. Se trata de localizar la cadena Guatemala dentro de cad0: %s\n",cad0);

    getch ();
    return 0;
}
