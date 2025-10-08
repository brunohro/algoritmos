// Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas. Imprima o endereço de
// cada posição dessa matriz.

#include <stdio.h>

int main(void)
{
    float matriz[3][3];
    float *ptr;

    ptr = &matriz[0][0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = i + 0.2;                                            // preenchendo a matriz (sempre vai dar um valor floar)
            printf("\n-> POSICAO: MATRIZ[%i][%i] -- ENDERECO: %p", i, j, ptr); // imprimindo o endereço de cada posição
            ptr++;
        }
    }

    return 0;
}
