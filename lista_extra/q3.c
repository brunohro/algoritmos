#include <stdio.h>

void TrocarValores(int *a, int *b);
int main(int argc, char const *argv[])
{
    int a = 10, b = 20;

    printf("\n ANTES DA TROCA: \n");
    printf("VALOR DE A: %d\n", a);
    printf("VALOR DE B: %d\n", b);

    TrocarValores(&a, &b);

    printf("\n DEPOIS DA TROCA: \n");
    printf("VALOR DE A: %d\n", a);
    printf("VALOR DE B: %d\n", b);
    return 0;
}

void TrocarValores(int *a, int *b)
{
    int v_temp = *a;
    *a = *b;
    *b = v_temp;
}
