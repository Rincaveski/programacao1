#include <stdio.h>
#include <math.h>

const float PI = 3.14159;

float areaRetangulo(float base, float altura);
float areaTrinagulo(float base, float altura);
float hipotenusaTrianguloRetangulo(float catetoA, float catetoB);
float areaCirculo(float raio);
float perimetroCirculo(float raio);

int main()
{
    float altura;
    float base;
    int opcao;
    float resultado;
    int qntNumeros;
    float notas = 0;
    float cateto1;
    float cateto2;
    float raio;

    printf("Opções de resolução:\n");
    printf("1. Área de um retângulo.\n");
    printf("2. Área de triângulo.\n");
    printf("3. Hipotenusa\n");
    printf("4. Área de um círculo.\n");
    printf("5. Perímetro de círculo.\n");
    printf("6. Média de números\n");
    printf("9. Sair.\n");
    printf("Digite uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Informe a base: ");
        scanf("%f", &base);
        printf("Informe a altura: ");
        scanf("%f", &altura);

        resultado = areaRetangulo(base, altura);
        printf("Área do retângulo: %.2f\n", resultado);
        break;

    case 2:

        printf("Informe a base: ");
        scanf("%f", &base);
        printf("Informe a altura: ");
        scanf("%f", &altura);

        resultado = areaTrinagulo(base, altura);
        printf("Área do triângulo: %.2f\n", resultado);
        break;

    case 3:

        printf("Informe o primeiro cateto: ");
        scanf("%f", &cateto1);
        printf("Informe o segundo cateto: ");
        scanf("%f", &cateto2);

        resultado = hipotenusaTrianguloRetangulo(cateto1, cateto2);
        printf("Hipotenusa: %.2f\n", resultado);
        break;

    case 4:

        printf("Informe o raio: ");
        scanf("%f", &raio);

        resultado = areaCirculo(raio);
        printf("Área do circulo: %.2f\n", resultado);
        break;

    case 5:

        printf("Informe o raio: ");
        scanf("%f", &raio);

        resultado = perimetroCirculo(raio);
        printf("Perímetro do circulo: %.2f\n", resultado);
        break;

    case 6:
        int i = 0;
        printf("Informe a quantida de numeros para realizar a média: ");
        scanf("%i", &qntNumeros);

        while (i < qntNumeros)
        {
            float nota;
            printf("Informe a nota %i: ", i + 1);
            scanf("%f", &nota);
            notas += nota;
            i++;    
        }
        
        printf("Média de tres numeros: %.2f\n", notas / qntNumeros);
        break;

    case 9:
        printf("Sucesso ao sair.\n");
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

float areaCirculo(float raio)
{
    return (raio * raio) * PI;
}

float perimetroCirculo(float raio)
{
    return raio * PI * 2;
}

float hipotenusaTrianguloRetangulo(float cateto1, float cateto2)
{
    return sqrt((cateto1 * cateto1) + (cateto2 * cateto2));
}
