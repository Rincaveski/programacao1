#include <stdio.h>

float imposto(float doacao);

int main() 
{
    float valorDoacao;
    printf("Informe o valor da doação: ");
    scanf("%f", &valorDoacao);
    printf("Valor do imposto: %.2f\n", imposto(valorDoacao));

    return 0;
}

float imposto(float doacao)
{
    if (doacao <= 20000)
    {
        printf("%f\n", doacao * 0.01);
        return doacao * 0.01;
    }

    if (doacao > 20000 && doacao <= 50000)
    {
        printf("%f\n", 20000 * 0.01 + (doacao - 20000) * 0.03);
        return 20000 * 0.01 + (doacao - 20000) * 0.03;
    }

    if (doacao > 50000 && doacao <= 150000)
    {
        printf("%f\n", 20000 * 0.01 + (doacao - 20000) * 0.03);
        return 20000 * 0.01 + 30000 * 0.03 + (doacao - 50000) * 0.05;
    }
    
    if (doacao > 150000)
    {
        printf("%f\n", 20000 * 0.01 + (doacao - 20000) * 0.03);
        return 20000 * 0.01 + 30000 * 0.03 + 100000 * 0.05 + (doacao - 150000) * 0.07;
    }
}
