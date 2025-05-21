#include <stdio.h>
#include <math.h>

const float PI = 3.14159; 

float areaRetangulo(float base, float altura);
float areaTrinagulo(float base, float altura);
float areaTrinaguloRetangulo(float cateto1, float cateto2);
float areaCirculo(float raio);
float perimetroCirculo(float raio);
float mediaTresNumeros(float num1, float num2, float num3);
float hipotenusaTrianguloRetangulo(float catetoA, float catetoB);

int main()
{
    int opcao;
    float resultado;

    printf("Opções de resolução:\n");
    printf("1. Área de um retângulo.\n");
    printf("2. Área de triângulo qualquer.\n");
    printf("3. Área de triângulo retângulo.\n");
    printf("4. Área de círculo.\n");
    printf("5. Perímetro de círculo.\n");
    printf("6. Média de três números de ponto flutuante.\n");
    printf("7. Hipotenusa de um triângulo retângulo.\n");
    printf("0. Sair.\n");
    printf("Selecione uma opção: ");
    scanf("%d", &opcao);

    
    if (opcao == 1)
    {
        float base;
        float altura;

        printf("Informe a base: ");
        scanf("%f", &base);
        printf("Informe a altura: ");
        scanf("%f", &altura);

        resultado = areaRetangulo(base, altura);
        printf("Área do retângulo: %.2f\n", resultado);
    }

    if (opcao == 2)
    {
        float base;
        float altura;

        printf("Informe a base: ");
        scanf("%f", &base);
        printf("Informe a altura: ");
        scanf("%f", &altura);

        resultado = areaTrinagulo(base, altura);
        printf("Área do triângulo: %.2f\n", resultado);
    }

    if (opcao == 3)
    {
        float cateto1;
        float cateto2;

        printf("Informe o primeiro cateto: ");
        scanf("%f", &cateto1);
        printf("Informe o segundo cateto: ");
        scanf("%f", &cateto2);

        resultado = areaTrinaguloRetangulo(cateto1, cateto2);
        printf("Área do triângulo retangulo: %.2f\n", resultado);
    }

    if (opcao == 4)
    {
        float raio;

        printf("Informe o raio: ");
        scanf("%f", &raio);

        resultado = areaCirculo(raio);
        printf("Área do circulo: %.2f\n", resultado);
    }

    if (opcao == 5)
    {
        float raio;

        printf("Informe o raio: ");
        scanf("%f", &raio);

        resultado = perimetroCirculo(raio);
        printf("Perímetro do circulo: %.2f\n", resultado);
    }

    if (opcao == 6)
    {
        float numero1;
        float numero2;
        float numero3;

        printf("Informe o numero 1: ");
        scanf("%f", &numero1);
        printf("Informe o numero 2: ");
        scanf("%f", &numero2);
        printf("Informe o numero 3: ");
        scanf("%f", &numero3);

        resultado = mediaTresNumeros(numero1, numero2, numero3);
        printf("Média de tres numeros: %.2f\n", resultado);
    }

    if (opcao == 7)
    {
        float cateto1;
        float cateto2;

        printf("Informe o primeiro cateto: ");
        scanf("%f", &cateto1);
        printf("Informe o segundo cateto: ");
        scanf("%f", &cateto2);

        resultado = hipotenusaTrianguloRetangulo(cateto1, cateto2);
        printf("Hipotenusa: %.2f\n", resultado);
    }

    if (opcao < 0 || opcao > 7)
    {
        printf("Informe uma opção valida\n\n");
        main();
    }
        
    return 0;

}

float areaRetangulo(float base, float altura)
{
    return base * altura;
}

float areaTrinagulo(float base, float altura)
{
    return (base * altura) / 2;
}

float areaTrinaguloRetangulo(float cateto1, float cateto2)
{
    return (cateto1 * cateto2) / 2;
}

float areaCirculo(float raio)
{
    return (raio * raio) * PI;
}

float perimetroCirculo(float raio)
{
    return raio * PI * 2;
}

float mediaTresNumeros(float num1, float num2, float num3)
{
    return (num1 + num2 + num3) / 3;
}

float hipotenusaTrianguloRetangulo(float catetoA, float catetoB)
{
    return sqrt((catetoA * catetoA) + (catetoB * catetoB));
}
