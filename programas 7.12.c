#include <stdio.h>
#include <ctype.h>
#include<conio.h>

/* Cuenta letras min�sculas y may�sculas.
El programa, al recibir como dato una frase, determina el n�mero de letras
min�sculas y may�sculas que existen en la frase. */

int main ()
{
  char cad[50];
  int i = 0, mi = 0, ma = 0;

  printf("\nIngrese la cadena de caracteres (maximo 50 caracteres): ");
  gets(cad);

  while(cad[i] != '\0')
   {
     if (islower (cad[i]))
     {
         mi++;
     }
     else
     {
          if (isupper (cad[i]))
          {
               ma++;
          }
     }
     i++;
   }

printf("\n\nN�mero de letras minusculas: %d", mi);
printf("\nN�mero de letras mayusculas: %d", ma);

getch ();
return 0;
}
