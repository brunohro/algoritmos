#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ALTURA 20
#define LARGURA 20

void MoveEsquerda(int *x);
// void MoveDireita(int *x);
// void MoveCima(int *y);
// void MoveBaixo(int *y);
void ImprimeMapa(int px, int py);
// void LimiteTabuleiro(int *px, int *py);
int main(void)
{
    int px, py;
    char ordem;
    int continua = 1;

    srand(time(0));
    px = 10;
    py = 10;

    ImprimeMapa(px, py);
    while (continua)
    {
        ordem = getchar();
        system("cls");
        switch (ordem)
        {
        case 'a':
        case 'A':
            MoveEsquerda(&px);
            ImprimeMapa(px, py);
            break;
        case 'd':
        case 'D':
            // MoveDireita(&px);
            ImprimeMapa(px, py);
            break;
        case 'w':
        case 'W':
            // MoveCima(&py);
            ImprimeMapa(px, py);
            break;
        case 's':
        case 'S':
            // MoveBaixo(&py);
            ImprimeMapa(px, py);
            break;

        case 'q':
        case 'Q':
            continua = 0;
            break;
        }

        printf("ordem %d %d \n", px, py);
        LimiteTabuleiro(&px, &py);
    }
    return 0;
}

void ImprimeMapa(int px, int py)
{
    int x, y;
    for (y = 0; y < ALTURA; y++)
    {
        for (x = 0; x < LARGURA; x++)
        {
            if ((px == x) && (py == y))
            {
                printf(" @ ");
            }
            else
            {
                printf(" + ");
            }
        }
        printf("\n");
    }
}

void MoveEsquerda(int *x)
{
    x++;
}

void LimiteTabuleiro(int *x, int *y)
{
}