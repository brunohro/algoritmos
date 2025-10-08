#include <stdio.h>

// Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um programa que leia a variável a e calcule e
// exiba o dobro, o triplo e o quádruplo desse valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve
// ser usada para calcular o dobro, C o triplo e D o quádruplo.

int main(int argc, char const *argv[])
{
    int A = 10, *B, **C, ***D;

    B = &A;
    C = &B;
    D = &C;
    printf("\nVALOR DE A: %d", A);
    printf("\nVALOR DE B: %d", *B * 2);
    printf("\nVALOR DE C: %d", **C * 3);
    printf("\nVALOR DE D: %d", ***D * 4);

    return 0;
}
