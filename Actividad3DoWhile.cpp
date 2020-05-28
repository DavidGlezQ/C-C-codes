#include <iostream>
#include <stdio.h>

int i = 0, a = 0, b = 0, num[30], prom = 0, mayor, menor;
int main()
{
	printf("David Alejandro Gonzalez Quezada\n20110407\n");
	printf("Actividad 3 con Sentencia Do While\n");
	printf("**Ingresa tus 20 numeros a calcular**\n");
	printf("Numeros: \n");

	do{
		scanf_s("%i", &num[i]);
		i++;
	} while (i <= 19);
	do{
		prom = prom + num[a];
		a++;
	} while (a <= 19);

	mayor = num[0];
	menor = num[0];
	do{	
		if (num[b] < menor) {
			menor = num[b];
		}
		if (num[b] > mayor) {
			mayor = num[b];
		}
		b++;
	} while (b <= 19);
	
	printf("La suma de tus numeros son: %i\n", prom);
	printf("El numero mayor es: %i\n", mayor);
	printf("El numero menor es: %i\n", menor);
}
