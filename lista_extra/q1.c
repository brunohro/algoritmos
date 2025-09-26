#include <stdio.h>
// endereço e valor
int main(int argc, char const *argv[])
{
    int x = 25;
    int *p;

    p = &x;

    printf("Valor de x: %d\n", x);
    printf("Endereco de x: %p\n", &x);
    printf("Valor guardado em p: %p\n", p);
    printf("Valor apontado por p: %d\n", *p);

    return 0;
}
