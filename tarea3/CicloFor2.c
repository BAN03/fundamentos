#include <stdio.h>
#include <math.h>

int main()
{
    int n, resultado = 0;
    printf("Escribe el numero maximo: ");
    scanf("%d", &n);
    printf("Potencia: ");
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            resultado -= pow(i, i);
            printf("-%d^%d", i, i);
        }
        else
        {
            resultado += pow(i, i);
            if (i == 1)
            {
                printf("%d^%d", i, i);
            }
            else
            {
                printf("+%d^%d", i, i);
            }
        }
    }
    printf("\nResultado = %d\n", resultado);
    return 0;
}