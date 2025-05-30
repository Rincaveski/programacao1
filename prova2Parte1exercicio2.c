#include <stdio.h>

float calcule_resistencia_serie(float r1, float r2, float r3);
float calcule_resistencia_paralelo(float r1, float r2, float r3);

int main() 
{
    float r1, r2, r3;

    printf("Entre com as tres resistencias: ");
    scanf("%f %f %f", &r1, &r2, &r3);

    if (r1 > 0&& r2 > 0 && r3 > 0)
    {
        printf("Resistencia equivalente em série: %.2f ohm\n", (r1 + r2 + r3));
        printf("Resistencia equivalente em paralelo: %.2f ohm\n", 1 / (1 / r1 + 1 / r2 + 1 / r3));
    }
    else
    {
        printf("Resistência(s) inválida(s)\n");
    }
}

float calcule_resistencia_serie(float r1, float r2, float r3)
{
    return r1 + r2 + r3;
}

float calcule_resistencia_paralelo(float r1, float r2, float r3)
{
    return 1 / (1 / r1 + 1 / r2 + 1 / r3);
}
