#include <iostream>

int main()
{
    int opc;
    printf("David Alejandro Gonzalez Quezada\n20110407\n");
    printf("06/03/2020\n");
    printf("Ingresa el valor entero para calcular el triangulo deseado\n");
    printf("1.-Area de un Triangulo\n2.-Triangulo Equilatero\n3.-Triangulo Isosceles\n4.-Triangulo Escaleno\n");
    scanf_s("%i",&opc);
    switch (opc)
    {
    case 1:
        float res1, base, alt;
        printf("OPCION 1 AREA DE UN TRIANGULO\n");
        printf("Ingresa la base de tu triangulo\n");
        scanf_s("%f", &base);
        printf("Ingresa la altura de tu triangulo\n");
        scanf_s("%f", &alt);
        res1 = base * alt / 2;
        printf("El area de tu triangulo es: %f", res1);
        break;
    case 2:
        float res2, lado;
        printf("OPCION 2 AREA DE UN TRIANGULO EQUILATERO\n");
        printf("Ingresa el lado de tu triangulo\n");
        scanf_s("%f", &lado);
        res2 = sqrt(3) / 4 * lado * lado;
        printf("El area de tu triangulo es: %f", res2);
        break;
    case 3:
        float res3, ladoa, ladob;
        printf("OPCION 3 AREA DE UN TRIANGULO ISOSCELES\n");
        printf("Ingresa el lado A de tu triangulo\n");
        scanf_s("%f", &ladoa);
        printf("Ingresa el lado B de tu triangulo\n");
        scanf_s("%f", &ladob);
        res3 = ladob * sqrt(ladoa * ladoa - ladob * ladob / 4) / 2;
        printf("El area de tu triangulo es: %f", res3);
        break;
    case 4:
        float res4, ladoA, ladoB, ladoC, per, a, b, c, perf;
        printf("OPCION 4 AREA DE UN TRIANGULO ESCALENO\n");
        printf("Ingresa el lado A de tu triangulo\n");
        scanf_s("%f", &ladoA);
        printf("Ingresa el lado B de tu triangulo\n");
        scanf_s("%f", &ladoB);
        printf("Ingresa el lado C de tu triangulo\n");
        scanf_s("%f", &ladoC);
        printf("Ingresa la mitad del perimetro de tu triangulo\n");
        scanf_s("%f", &per);
        a = per - ladoA;
        b = per - ladoB;
        c = per - ladoC;
        perf = per * a * b * c;
        res4 = sqrt(perf);
        printf("El area de tu triangulo es: %f", res4);
        break;
    default:
        break;
    }
    return 0;
}