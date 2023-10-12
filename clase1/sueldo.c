#include "stdio.h"
int main()
{
    float venta1, venta2, venta3, sueldo_base, comisiones, pago_final;
    printf("cuanto es tu sueldo base: ");
    scanf("%f", &sueldo_base);

    printf("cuanto fue de tu primer venta del mes: ");
    scanf("%f", &venta1);

    printf("cuanto fue de tu segunda venta del mes: ");
    scanf("%f", &venta2);

    printf("cuanto fue de tu tercera venta del mes: ");
    scanf("%f", &venta3);

    
    comisiones = venta1 + venta2 + venta3;
    comisiones = (comisiones)* 0.10;
    pago_final = sueldo_base + comisiones;
    
    printf("la comision de sus tres ventas es de: %.2f\n", comisiones);
    printf("el pago final con comisiones es de: %.2f\n\n", pago_final);
    return 0;
}
