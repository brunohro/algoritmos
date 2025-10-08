// Crie um programa que contenha uma função que permita passar por parâmetro dois números inteiros A e B.
// A função deverá calcular a soma entre estes dois números e armazenar o resultado na variável A. Esta função
// não deverá possuir retorno, mas deverá modificar o valor do primeiro parâmetro. Imprima os valores de A e B
// na função ao principal.

#include <stdio.h>

void soma_valores(int a, int b, int *ptr);
int main(void)
{
    int a = 10, b = 20;
    int *ptr;

    ptr = &a;

    printf("\n** VALOR DE A: %d", a);
    printf("\n** VALOR DE B: %d", b);
    printf("\n==================");
    soma_valores(a, b, ptr);
    printf("\n** VALOR DE A: %d", a);
    printf("\n** VALOR DE B: %d", b);

    return 0;
}

void soma_valores(int a, int b, int *ptr)
{
    *ptr = a + b;
}
