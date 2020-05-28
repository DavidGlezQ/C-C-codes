#include <iostream>
#include <stdlib.h>
void main()
{
	int columna = 1;
	int i;
	int a;
	printf("David Alejandro Gonzalez Quezada\n");
	printf("20110407\n");
	printf("Programa que imprime las columnas ingresadas por el ususario.\n");
	printf("R2 Actividad 2\n");
	printf("Ingresa el numero de columnas que quieres mostrar en pantalla.\n");
	scanf_s("%i",&columna);
	system("cls");
	printf("Tu numero ingresado es: %i\n", columna);
	for (i = 1; i <= columna; i++){
		printf("%i",i);
		for (a = 1; i >= a; a++) {
			printf(".");
		}
		printf("\n");
	}
	system("pause");
}