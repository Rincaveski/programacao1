#include <stdio.h>

int corredores;

void leQntCorredores();
void imprimeQntCorredores();
void setCorredores();

int main()
{
    // leQntCorredores();
    // imprimeQntCorredores();
    setCorredores();

    return 1;
}

void leQntCorredores() {
    printf("Numero de corredores: ");
    scanf("%d", &corredores);
}

void imprimeQntCorredores()
{
    printf("Numero de corredores informados %d\n", corredores);
}

void setCorredores()
{
    int aux;

    printf("Informe o numero de corredores: ");
    scanf("%d", &aux);

    if (aux % 2 != 0)
    {
        corredores = aux;
        imprimeQntCorredores();
    }
    else
    {
        printf("Informe um numero valido\n");
        setCorredores();
    }
}
