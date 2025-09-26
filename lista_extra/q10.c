#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 7;
    int *ptr1;
    int **ptr2; // ponteiro para ponteiro

    ptr2 = &ptr1; // ptr2 aponta para ptr1
    ptr1 = &a;    // ptr1 aponta para a

    printf("\nVALOR DE A: %d", a);
    printf("\nENDERECO DE A: %p", &a);
    printf("\nVALOR DE P1: %p", ptr1);
    printf("\nVALOR APONTADO POR P1: %d", *ptr1);
    printf("\nVALOR DE P2: %p", ptr2);
    printf("\nVALOR APONTADO POR P2: %d", **ptr2);

    return 0;
}
