#include <stdio.h>

#define MAX 5
int main(int argc, char const *argv[])
{
    int vetor[MAX] = {1, 4, 3, 2, 5};
    int *ptr;

    ptr = vetor; // ptr recebe o primero endereço de vetor

    for (int i = 0; i < MAX; i++)
    {
        printf("%d\n", *ptr);
        ptr++;
    }

    return 0;
}
