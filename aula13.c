#include <stdio.h>

int main()
{
    float numero1;
    float numero2;
    float resultado;
    char operador;

    printf("Informe o numero 1: ");
    scanf("%f", &numero1);
    printf("Informe o numero 2: ");
    scanf("%f", &numero2);
    printf("Informe o operador: ");
    scanf(" %c", &operador);

    switch (operador)
    {
    case '+':
        resultado = numero1 + numero2;
        printf("O resultado da soma é: %.2f\n", resultado);
        break;

    case '-':
        resultado = numero1 - numero2;
        printf("O resultado da subtração é: %.2f\n", resultado);
        break;

    case '*':
        resultado = numero1 * numero2;
        printf("O resultado da multiplicacao é: %.2f\n", resultado);
        break;

    case '/':
        resultado = numero1 / numero2;
        printf("O resultado da divisão é: %.2f\n", resultado);
        break;

    default:
        printf("O operador é invalido.\n");
    }

    return 0;
}
