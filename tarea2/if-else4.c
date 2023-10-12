#include <stdio.h>

/*
Los empleados de una fábrica trabajan en dos turnos: diurno y nocturno. Se desea calcular el pago por día de acuerdo con los siguientes puntos:
1. la tarifa de las horas diurnas es de 20 pesos
2. la tarifa de las horas nocturnas es de 30 pesos
Construya un programa que muestre el pago que le corresponde a un empleado que trabaja n horas en un turno diurno o nocturno.*/
int main() {
    int turno;
    float diurnas = 20, nocturnas = 30, horas, total;
    printf("Trabajas de dia o de noche? \nIngresa 1 para diurno \nIngresa 2 para nocturno \nTurno: ");
    scanf("%d", &turno);
    if (turno == 1) {
        printf("Ingresa las horas trabajadas: ");
        scanf("%f", &horas);
        total = horas * diurnas;
    } else {
        printf("Ingresa las horas trabajadas: ");
        scanf("%f", &horas);
        total = horas * nocturnas;
    }
    printf("Se te pagara: %.2f\n", total);
    return 0;
}