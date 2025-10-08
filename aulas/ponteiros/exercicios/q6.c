#include <stdio.h>
// Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array do teclado e imprima
// o endereço das posições contendo valores pares.

int main(int argc, char const *argv[])
{
    int array[5];
    int *ptr;

    ptr = array;
    printf("Digite 5 números inteiros:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("\nARRAY: ");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%i", array[i]);
        if (array[i] % 2 == 0)
        {
            printf(" - Endereco - %p", ptr);
        }
        ptr++;
    }

    ptr = array; // pega o meu primeiro elemento do array
    return 0;
}
