#include<stdio.h>
#include<conio.h>

int main ()
{
    char p1, p2, p3 = '$';

    printf("Ingrese un caracter: ");
    p1=getchar();  // Para leer un caracter de la variable.
    putchar(p1);   // Para ingresar un mensaje en la variable p1
    printf("\n");
    fflush(stdin);  // Se utiliza fflush para limpiar el dato ingresado en putchar.

    printf("El carater de p3 es : ") ;
    putchar(p3); // Para leer la variable ingresada de p3.
    printf("\n");

    printf("Ingrese otro caracter: ");
    fflush(stdin);
    scanf("%s",&p2);
    scanf("%s",&p2);

    getch ();
    return 0;
}
