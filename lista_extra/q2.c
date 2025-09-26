#include <stdio.h>
// Alterando valor com ponteiros

int main(int argc, char const *argv[])
{
    int y = 50;
    int *ptr;

    ptr = &y;

    printf("\n -> VALOR DE Y: %d", y);

    *ptr = 99; // trocando o valor da variavel que o meu ponteiro está apontado

    printf("\n -> VALOR DE Y: %d", y);
    return 0;
}
