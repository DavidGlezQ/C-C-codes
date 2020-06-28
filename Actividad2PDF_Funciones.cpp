#include <iostream>
#include <stdlib.h>
int main()
{
	int columna = 1, i, a;
	char caracter[10];
	printf("David Alejandro Gonzalez Quezada\n");
	printf("20110407\n");
	printf("Programa que imprime las columnas ingresadas por el ususario.\n");
	printf("R2 Actividad 2\n");
	printf("Ingresa el numero de columnas que quieres mostrar en pantalla.\n");
	scanf("%i",&columna);
	printf("Ingresa el caracter que quieres imprimir.\n");
	fflush(stdin);
	gets(caracter);
	system("cls");
	printf("Tu numero ingresado es: %i\n", columna);
	for (i = 0; i <= columna; i++){
		for (a = 1; a <= columna -i; a++) {
			printf("%s",caracter);
		}
		printf("\n");
	}
	system("pause");
}
