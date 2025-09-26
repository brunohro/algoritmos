#include <stdio.h>

#define MAX 4
int main(int argc, char const *argv[])
{
    int vetor[MAX] = {1, 2, 3, 4};
    int *ptr;

    ptr = vetor;

    for (int i = 0; i < MAX; i++)
    {
        printf("%d\n", *ptr); // passando valor do endereço que meu ponteiro está armazenando
        ptr++;
    }

    return 0;
}
