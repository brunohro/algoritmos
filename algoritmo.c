// quais serão os valores de x, y, e p ao final do trecho de código abaixo

#include <stdio.h>

// int main(void)
// {
//     int x, y;
//     int *p;

//     y = 0; // recebe o valor

//     p = &y; // p --> pega o endereço de --> y
//     x = *p; //
//     x = 4;
//     (*p)++;
//     --x;
//     (*p) += x;

//     printf("x: %d\ny: %d\n*p: %d ", x, y, *p);
// }

int main(int argc, char const *argv[])
{
    int x = 10; // inicializa x com valor de 10
    int *p;     // inicializando um ponteiro do tipo inteiro

    p = &x; // p recebe o endereço de x

    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %p\n", &x);
    printf("Valor guardado em p: %p\n", p);
    printf("Valor apontado por p: %d\n", *p);
    return 0;
}
