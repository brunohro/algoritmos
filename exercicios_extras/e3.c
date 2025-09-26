#include <stdio.h>

#define MAX 5
int main(int argc, char const *argv[])
{
    int vetor[MAX] = {10, 20, 30, 40, 50};
    int *p;

    p = vetor; // aponta para o primeiro elemento de vetor

    printf("\n Percorrendo vetor com ponteiro:\n");

    for (int i = 0; i < MAX; i++)
    {
        printf("Elemento %d: %d\n", i, *p);
        p++;
    }
    return 0;
}
