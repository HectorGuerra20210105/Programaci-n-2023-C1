#include<stdio.h>
#include<conio.h>

int main ()
{
    char *cad0;

    cad0 = "Argentina"; // De declara la variable y se le asigna valor.
    puts(cad0);

    cad0 = "Brasil"; // Se modifica el mensaje de la variable cad0.
    puts(cad0);

    char *cad1;
    gets(*cad1);

    //char *cad1 = "";
    //gets(cad1);

    //char cad1[]; Presenta error de compilacion

    char cad2[20] = "Mexico";
    puts(cad2);
    gets(cad2);

    cad2[10] = "Guatemala"; // Este mensaje no se visualiza en la ventana porque no esta declarada.
    puts(cad2);

    getch ();
    return 0;
}
