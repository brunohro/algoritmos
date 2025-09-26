#include <stdio.h>

void swap(int *a, int *b);

int main(int argc, char const *argv[])
{
    int a = 10, b = 20;

    printf("\n ANTES DA TROCA: \n");
    printf("Valor de a: %d\nValor de b: %d\n", a, b);

    swap(&a, &b); // passando endereço de memória de a e de b -> através do &

    printf("\n ANTES DA TROCA: \n");
    printf("Valor de a: %d\nValor de b: %d\n", a, b);

    return 0;
}

void swap(int *a, int *b)
{
    int variavel_temporaria = *a;
    *a = *b;
    *b = variavel_temporaria;
}
