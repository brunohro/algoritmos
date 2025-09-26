#include <stdio.h>

int main(int argc, char const *argv[])
{
    int variavel = 100;
    int *ptr;

    printf("valor da variavel: %d\n", variavel);

    ptr = &variavel;
    *ptr = 10;

    printf("valor da variavel: %d\n", variavel);
    printf("endereco de variavel: %p\n", ptr);
    return 0;
}
