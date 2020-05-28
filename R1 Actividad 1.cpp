#include <iostream>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
int filas = 1, columnas = 1, i, a, b;
char carac1[15];
char carac2[10];
int main()
{
	printf("David Alejandro Gonzalez Quezada\n");
	printf("20110407\n");
	printf("Programa que imprime filas y comlumnas en base a los digitos ingresados\n");
	printf("R1 Actividad1\n");
	printf("A continuacion deberas de escribir dos caracteres diferentes los cuales se mostraran en las filas\n");
	printf("Ingresa el primer caracter: ");
	gets_s(carac1);
	fflush(stdin);
	printf("Ingresa el segundo caracter: ");
	gets_s(carac2);
	fflush(stdin);
	printf("Ingresa el numero de filas: ");
	scanf_s("%i",&filas);
	printf("Ingresa el numero de columnas: ");
	scanf_s("%i",&columnas);
	printf("\n");
	for (b = 1; b <= columnas; b++) {
		for (i = 1; i <= filas; i++) {
			printf("%s", carac1);
		}
		for (a = 1; a <= filas; a++) {
			printf("%s", carac2);
		}
		printf("\n\n");
	}
	system("pause");
}

