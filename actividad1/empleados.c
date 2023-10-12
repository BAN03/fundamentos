#include <stdio.h>
#include <string.h>
int main() {

    int horas_dia, horas_noche, extra_dia, extra_noche;
    float pago;
    char comprobacion[50];

    printf("trabajaste de dia [si/no]? ");
    scanf("%s", &comprobacion);
    if (strcmp(comprobacion, "si") == 0) {
        printf("cuantas horas trabajaste: ");
        scanf("%d", &horas_dia);
        char comprobacion[50] = "no";
    }
    printf("trabajaste de noche [si/no]? ");
    scanf("%s", &comprobacion);
    if (strcmp(comprobacion, "si") == 0) {
        printf("cuantas horas trabajaste: ");
        scanf("%d", &horas_noche);
        char comprobacion[50] = "no";
    }
    printf("trabajaste el domingo de dia [si/no]? ");
    scanf("%s", &comprobacion);
    if (strcmp(comprobacion, "si") == 0) {
        printf("cuantas horas trabajaste: ");
        scanf("%d", &extra_dia);
        char comprobacion[50] = "no";
    }
    printf("trabajaste el domingo de noche [si/no]? ");
    scanf("%s", &comprobacion);
    if (strcmp(comprobacion, "si") == 0) {
        printf("cuantas horas trabajaste: ");
        scanf("%d", &extra_noche);
        char comprobacion[50] = "no";
    }
    pago = (horas_dia*500) + (horas_noche* 800) + (extra_dia * 700) + (extra_noche * 1100);

    printf("Se le va a pagar: $%.2f", pago);
    return 0;
}
