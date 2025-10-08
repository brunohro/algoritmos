// Crie uma função que receba como parâmetros dois vetores de inteiros: x1 e x2 e as suas respectivas quantidades de elementos: n1 e n2. A função deverá retornar um ponteiro para um terceiro vetor, x3, alocado dinamicamente, contendo a união de x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3. Sendo x1 = {1, 3, 5, 6, 7} e x2 = {1, 3, 4, 6, 8}, x3 irá conter {1, 3, 4, 5, 6, 7, 8}. Assinatura da função: int* uniao(int *x1, int *x2, int n1, int n2, int* qtd);

#include <stdio.h>
#include <stdlib.h>

int *uniao(int *x1, int *x2, int n1, int n2, int *qtd);

int main()
{
    int x1[] = {1, 3, 5, 6, 7}, x2[] = {1, 3, 4, 6, 8};
    int n1 = 5, n2 = 5, qtd;

    int *x3 = uniao(x1, x2, n1, n2, &qtd);

    printf("VETOR UNIAO (tamanho %d): ", qtd);
    for (int i = 0; i < qtd; i++)
    {
        printf("%d ", x3[i]);
    }
    printf("\n");

    free(x3);
    return 0;
}

int *uniao(int *x1, int *x2, int n1, int n2, int *qtd)
{
    int *x3 = malloc((n1 + n2) * sizeof(int));
    if (x3 == NULL)
    {
        printf("Erro ao alocar memória\n");
        exit(1);
    }

    *qtd = 0;
    for (int i = 0; i < n1; i++)
    {
        x3[*qtd] = x1[i];
        (*qtd)++;
    }

    for (int i = 0; i < n2; i++)
    {
        int existe = 0;
        for (int j = 0; j < *qtd; j++)
        {
            if (x2[i] == x3[j])
            {
                existe = 1;
                break;
            }
        }

        if (!existe)
        {
            x3[*qtd] = x2[i];
            (*qtd)++;
        }
    }

    return x3;
}
