#include <stdio.h>
#include <stdbool.h>

// Assinatura das funçoes
void impressao();
int entradaDeArgumentos();
void numeroImparPar();
void validaNomeEIdade();
void areaDoTriangulo();
void areaDoTrianguloMaior25();

// Função principal
int main(int argc, char *argv[]) {
    // entradaDeArgumentos(argc, argv);
    // numeroImparPar();
    // validaNomeEIdade();
    areaDoTriangulo();
    areaDoTrianguloMaior25();
}

// Declaração das funções

// Função que recebe n argumentos e informa qual a posição e o argumento dele
int entradaDeArgumentos(int argc, char *argv[]) 
{
    impressao();

    // Valida se temos mais que um argumento
    if (argc > 1)
    {
        // Imprime na tela a quantidade de argumentos
        printf("Número de argumentos: %d\n", argc);
        
        // Loop que informa o valor do argumento e a possição dele 
        for (int i = 0; i < argc; i++)
        {
            // Valida se é o ultimo argumento
            if (i != (argc - 1))
            {
                printf("Argumento %d: %s, ", i, argv[i]);
            }
            else
            {
                printf("Argumento %d: %s\n", i, argv[i]);
            }
            
        }
        // retorna 0 pois apresentou sucesso e a função é int
        return 0;
    // Caso contrario ele informa somente um 
    } else 
    {
        // Informa a quantidade de argumentos e o argumento
        printf("Número de argumentos: %d\n", argc);
        printf("Argumento %d: %s\n", argc, argv[0]);
        
        // retorna 0 pois apresentou sucesso e a função é int
        return 0;
    }
}

// Imprime Olá mundo
void impressao() 
{
    printf("Olá mundo!\n");
}

// Valida se um número é par ou ímpar
void numeroImparPar() 
{
    int num;

    printf("Progama de par ou ímpar\n\n");
    printf("Entre com um número: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d é par\n", num);
    }
    else
    {
        printf("%d é ímpar\n", num);
    }
    
}

void validaNomeEIdade()
{
    // Cria um array de caracteres para o nome e um int para a idade
    char nome[1024];
    int idade;

    // Inicializa o nome e a idade
    printf("Seu nome: ");
    scanf("%s", nome);
    printf("Olá %s!\n", nome);
    printf("Sua idade: ");
    scanf("%d", &idade);

    // Valida se a pessoa é idosa
    if (idade >= 65)
    {
        printf("Você é idoso!\n");
    }
    // Valida se a pessoa é tem entre 18 e 64 anos
    else if (idade >= 18)
    {
        printf("Você é maior de idade\n");
    }
    // Valida se a pessoa é menor de idade
    else
    {
        printf("Você é menor de idade\n");
    }
}

void areaDoTriangulo() 
{
    // inicializa a altura, area e base do triangulo
    float altura, area, base;

    // Recebe a altura e base
    printf("Informe a altura: ");
    scanf("%f", &altura);
    printf("Informe a base: ");
    scanf("%f", &base);

    // Aplica a formula para descobrir a área
    area = (altura * base) / 2;

    // Informa a área
    printf("A área do tringulo é: %2.f\n", area);
}

void areaDoTrianguloMaior25()
{
    // inicializa a altura, area e base do triangulo
    float altura, area, base;

    // Recebe a altura e base
    printf("Informe a altura: ");
    scanf("%f", &altura);
    printf("Informe a base: ");
    scanf("%f", &base);

    // Aplica a formula para descobrir a área
    area = (altura * base) / 2;

    printf("%d\n", area > 25);
}
