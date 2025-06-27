#include <stdio.h>

int divide_inteiro(int a, int b);
int maior_de_2(float a, float b);
int divide_2_par_ou_impar(int *pont);

int main()
{
    int opcao;
    int a;
    int b;

    printf("Funções:\n");
    printf("(1) divide_inteiro:\n");
    printf("(2) maior_de_2:\n");
    printf("(3) divide_2_par_ou_impar:\n");
    printf("(4) divide_n_inteiro:\n");
    printf("(5) multiplica_matriz:\n");
    printf("(6) soma_matrizes:\n");
    printf("(7) ordena_matriz_3:\n");
    printf("(8) procura_valor:\n");
    printf("(9) procura_valores:\n");
    printf("(10) ordena_2_matrizes_3:\n");
    printf("(11) ordena_2_matrizes_n:\n");
    printf("(12) ordena_matriz:\n");
    printf("Entre com o número de uma função: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Informe os valores em uma linha: ");
        scanf("%d %d", &a, &b);
        printf("Divisão com arendodamento para o inteiro mais próximo entre %d e %d é :%d\n", a, b, divide_inteiro(a, b));
        break;
    case 2:
        printf("Informe os valores em uma linha: ");
        scanf("%d %d", &a, &b);
        printf("O maior número entre %d e %d é: %d\n", a, b, maior_de_2(a, b));
        break;
    case 3:
        printf("Informe o valor do número: ");
        scanf("%d", &a);
        int resultado = divide_2_par_ou_impar(&a);
        printf("O retorno é: %d\nO novo parametro é %d\n", resultado, a);
        break;
    case 4:
        // Todo
        break;

    case 5:
        // Todo
        break;
    case 6:
        // Todo
        break;
    case 7:
        // Todo
        break;
    case 8:
        // Todo
        break;
    case 9:
        // Todo
        break;
    case 10:
        // Todo
        break;
    case 11:
        // Todo
        break;
    case 12:
        // Todo
        break;

    default:
        break;
    }

    return 0;
}

int divide_inteiro(int a, int b)
{
    float divisaoComFloat = (float)a / (float)b;
    int divisaoComInt = a / b;
    float diferenca = divisaoComFloat - divisaoComInt;
    if (diferenca > 0.5f)
    {
        return divisaoComInt + 1;
    }
    else
    {
        return divisaoComInt;
    }
}

int maior_de_2(float a, float b)
{
    if (a > b)
    {
        return a;
    }

    return b;
}

int divide_2_par_ou_impar(int *pont) {
    if(*pont % 2 == 0) 
    {
        *pont = (int) *pont / 2;
        return 0;
    }
    else 
    {
        *pont = (int) *pont / 2;
        return 1;
    }
}
