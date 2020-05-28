#include <iostream>
#include <stdlib.h>
void main()
{
	int N=0, i=0;
	printf("David Alejandro Gonzalez Quezada.\n");
	printf("20110407.\n");
	printf("Programa que muestra los numeros de 7 en 7 ne base al numero ingresado por el ususario.\n");
	printf("Programa 1 Estrucuturas Repetitivas.\n");
	printf("Ingresa un numero que no sea mayor a 200.\n");
	scanf_s("%i", &N);
	system("cls");
	printf("Numero ingresado: %i\n", N);
	if (N>200)
	{
		printf("Tu numero es mayor a 200, por favor ingresa un valor correcto.\n");
	}else
	{
		for (i = 1; i <= N; i++) {
			printf("%i \n", i);
			if (i % 7 == 0) {
				printf("\n");
			}
		}
	}
}
