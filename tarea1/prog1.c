#include "stdio.h"

int main (){
    float area, perimetro, base, altura, lado1, lado2, lado3;

    printf("Escribe el lado 1 del triangulo: ");
    scanf("%f", &lado1);
    printf("Escribe el lado 2 del triangulo: ");
    scanf("%f", &lado2);
    printf("Escribe el lado 3 del triangulo: ");
    scanf("%f", &lado3);

    printf("Escribe la base del triangulo: ");
    scanf("%f", &base);

    printf("Escribe la altura del triangulo: ");
    scanf("%f", &altura);

    area=(base * altura)/2;
    perimetro=lado1+lado2+lado3;
    
    printf("El area del triangulo es: %.2f\n", area);
    printf("El perimetro del triangulo es: %.2f\n", perimetro);
    return 0;
}