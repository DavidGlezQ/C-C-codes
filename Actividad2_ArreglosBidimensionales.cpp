#include <iostream>
int main()
{
    int matriz[5][6];
    printf("David Alejandro Gonzalez Quezada.\n");
    printf("20110407.\n");
    printf("Actividad 2 Arreglos Bidimensionales.\n");
    printf("Programa que lee una matriz de 5x6 y muesta la suma de todos esos numeros.\n");
    printf("Ingresa los datos de la matriz de 5x6:\n");
    for (int i = 0; i <= 5; i++) {
        for (int j = 0; j <= 6; j++) {
            printf("Rellena la matriz [%i] [%i]: ", i, j);
            scanf_s("%i", &matriz[i][j]);
        }
    }
    int sumaMatriz = 0;
    printf("\n");
    for (int i = 0; i <= 5; i++) {
        for (int j = 0; j <= 6; j++) {
            sumaMatriz += matriz[i][j];
        }
    }
    printf("La suma de todos los numeros de la matriz es : %i", sumaMatriz);
    printf("\n");
    system("pause");
}
