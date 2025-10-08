#include <stdio.h>

// Faça um programa que leia três valores inteiros e chame uma função que receba estes 3 valores de entrada e
// retorne eles ordenados, ou seja, o menor valor na primeira variável, o segundo menor valor na variável do
// meio, e o maior valor na última variável. A função deve retornar o valor 1 se os três valores forem iguais e 0 se
// existirem valores diferentes. Exibir os valores ordenados na tela.

int ordenar(int *v1, int *v2, int *v3);
int main()
{
    int v1, v2, v3;
    int resultado;

    printf("\nDIGITE TRES VALORES INTEIROS: ");
    scanf("%d %d %d", &v1, &v2, &v3);

    resultado = ordenar(&v1, &v2, &v3);

    printf("\nVALORES ORDENADOS:\n %d, %d, %d", v1, v2, v3);

    if (resultado == 1)
        printf("\nVALORES IGUAIS.\n");
    else
        printf("\nVALORES DIFERENTES.\n");

    return 0;
}

int ordenar(int *v1, int *v2, int *v3)
{
    int temp;

    if (*v1 == *v2 && *v2 == *v3)
    {
        return 1;
    }

    if (*v1 > *v2)
    {
        temp = *v1;
        *v1 = *v2;
        *v2 = temp;
    }
    if (*v1 > *v3)
    {
        temp = *v1;
        *v1 = *v3;
        *v3 = temp;
    }
    if (*v2 > *v3)
    {
        temp = *v2;
        *v2 = *v3;
        *v3 = temp;
    }
    return 0;
}