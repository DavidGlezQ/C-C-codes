#include <iostream>
#include <stdio.h>

int main() {
	int i , num[30], prom = 0, mayor, min;
	printf("David Alejandro Gonzalez Quezada\n20110407\n");
	printf("Actividad 3 con Sentencia For\n");
	printf("**Ingresa tus 20 numeros a calcular**\n");
	printf("Numeros: \n");

	for (i = 0; i <= 19; i++) {
		scanf_s("%i", &num[i]);
	}
	for (i = 0; i <= 19; i++) {
		prom = prom + num[i];
	}
	mayor = num[0];
	min = num[0];
	for (int i = 0; i <= 19; i++)
	{
		if (num[i] < min) {
			min = num[i];
		}
		if (num[i] > mayor) {
			mayor = num[i];
		}
	}
	printf("Wl promedio de tus 20 numeros es: %i\n", prom);
	printf("El numero mayor es: %i\n", mayor);
	printf("El numero menor es: %i\n", min);
	return 0;
}