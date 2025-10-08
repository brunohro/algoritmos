// Escreva uma função que dado um número real passado como parâmetro, retorne à parte inteira e a parte
// fracionaria deste número. Escreva um programa que chama a função Prototipo: void frac(float num, int*
// inteiro, float* frac);

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void frac(float num, int *inteiro, float *frac);

void frac(float num, int *inteiro, float *frac);
int main()
{
    float num;
    int p_inteiro;
    float p_frac;

    printf("DIGITE UM NUMERO REAL: ");
    scanf("%f", &num);

    frac(num, &p_inteiro, &p_frac);

    printf("NUMERO: %.2f\n", num);
    printf("PARTE INTEIRA: %d\n", p_inteiro);
    printf("PARTE FRACIONADA: %.2f\n", p_frac);
    return 0;
}
void frac(float num, int *inteiro, float *frac)
{
    *inteiro = (int)num;
    *frac = num - *inteiro;
}