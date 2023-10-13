#include <stdio.h>
int main () {
    int num;
    printf ("Numero: ");
    scanf ("%d", &num);
    (num > 0) ? printf ("Positivo") : num == 0 ? printf("Neutro") : printf("Negativo");
    return 0;
}