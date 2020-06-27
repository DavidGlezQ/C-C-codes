#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//DECLARAR FUNCION.
int calcularEcuacion(int a, int b, int c);
//VARIABLES.
int a=0, b=0, c=0, resultado=0, x1=0, x2=0;
//MAIN
int main() {
	printf("David Alejandro Gonzalez Quezada\n");
    printf("20110407\n");
    printf("Actividad PDF1 Funciones\n");
    printf("Programa que calcula ecuaciones de segundo grado\n");
    printf("Ingresa el valor 'a': \n");
    scanf("%i",&a);
    if(a==0){
    	printf("El valor 'a' no puede ser '0' intente de nuevo!");
	} else {
		printf("Ingresa el valor 'b': \n");
	    scanf("%i",&b);
	    printf("Ingresa el valor 'c': \n");
	    scanf("%i",&c);
	    calcularEcuacion(a, b, c);
	}
    return 0;
}
//FUCNION.
int calcularEcuacion(int a, int b, int c){
	resultado = b * b - (4 * a * c);
    if(resultado > 0){
    	resultado = sqrt(resultado);
    	x1 = ((b*-1)+(resultado))/(2*a);
		x2 = ((b*-1)-(resultado))/(2*a);
		printf("X1 es igual a: %i \n", x1);
		printf("X2 es igual a: %i \n", x2);
	} else {
		printf("No es posible calcularlo.");
	}
	return resultado;
}
