#include <stdio.h>

int main () {
    int i = 0, veces;
    printf ("Cuantas veces: ");
    scanf ("%d", &veces);
    while (i < veces)
    {
        printf ("hola %d\n", i + 1);
        i++;
    }
    

    return 0;
}