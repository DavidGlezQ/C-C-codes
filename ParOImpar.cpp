#include <iostream>

int main()
{
    int num=0, res=0;
    printf("David Alejandro Gonzalez Quezada\n20110407\n");
    printf("14/03/2020\n");
    printf("Ingresa el numero\n");
    scanf_s("%i", &num);
    res = num % 2;
    if (res==0) {
        printf("Tu numero es par\n");
    }
    else {
        printf("Tu numero es impar\n");
    }   
    return 0;
}