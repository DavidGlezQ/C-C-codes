#include <iostream>
int matriz[10][10], elementoActual;
int main()
{
    printf("David Alejandro Gonzalez Quezada\n");
    printf("20110407\n");
    printf("Actividad 1 Arreglos Bidimensionales\n");
    printf("Programa que lee una matriz de 10x10 y muestra la posicion del elemento mayor\n\n");
    printf("Ingresa tus 10 numeros de la matirz:\n");
    for (int i = 0; i <= 10; i++){
        for (int j = 0; j <= 10; j++){
            printf("Rellena la matriz [%i] [%i]: ", i, j);
            scanf_s("%i",&matriz[i][j]);
        }
    }
    printf("\n");
    printf("Todos los numeros del arreglo son: \n");
    for (int i = 0; i <= 10; i++) {
        for (int j = 0; j <= 10; j++) {
            printf("%i ", matriz[i][j]);
            //printf("numeros [%i] [%i]",i, j);
        }
        printf("\n");
    }

    int menor = matriz[0][0];
    int mayor = matriz[0][0];
    for (int i = 0; i <= 10; i++) {
        for (int j = 0; j <= 10; j++) {
            elementoActual = matriz[i][j];
            if (elementoActual > mayor) {
                mayor = elementoActual;
            }
        }
    }
    printf("\n");
    printf("Numero mayor en la matriz: %i\n", mayor);
    system("pause");
}