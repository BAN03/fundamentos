#include "stdio.h"

int main () {
    float radio, altura, area, liquido;
    float pi = 3.1416;
    printf("Digite el radio en metros: ");
    scanf("%f", &radio);
    printf("Digite la altura en metros: ");
    scanf("%f", &altura);
    // area de la base del recipiente
    area = (radio * radio) * pi;
    area = area * altura;

    liquido = 0.001 * area;
    printf("El liquido total que cabe en el recipiente es: %.2f L\n", liquido);
    return 0;
}
