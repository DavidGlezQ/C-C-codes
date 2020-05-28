#include <iostream>
#include <stdio.h>

int main()
{
	int i=0, b = 0, c = 0, num[30], prom = 0, mayor, min;
	printf("David Alejandro Gonzalez Quezada\n20110407\n");
	printf("Actividad 3 con Sentencia While\n");
	printf("**Ingresa tus 20 numeros a calcular**\n");
	printf("Numeros: \n");
	while (i <= 19){
		scanf_s("%i", &num[i]);
		i++;
	}
	while (b <= 19) {
		prom = prom + num[b];
		b++;
	}
	mayor = num[0];
	min = num[0];
	while (c <= 19){
		if (num[c] < min) {
			min = num[c];
			c++;
		}
		if (num[c] > mayor) {
			mayor = num[c];
		}
		c++;
	}
	printf("La suma de tus numeros son: %i\n", prom);
	printf("El numero mayor es: %i\n", mayor);
	printf("El numero menor es: %i\n", min);
	return 0;
}