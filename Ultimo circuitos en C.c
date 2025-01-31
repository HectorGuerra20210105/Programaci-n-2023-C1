#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Estructura de un nombre
typedef struct{
	char nombre[50];

}Nombre;

// declaracion de un array dinamico
Nombre *nombres = NULL;
int cuenta = 0;

// Funciones
void limpiarMemoria(){
	for (int i = 0; i < cuenta; i++){
		free(&nombres[i]);
	}

	free(nombres);
	nombres = NULL;
	cuenta = 0;
}

int guardarNombre(char nombre[50]){
	Nombre *tmp =NULL;
	tmp = (Nombre *) realloc(nombres, (cuenta + 1) * sizeof(Nombre));
	if (tmp == NULL)
		return -1; // Error

	nombres = tmp;
	strcpy(nombres[cuenta].nombre, nombre);
	cuenta++;

	return 1; // Exito
}

int borrarNombre(char nombre[50]){
	int indice = -1;

	for (int i = 0; i < cuenta; i++){
		if (strcmp(nombres[i].nombre, nombre) == 0){
			indice = i;
			break;
		}
	}

	if (indice == -1)
		return 0;

	Nombre *tmp = NULL;

    for (int i = indice; i < cuenta-1; i++){
        strcpy(nombres[i].nombre, nombres[i+1].nombre);
    }

	tmp = (Nombre *) realloc(nombres, (cuenta - 1) * sizeof(Nombre));

	if (tmp == NULL){
		return -1; // Error
	}

	nombres = tmp;
	cuenta--;
	return 1; // Exito
}

int buscarNombre(char nombre[50]){
	int indice = -1;

	for (int i = 0; i < cuenta; i++){
		if (strcmp(nombres[i].nombre, nombre) == 0){
			indice = i;
			break;
		}
	}

	return indice;
}

int mostrarNombres(){
	for (int i = 0; i < cuenta; i++){
		printf(" Nombre %d: %s \n", i+1, nombres[i].nombre);
	}
}

int menu(){
	int opt;

	printf("\n*** MENU ***\n");
	printf(" 0. Salir \n");
	printf(" 1. Nuevo \n");
	printf(" 2. Borrar \n");
	printf(" 3. Buscar \n");
	printf(" 4. Mostrar \n");
	printf("\n Selecciona una opcion: ");

	scanf("%d", &opt);

	return opt;
}

int main(){
	int opt;
	char nombre[50];

	do{
		opt = menu(); // Muestra el menu y obtiene una opcion

		switch(opt){
			case 0:
				limpiarMemoria();
				break;
			case 1: // Nuevo
				printf("\n Agregando un nuevo nombre: ");
				scanf("%s", nombre);
				if (guardarNombre(nombre) == -1)
					printf("\nNo se ha podido guardar el nombre!\n");
				break;
			case 2: // Borrar
				printf("\nIngresa el nombre a borrar: ");
				scanf("%s", nombre);
				if (borrarNombre(nombre) == -1)
					printf("\nNo se ha encontrado el nombre!\n");
				break;
			case 3: // Buscar
				printf("\nIngresa el nombre a buscar: ");
				scanf("%s", nombre);
				if (buscarNombre(nombre) == -1)
					printf("\nNo se ha encontrado el nombre!\n");
				break;
			case 4: // Mostrar
				mostrarNombres();
				break;
			default:
				printf("\n Opcion invalida \n\n");
		}

	}while(opt != 0);

	printf("\nAdios!\n\n");
	return 0;
}
