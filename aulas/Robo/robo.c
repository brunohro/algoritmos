#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ALTURA 20
#define LARGURA 20

void MoveEsquerda(int *x);
void MoveDireita(int *x);
void MoveCima(int *y);
void MoveBaixo(int *y);
void ImprimeMapa(int px, int py, char formato);
void LimiteTabuleiro(int *px, int *py);
int main(void)
{
    int px, py;
    char ordem;
    int continua = 1;
    char formato = '@';

    srand(time(0));
    px = 10;
    py = 10;

    ImprimeMapa(px, py, formato);
    while (continua != 0)
    {
        ordem = getchar();
        // system("cls");
        switch (ordem)
        {
        case 'a':
        case 'A':
            ImprimeMapa(px, py, formato);
            MoveEsquerda(&px);
            break;
        case 'd':
        case 'D':
            ImprimeMapa(px, py, formato);
            MoveDireita(&px);
            break;
        case 'w':
        case 'W':
            ImprimeMapa(px, py, formato);
            MoveCima(&py);
            break;
        case 's':
        case 'S':
            ImprimeMapa(px, py, formato);
            MoveBaixo(&py);
            break;

        case 'q':
        case 'Q':
            continua = 0;
            break;
        case 'm':
        case 'M':
            if (formato == '@')
            {
                formato = '$';
            }
            else
            {
                formato = '@';
            }
            ImprimeMapa(px, py, formato);
        default:
            ImprimeMapa(px, py, formato);
        }

        printf("ordem %d %d \n", px, py);
        LimiteTabuleiro(&px, &py);
    }
    return 0;
}

void ImprimeMapa(int px, int py, char formato)
{
    int x, y;
    for (y = 0; y < ALTURA; y++)
    {
        for (x = 0; x < LARGURA; x++)
        {
            if ((px == x) && (py == y))
            {
                printf(" %c ", formato);
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
    *x -= 1;
}

void MoveDireita(int *x)
{
    *x += 1;
}

void MoveCima(int *y)
{
    *y -= 1;
}

void MoveBaixo(int *y)
{
    *y += 1;
}
void LimiteTabuleiro(int *x, int *y)
{
    if (*x <= 0)
    {
        printf("\n-LIMITE DE TABOLEIRO-");
        *x = 0;
    }
    if (*x >= 19)
    {
        printf("\n-LIMITE DE TABOLEIRO-");
        *x = 19;
    }
    if (*y <= 0)
    {
        printf("\n-LIMITE DE TABOLEIRO-");
        *y = 0;
    }
    if (*y >= 19)
    {
        printf("\n-LIMITE DE TABOLEIRO-");
        *y = 19;
    }
}