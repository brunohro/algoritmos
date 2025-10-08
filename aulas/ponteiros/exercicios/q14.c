// Faça um programa que leia a quantidade de elementos n e crie dinamicamente um vetor de n elementos e
// passe esse vetor para uma função que irá ler os elementos desse vetor. Depois, no programa principal, o vetor
// preenchido deve ser impresso.

#include <stdio.h>
#include <stdlib.h>
void lerVetor(int *vetor, int n);
int main()
{
    int n;

    printf("INFORME A QUANTIDADE DE ELEMENTOS: ");
    scanf("%d", &n);

    int *vetor = (int *)malloc(n * sizeof(int));

    if (vetor == NULL)
    {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    lerVetor(vetor, n);

    printf("\nVETOR PREENCHIDO: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);
}

void lerVetor(int *vetor, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("DIGITE O ELEMENTO %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}