#include <iostream>
#include <stdio.h>
char nombres[30][30];
int PersonCont = 0, rep, temp[30], tempCont = 0, edad[30], edadCont = 0;
int main()
{
    printf("David Alejandro Gonzalez Quezada.\n");
    printf("15100516.\n");
    printf("Actividad 2 Arreglos.\n");
    printf("Programa que lee la temperatura de las personas.\n");
    printf("Ademas muestras a las personas con mas de 39 grados y un listado de todas las personas ingresadas.\n");
    system("pause");
    system("cls");

    do {
        printf("Ingresa el NOMBRE de la persona: ");
        fseek(stdin, 0, SEEK_END);
        gets_s(nombres[PersonCont]);
        printf("Ingresa la EDAD de la persona ingresada: ");
        scanf_s("%i", &edad[edadCont]);
        printf("Ingresa la TEMPERATURA de la persona ingresada: ");
        scanf_s("%i", &temp[tempCont]);
        edadCont++;
        PersonCont++;
        tempCont++;
        printf("\n");
        printf("Quieres ingresar los datos de otra persona?\n");
        printf("1=SI, 2=NO\n");
        scanf_s("%i", &rep);
        printf("\n");
        system("cls");
    } while (rep == 1);

    printf("--Todas las personas ingresadas con mas de 39 grados--\n");
    for (int a = 0; a[temp] >= 39; a++) {
        printf("Nombre: %s, edad: %i, temperatura: %i\n", nombres[a], temp[a], edad[a]);
    }

    printf("\n");
    printf("--Todas las personas ingresadas--\n");
    for (int a = 0; a <= PersonCont; a++) {
        printf("Nombre: %s, edad: %i, temperatura: %i\n", nombres[a], temp[a], edad[a]);
    }
}