// quais serão os valores de x, y, e p ao final do trecho de código abaixo

#include <stdio.h>

int main(void)
{
    int x, y;
    int *p;

    y = 0; // recebe o valor

    p = &y; // p --> pega o endereço de --> y
    x = *p; //
    x = 4;
    (*p)++;
    --x;
    (*p) += x;

    printf("x: %d\ny: %d\n*p: %d ", x, y, *p);
}