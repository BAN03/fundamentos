#include <stdio.h>

int main () {
    float x, resultado;
    printf("Ingresa el valor de x: ");
    scanf("%f", &x);
    if (x < 3) {
        resultado = x * x - 4;
    }
    if (3 <= x && x < 10) {
        resultado = x + 7;
    printf("%f",x);

    }
    if (10 <= x && x < 20) {
        resultado = 3*x + 1;
    }
    if (x >= 20) {
        resultado = 1;
    }
    printf("\nel valor de f(%.2f) es: %.2f", x, resultado);
    return 0;
}