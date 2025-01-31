#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main ()
{
    char p1;

    printf("Ingrese un caracter para analizar si este es un digito: \n");
    p1 = getchar();

    if(isdigit (p1))
    {
        printf("%c es un digito.\n",p1); // La funcion isdegit es para identificar si es un coeficiente o no.
    }
    else
    {
        printf("%c no es un digito.\n",p1);
    }
    fflush(stdin);

    printf("Ingrese un caracter para examinar si este es una letra: \n");
    p1 = getchar();

    if (isalpha (p1))
    {
        printf("%c es una letra.\n",p1); // La funcion isalpha sirve para identificar si el valor es una letra o no.
    }
    else
    {
        printf("%c no es una letra.\n",p1);
    }
    fflush(stdin);

    printf("Ingrese un caracter para examinar si este es una letra minuscula: \n");
    p1 = getchar();

    if (isalpha (p1))
    {
        printf("%c es una letra minuscula.\n",p1);
    }
    else
    {
       if (islower (p1)) // La funcion islower identifica si el valor es minuscula.
       {
           printf("%c es una letra minuscula.\n",p1);
       }
       else
       {
           printf("%c no es una letra minuscula.\n",p1);
       }

       printf("%c no es una letra.\n",p1);
    }

    fflush(stdin);
    printf("Ingrese una letra para convertirla de mayuscula a minuscula: \n");
    p1 = getchar();
    if (isalpha (p1))
    {
        if (isupper(p1))
        {
            printf("%c fue convertida de mayuscula a minuscula.\n", tolower(p1)); // La funcion tolower convierte la letra mayuscula a minuscula.
        }
        else
        {
            printf("%c es una letra minuscula.\n", p1);
        }
    }
    else
    {
       printf("%c no es una letra.\n", p1);
    }

    getch ();
    return 0;
}
