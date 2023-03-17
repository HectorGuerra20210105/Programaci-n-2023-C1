# incluir  < stdio.h >
# incluir  < stdlib.h >

void  bimonachi ( int num);
#incluir <stdio.h>
#incluir <stdlib.h>

void bimonachi(int num);

int principal() {
    numero int;

    printf("Ingrese el n�mero deseado: ");
    scanf("%d", &num);

    printf("\nSucesi�n de Finonacci de %d elementos:\n", num);
    bimonachi(num);

    devolver 0;
}

vacío bimonachi(int num2) {
    int a, a1 = 1, bb = 2, tiempo;

    printf("%d %d ", a1, bb);

    para (a = 3; a <= num2; a++) {
        tiempo = bb;
        bb = bb + a1;
        a1 = tiempo;
        printf("%d", bb);
    }
    imprimirf("\n");
}
