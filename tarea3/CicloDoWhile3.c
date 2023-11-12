#include <stdio.h>
#include <math.h>

float checador(int i);
int main()
{
    int i = 1, n;
    printf("Cuantos valores se introduciran: ");
    scanf("%d", &n);
    do
    {
        printf("El resultado de Y es: %.2f\n", checador(i));
        i++;
    } while (i <= n);

    return 0;
}
float checador(int i)
{
    int y;
    printf("Ingresa el valor %d de Y: ", i);
    scanf("%d", &y);
    if (0 < y && y <= 15)
    {
        return (pow(y, 2)) + 15;
    }
    if (15 < y && y <= 30)
    {
        return pow(y, 3) - pow(y, 2) + 12;
    }
    if (30 < y && y <= 60)
    {
        return 4 * pow(y, 3) / pow(y, 2) + 8;
    }
    if (20 < y && y <= 0)
    {
        return 0;
    }
}