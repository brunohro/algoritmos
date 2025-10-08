// Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada
// posição desse array.

#include <stdio.h>

#define MAX 10
int main(int argc, char const *argv[])
{
    float array[MAX] = {1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0};
    float *ptr;

    ptr = array;

    for (int i = 0; i < MAX; i++)
    {
        printf("\n posicao %i: %.2f", i, *ptr);
        ptr++;
    }
    return 0;
}
