#include <stdio.h>

#define MAX 5
int main(int argc, char const *argv[])
{
    int vetor[MAX] = {1, 2, 3, 4, 5};
    int *ptr, somatorio = 0;

    ptr = vetor; // pegando o primeiro elemento do vetor

    for (int i = 0; i < MAX; i++)
    {
        somatorio += *ptr;
        ptr++;
    }

    printf("Soma do vetor: %d", somatorio);
    return 0;
}
