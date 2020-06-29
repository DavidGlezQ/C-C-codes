#include<stdio.h>
#include<stdlib.h>

int numero = 0, potencia = 0, res = 1;
int calcularPotencia(int numero, int potencia);
int main(){
	printf("David Alejandro Gonzalez Quezada\n");
    printf("20110407\n");
    printf("Actividad PDF3 Funciones\n");
    printf("Programa que calcula un numero elevado\n");
    printf("Ingresa el primer valor que se elevara por el segundo\n");
    scanf("%i",&numero);
    printf("Ingresa la potencia\n");
    scanf("%i",&potencia);
    calcularPotencia(numero, potencia);
}

int calcularPotencia(int numero, int potencia){
	for(int i = 1; i<=potencia; i++){
    	res = res*numero;
	}
	printf("El resultado es: %i", res); 
	return res;
}
