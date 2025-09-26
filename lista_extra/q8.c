#include <stdio.h>

#define MAX 5
int main(int argc, char const *argv[])
{
    int vetor[MAX] = {1, 2, 3, 5, 4};
    int *ptr, maior_valor = 0;

    ptr = vetor; // pegando o primeiro valor do vetor

    for (int i = 0; i < MAX; i++)
    {
        if (*ptr > maior_valor)
        {
            maior_valor = *ptr;
        }
        ptr++;
    }

    printf("\n MAIOR VALOR DO VETOR: %d ", maior_valor);
    return 0;
}
