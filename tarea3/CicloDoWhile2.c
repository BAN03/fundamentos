#include <stdio.h>
#include <math.h>

int main()
{
    int index = 1, n, resultado = 0;
    printf("Escribe el numero maximo: ");
    scanf("%d", &n);
    printf("Potencia: ");
    do
    {
        if (index % 2 == 0)
        {
            resultado -= pow(index, index);
            printf("-%d^%d", index, index);
        }
        else
        {
            resultado += pow(index, index);
            if (index == 1)
            {
                printf("%d^%d", index, index);
            }
            else
            {
                printf("+%d^%d", index, index);
            }
        }
        index++;
    } while (index <= n);
    printf("\nResultado = %d\n", resultado);
    return 0;
}