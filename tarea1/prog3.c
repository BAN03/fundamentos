#include "stdio.h"

int main () {
    float presupuesto, servicios = 0.23, docentes = 0.55, administrativo = 0.10, difusion = 0.04, general = 0.08;
    printf ("Ingrese el presupuesto total: ");
    scanf ("%f", &presupuesto);

    servicios = servicios * presupuesto;
    docentes = docentes * presupuesto;
    administrativo = administrativo * presupuesto;
    difusion = difusion * presupuesto;
    general = general * presupuesto;

    printf("El presupuesto destinado para servicios es de: %.2f \n", servicios);
    printf("El presupuesto destinado para docentes es de: %.2f \n", docentes);
    printf("El presupuesto destinado para administrativo es de: %.2f \n", administrativo);
    printf("El presupuesto destinado para difusión es de: %.2f \n", difusion);
    printf("El presupuesto destinado para gastos generales es de: %.2f \n", general);
    
    return 0;
}