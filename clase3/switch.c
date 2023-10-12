#include <stdio.h>
int main() {
    int opcion;

    printf("Ingresa una opcion del 1 al 5: ");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        printf("elegiste la opcion 1");
        break;
    case 2:
        printf("elegiste la opcion 2");
        break;
    case 3:
        printf("elegiste la opcion 3");
        break;
    case 4:
        printf("elegiste la opcion 4");
        break;
    
    default:
        printf("elegiste la opcion no valida");
        break;
    }




    return 0;
}