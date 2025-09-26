#include <stdio.h>

#define MAX 5
int main(int argc, char const *argv[])
{
    int vetor[MAX] = {1, 2, 3, 4, 5};
    int *ptr;

    ptr = vetor;

    for (int i = 0; i < MAX; i++)
    {
        *ptr *= 2;
        if (i == 0)
        {
            printf("vetor multiplicado = { ");
        }
        printf(" %d, ", *ptr);
        if (i == 4)
        {
            printf("}\n");
        }
        ptr++;
    }
    return 0;
}
