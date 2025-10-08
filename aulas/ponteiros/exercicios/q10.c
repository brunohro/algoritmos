// Implemente uma função que receba como parâmetro um array de números reais de tamanho N e retorne
// quantos números negativos há nesse array. Essa função deve obedecer ao protótipo: int negativos(float *vet,
// int N);

#include <stdio.h>

int negativos(float *vet, int N);
int main()
{
    float array[5] = {-1.2, -1.3, 1.4, 1.5, 1.6};
    float *ptr;

    ptr = array;
    negativos(ptr, 5);
    return 0;
}
int negativos(float *vet, int N)
{
    int contador = 0;
    for (int i = 0; i < N; i++)
    {
        if (*vet < 0)
        {
            contador++;
        }
        vet++;
    }

    printf("\nTotal de numeros negativos: %i", contador);
}
