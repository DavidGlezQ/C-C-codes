#include <iostream>

int main()
{
	int calificacion;
	printf("David Alejandro Gonzalez Quezada\n20110407\n");
	printf("14/03/2020\n");
	printf("Ingresa calificacion:\n");
	scanf_s("%i",&calificacion);
	if (calificacion >=0 && calificacion <= 60) {
		printf("REPROBO\n");
	}
	if (calificacion >=61 && calificacion <=70) {
		printf("SUPERATE\n");
	}
	if (calificacion >=76 && calificacion <=85) {
		printf("MUY BIEN\n");
	}
	if (calificacion >=86) {
		printf("EXCELENTE\n");
	}
	/*
	si el valor es 0 a 60 reprobo
	si el valor es 61 a 70 superate
	si el valor es 76 a 85 muy bien
	si el valor es mayor a 86 excelente
	*/
}
