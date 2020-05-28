#include <iostream>
int dia = 0;

void pedirdia() {
    printf("Ingresa el dia de nacimiento: ");
    scanf_s("%i", &dia);
}

int main()
{
    int mes;
    printf("David Alejandro Gonzalez Quezada 20110407\n");
    printf("**Programa Horoscopo**\n");
    printf("Ingresa tu mes de nacimiento correspondiente al valor decimal:\n");
    printf("Enero=1\nFebrero=2,Marzo=3\nAbril=4\nMayo=5\nJunio=6,Julio=7\nAgosto=8\nSeptiembre=9\nOctubre=10\nNoviembre=11\nDiciembre=12\n");
    scanf_s("%i", &mes);
    switch (mes)
    {
    case 1:
        printf("Mes Enero\n");
        pedirdia();
        if (dia <= 19) {
            printf("Tu signo sodiacal es Capricornio\n");
        }
        else {
            printf("Tu signo sodiacal es Acuario\n");
        }
        break;
    case 2:
        printf("Mes Febrero\n");
        pedirdia();
        if (dia >= 19) {
            printf("Tu signo sodiacal es Piscis\n");
        }
        else {
            printf("Tu signo sodiacal es Acuario\n");
        }
        break;
    case 3:
        printf("Mes Marzo\n");
        pedirdia();
        if (dia <= 20) {
            printf("Tu signo sodiacal es Piscis\n");
        }
        else {
            printf("Tu signo sodiacal es Aries\n");
        }
        break;
    case 4:
        printf("Mes Abril\n");
        pedirdia();
        if (dia <= 21) {
            printf("Tu signo sodiacal es Aries\n");
        }
        else {
            printf("Tu signo sodiacal es Tauro\n");
        }
        break;
    case 5:
        printf("Mes Mayo\n");
        pedirdia();
        if (dia <= 20) {
            printf("Tu signo sodiacal es Tauro\n");
        }
        else {
            printf("Tu signo sodiacal es Geminis\n");
        }
        break;
    case 6:
        printf("Mes Junio\n");
        pedirdia();
        if (dia <= 21) {
            printf("Tu signo sodiacal es Geminis\n");
        }
        else {
            printf("Tu signo sodiacal es Cancer\n");
        }
        break;
    case 7:
        printf("Mes Julio\n");
        pedirdia();
        if (dia <= 21) {
            printf("Tu signo sodiacal es Cancer\n");
        }
        else {
            printf("Tu signo sodiacal es Leo\n");
        }
        break;
    case 8:
        printf("Mes Agosto\n");
        pedirdia();
        if (dia <= 23) {
            printf("Tu signo sodiacal es Leo\n");
        }
        else {
            printf("Tu signo sodiacal es Virgo\n");
        }
        break;
    case 9:
        printf("Mes Septiembre\n");
        pedirdia();
        if (dia <= 23) {
            printf("Tu signo sodiacal es Virgo\n");
        }
        else {
            printf("Tu signo sodiacal es Libra\n");
        }
        break;
    case 10:
        printf("Mes Octubre\n");
        pedirdia();
        if (dia <= 23) {
            printf("Tu signo sodiacal es Libra\n");
        }
        else {
            printf("Tu signo sodiacal es Escorpio\n");
        }
        break;
    case 11:
        printf("Mes Noviembre\n");
        pedirdia();
        if (dia <= 23) {
            printf("Tu signo sodiacal es Escorpio\n");
        }
        else {
            printf("Tu signo sodiacal es Sagitario\n");
        }
        break;
    case 12:
        printf("Mes Diciembre\n");
        pedirdia();
        if (dia <= 23) {
            printf("Tu signo sodiacal es Sagitario\n");
        }
        else {
            printf("Tu signo sodiacal es Capricornio\n");
        }
        break;
    default:
        printf("Ingrese un valor correspondiente al mes de su nacimiento 1-12\n");
        break;
    }
    return 0;


    /*-Aries: del 21 de marzo al 20 de abril
    -Tauro: del 20 de abril al 20 de mayo
    -Géminis: del 21 de mayo al 20 de junio
    -Cáncer: del 21 de junio al 22 de julio
    -Leo: del 23 de julio al 22 de agosto
    -Virgo: del 23 de agosto al 22 de septiembre
    -Libra: del 23 de septiembre al 23 de octubre
    -Escorpio: del 23 de octubre al 22 de noviembre
    -Sagitario: del 23 de noviembre al 21 de diciembre
    -Capricornio: del 22 de diciembre al 19 de enero
    -Acuario: del 20 de enero al 18 de febrero
    -Piscis: del 19 de febrero al 20 de marzo*/

}