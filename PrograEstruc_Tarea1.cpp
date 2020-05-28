#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

//Variables
int day, age, month;
char name[15];

int main()
{
    //Main
    printf("David Alejandro Gonzalez Quezada-20110407.\n");
    printf("Programa que calcula si eres mayo de edad ingresando tu fecha.\n");
    printf("Ingresa tu nombre: ");
    gets_s(name);
    fflush(stdin);
    printf("Ingresa el dia de tu nacimiento: ");
    scanf_s("%i",&day);
    printf("Ingresa el mes de tu nacimiento: ");
    scanf_s("%i",&month);
    printf("Ingresa el año de tu nacimiento en formato de 4 caracteres *AAAA*: ");
    scanf_s("%i",&age);
    system("cls");
    if (age<=2002){
        printf("Hola %s eres mayor de edad, tu fecha de nacimiento es %i/%i/%i\n\n", name, day, month, age);
    }else{
        printf("Hola %s eres menor de edad, tu fecha de nacimiento es %i/%i/%i\n\n", name, day, month, age);
    }
    return 0;
}
