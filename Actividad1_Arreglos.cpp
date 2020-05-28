#include <iostream>
#include <stdlib.h>
#include <stdio.h>
char nombres[31][31];
int i, a, b, c, d, calificaciones[31], n=30, mayor, min;
float resultado;
int pedirNombres() {
    for (i = 1; i <= n; i++)
    {
        printf("Escribe el nombre del alumno numero %i: ", i);
        gets_s(nombres[i]);
        printf("\n");
    }
    return 0;
}
int pedirCalificaciones() {
    for (b = 1; b <= n; b++)
    {
        printf("Escribe la calificacion de tu alumno: %s\n", nombres[b]);
        scanf_s("%i", &calificaciones[b]);
    }
    return 0;
}
int resultados() {
    mayor = calificaciones[0];
    min = calificaciones[0];
    do {
        if (calificaciones[d] < min) {
            min = calificaciones[d];
        }
        if (calificaciones[d] > mayor) {
            mayor = calificaciones[d];
        }
        d++;
    } while (d <= n);

    for (a = 1; a <= n; a++) {
        resultado = resultado + calificaciones[a];
    }
    resultado = resultado / 5;
    printf("El numero mayor es: %i\n", mayor);
    printf("El numero menor es: %i\n", min);
    printf("Promedio grupal: %f\n", resultado);
    return 0;
}
int main()
{
    printf("David Alejandro Gonzalez Quezada\n");
    printf("15100516\n");
    printf("Actividad 1 Arreglos\n");
    printf("Programa que lee 30 alumnos junto con sus calificaciones.\n");
    printf("Ademas muestra el promedio del grupo y el alumno con mas alto y bajo promedio.\n");
    system("pause");
    system("cls");
    printf("Escribe los nombres de los alumnos\n");
    pedirNombres();
    system("cls");
    pedirCalificaciones();
    resultados();
    system("pause");
    system("pause");
}