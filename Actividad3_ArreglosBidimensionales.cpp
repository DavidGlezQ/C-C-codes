#include <iostream>
int matriz[7][7];
int vectorVertical[10], vectorHorizontal[10], j, i, suma = 0;
int main()
{
    printf("David Alejandro Gonzalez Quezada.\n");
    printf("20110407.\n");
    printf("Actividad 3 Arreglos Bidimensionales.\n");
    printf("Programa que lee una matriz de 7x7.\n");
    printf("Ademas suma todos los numeros de cada renglon y de cada columna.\n");
    //Ingresar los valores.
    printf("Ingrese los valores de la matriz:\n");
    for ( i = 0; i < 7; i++) {
        for ( j = 0; j < 7; j++) {
            printf("Rellena la matriz en la posicion [%i] [%i]:  ", i, j);
            scanf_s("%i",&matriz[i][j]);
        }
    }
    printf("\n");
    //Mostrar todos lo valores de la matriz ordenados.
    printf("Todos los numeros del arreglo son: \n");
    for ( i = 0; i < 7; i++) {
        for ( j = 0; j < 7; j++) {
            
            printf("El numero de la posicion [%i][%i] es: %i\n", i, j, matriz[i][j]);
        }
    }
    printf("\n");
   //Sumar las filas.
    for (i = 0; i < 7; i++) {
        suma = 0;
        for (j = 0; j < 7; j++) {
            suma += matriz[i][j];
        }
        vectorVertical[i] = suma;
    }
    //Mostrar la suma de cada fila.
    printf("La suma de los numeros de cada fila del vector son: \n");
    for (i = 0; i < 7; i++) {
        printf("%i\n", vectorVertical[i]);
    }
    printf("\n");
    //Sumar las columnas.
    for (j = 0; j < 7; j++) {
        suma = 0;
        for (i = 0; i < 7; i++) {
            suma += matriz[i][j];
        }
        vectorHorizontal[j] = suma;
    }
    //Mostrar la suma de cada columna.
    printf("La suma de los numeros de cada columna del vector son: \n");
    for (i = 0; i < 7; i++) {
        printf("%i\n", vectorHorizontal[i]);
    }
    printf("\n");
    system("pause");
}