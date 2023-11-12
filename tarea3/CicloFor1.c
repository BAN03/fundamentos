#include <stdio.h>

float Altura(int i);
float Peso(int i);
int main()
{
    int n, i = 1, sexo, hombres, mujeres;
    float altura_total_hombres, altura_total_mujeres,
        peso_total_hombres, peso_total_mujeres;
    printf("Cuantas personas se van a introducir: ");
    scanf("%d", &n);
    for (i; i <= n; i++)
    {
        printf("Cual es el sexo de la persona %d [Hombre:1 / Mujer:0]: ", i);
        scanf("%d", &sexo);
        if (sexo == 1)
        {
            hombres++;
            altura_total_hombres = Altura(i);
            peso_total_hombres = Peso(i);
        }
        else
        {
            mujeres++;
            altura_total_mujeres = Altura(i);
            peso_total_mujeres = Peso(i);
        }
    }
    altura_total_hombres /= n;
    peso_total_hombres /= n;
    altura_total_mujeres /= n;
    peso_total_mujeres /= n;
    printf("HOMBRES: %d\nPromedio altura: %.2f\nPromedio peso: %.2f\n", hombres, altura_total_hombres, peso_total_hombres);
    printf("MUJERES: %d\nPromedio altura: %.2f\nPromedio peso: %.2f\n", mujeres, altura_total_mujeres, peso_total_mujeres);
    return 0;
}
float Altura(int i)
{
    float altura, altura_total;
    printf("Cual es la altura de la persona %d: ", i);
    scanf("%f", &altura);
    altura_total += altura;
    return altura_total;
}
float Peso(int i)
{
    float peso, peso_total;
    printf("Cual es el peso de la persona %d: ", i);
    scanf("%f", &peso);
    peso_total += peso;
    return peso_total;
}
