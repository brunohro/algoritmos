// Escreva uma função que receba um array de inteiros V e os endereços de duas variáveis inteiras, min e max, e
// armazene nessas variáveis o valor mínimo e máximo do array. Escreva também uma função ao main que use
// essa função.

#include <stdio.h>

#define INF 100000.0
void min_max(int *v, int min, int max, int N);
int main(void)
{
    int array[5] = {1, 2, 3, 4, 5};
    int *ptr;
    int max, min;

    ptr = array;
    min_max(ptr, min, max, 5);

    return 0;
}
void min_max(int *v, int min, int max, int N)
{
    min = INF;
    max = 0;
    for (int i = 0; i < N; i++)
    {
        if (*v < min)
        {
            min = *v;
        }
        if (*v > max)
        {
            max = *v;
        }
        v++;
    }

    printf("\nValor min: %d", min);
    printf("\nValor max: %d", max);
}
