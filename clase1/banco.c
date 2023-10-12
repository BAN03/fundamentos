#include "stdio.h"
int main()
{
    int inversion = 0, final;
    printf("cuanto desea invertir: ");
    scanf("%d", &inversion);

    final = inversion + (inversion* 0.02);
    printf("despues de un mes el dinero en su cuenta es de: %d \n\n", final);

    return 0;
}