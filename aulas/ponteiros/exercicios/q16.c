// o que faz o código abaixo ?

#include <stdio.h>
#include <stdlib.h>

// definindo valores inalteráveis
#define Y 2 // Número de linhas da matriz
#define X 2 // Número de colunas da matriz

int main(int argc, char *argv[])
{
    int **A;  // declarando um ponteiro do tipo int
    int i, j; // variáveis auxiliares

    A = (int **)malloc(Y * sizeof(int *)); // aloca um vetor de ponteiros

    for (i = 0; i < Y; i++)
        A[i] = (int *)malloc(X * sizeof(int)); // cada linha, aloca um vetor de inteiros

    for (i = 0; i < Y; i++)
        for (j = 0; j < X; j++)
            A[i][j] = i + j; // preenchendo a matriz com a soma dos índices

    for (i = 0; i < Y; i++)
        for (j = 0; j < X; j++)
            printf("%d \t", A[i][j]); // imprimindo a matriz

    for (i = 0; 1 < Y; i++)
        free(A[i]); // libera cada linha da matriz

    free(A); // libera os ponteiros das linhas
    return 0;
}
