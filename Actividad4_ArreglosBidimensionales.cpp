#include <iostream>
int matriz[5][6], j, i, positivos = 0, negativos = 0, ceros = 0;
int main()
{
    printf("David Alejandro Gonzalez Quezada.\n");
    printf("20110407.\n");
    printf("Actividad 3 Arreglos Bidimensionales.\n");
    printf("Programa que lee una matriz de 7x7.\n");
    printf("Ademas suma todos los numeros de cada renglon y de cada columna.\n");
    //Ingresar los valores.
    printf("Ingrese los valores de la matriz:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            printf("Rellena la matriz en la posicion [%i] [%i]:  ", i, j);
            scanf_s("%i", &matriz[i][j]);
        }
    }
    printf("\n");
    //Mostrar la cantidad de numeros negativos y positivos.
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            if (matriz[i][j]>=0){
                positivos++ ;
            }
            else{
                negativos++;
            }
        }
    }
    printf("La cantidad de numeros positivos es: %i\n", positivos);
    printf("La cantidad de numeros negativos es: %i\n", negativos);
    //Mostrar cuantos numeros almacenados son ceros.
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            if (matriz[i][j] == 0) {
                ceros++;
            }
        }
    }
    printf("La cantidad de ceros es: %i\n", ceros);
    printf("\n");
    system("pause");
}
