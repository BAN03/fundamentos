#include <stdio.h>
int main () {
    float distancia, dias, precio;

    printf ("Ingresa la distancia en Km a recorrer: ");
    scanf ("%f", &distancia);
    printf ("Ingresa el tiempo de estancia en dias: ");
    scanf ("%f", &dias);
    precio = distancia * 0.19;
    if (dias > 10 && distancia > 500) {
        precio = precio - (precio * 0.20);
    } else {
        precio = precio;
    }
    printf("El precio del ticket de ida y vuelta es de: %.2f\n", precio);

    return 0;
}