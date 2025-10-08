// 1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe
// as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima os
// valores das variáveis antes e após a modificação.

#include <stdio.h>

int main(void)
{
    int inteiro = 10, *ptr_int;
    double real = 10.5, *ptr_real;
    char nome[4] = "IFRN";
    char *ptr_char;

    ptr_int = &inteiro;
    ptr_real = &real;
    ptr_char = nome;

    printf("\n**ANTES DE ALTERAR O VALOR**");
    printf("\n->VALOR DE INTEIRO: %d", inteiro);
    printf("\n->VALOR DE REAL: %.2f", real);
    for (int i = 0; i < 4; i++)
    {
        printf("%c", *ptr_char);
        ptr_char++;
    }
    printf("============================");

    *ptr_int = 12;
    *ptr_real = 12.5;

    printf("\n**DEPOIS DE ALTERAR O VALOR**");
    printf("\n->VALOR DE INTEIRO: %d", inteiro);
    printf("\n->VALOR DE REAL: %d", real);
    for (int i = 0; i < 4; i++)
    {
        printf("%c\n", *ptr_char);
        ptr_char++;
    }

    return 0;
}
