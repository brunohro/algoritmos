#include <stdio.h>
// Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmética de
// ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.

int main(int argc, char const *argv[])
{
    int array[5];
    int *ptr;

    ptr = array;

    printf("Digite 5 números inteiros:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }

    ptr = array; // retornando para o primeiro elemento do array

    printf("\nVALORES INICIAIS DO ARRAY");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", *ptr);
        ptr++;
    }
    printf("\n===========================");

    ptr = array; // retornando para o primeiro elemento do array
    printf("\nVALORES DO ARRAY DUPLICADO");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", *ptr * 2); // imprimindo o dobro do valor de lido
        ptr++;
    }
    return 0;
}
