#include <stdio.h>
#include <stdlib.h>

void questao1();
void questao2();
void questao3();
void questao4();
void questao5();
void questao6();
void questao7();
void questao8();
void questao9();
void questao10();
void questao11();
void questao12();
void questao13();
void questao14();
void questao15();
void questao16();

int main(int argc, char const *argv[])
{
    int opcao;
    do
    {
        printf("=========================================\n");
        printf("     ** ATIVIDADE DE PONTEIROS **\n");
        printf("=========================================\n\n");

        printf("ESCOLHA A QUESTAO DESEJADA (1 a 16) OU 0 PARA SAIR:\n\n");
        for (int i = 1; i <= 16; i++)
        {
            printf("-> %2d. QUESTAO %d\n", i, i);
        }
        printf("->  0. Sair\n");
        printf("\nOpcao: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            questao1();
            break;
        case 2:
            questao2();
            break;
        case 3:
            questao3();
            break;
        case 4:
            questao4();
            break;
        case 5:
            questao5();
            break;
        case 6:
            questao6();
            break;
        case 7:
            questao7();
            break;
        case 8:
            questao8();
            break;
        case 9:
            questao9();
            break;
        case 10:
            questao10();
            break;
        case 11:
            questao11();
            break;
        case 12:
            questao12();
            break;
        case 13:
            questao13();
            break;
        case 14:
            questao14();
            break;
        case 15:
            questao15();
            break;
        case 16:
            questao16();
            break;
        case 0:
            printf("\nSaindo do programa...\n");
            break;
        default:
            printf("\nOpcao invalida! Tente novamente.\n");
            break;
        }

        if (opcao != 0)
        {
            printf("\nPressione ENTER para voltar ao menu...");
            getchar();
            getchar();
        }

    } while (opcao != 0);

    return 0;
}

// questão 1
void questao1()
{
    int inteiro = 10, *ptr_int;
    float real = 10.5, *ptr_real;
    char nome = 'P', *ptr_char;

    ptr_int = &inteiro;
    ptr_real = &real;
    ptr_char = &nome;

    printf("\n**ANTES DE ALTERAR O VALOR**");
    printf("\n->VALOR DE INTEIRO: %d", inteiro);
    printf("\n->VALOR DE REAL: %.2f", real);
    printf("\n->VALOR DE CHAR: %c", *ptr_char);
    printf("\n=============================\n");

    *ptr_int = 12;
    *ptr_real = 12.5;
    *ptr_char = 'M';

    printf("\n**DEPOIS DE ALTERAR O VALOR**");
    printf("\n->VALOR DE INTEIRO: %d", inteiro);
    printf("\n->VALOR DE REAL: %.2f", real);
    printf("\n->VALOR DE CHAR: %c", *ptr_char);
}
// questão 2

void soma_valores(int *a, int b);
void questao2()
{
    int a = 10, b = 20;

    printf("\n** VALOR DE A: %d", a);
    printf("\n** VALOR DE B: %d", b);
    printf("\n==================");
    soma_valores(&a, b);
    printf("\n** VALOR DE A: %d", a);
    printf("\n** VALOR DE B: %d", b);
}

void soma_valores(int *a, int b)
{
    *a = *a + b;
}

// questão 3
void questao3()
{
    float array[10] = {1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0};
    float *ptr;

    ptr = array;

    for (int i = 0; i < 10; i++)
    {
        printf("\n POSICAO %i: %p", i, (void *)ptr);
        ptr++;
    }
}

// questão 4

void questao4()
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
}

// questão 5

void questao5()
{
    int array[5];
    int *ptr;

    ptr = array;

    printf("DIGITE 5 NUMEROS INTEIROS: \n");
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
}

// questão 6

void questao6()
{
    int array[5];
    int *ptr;

    ptr = array;
    printf("DIGITE 5 NUMEROS INTEIROS: \n");
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
            printf(" - ENDERECO - %p", ptr);
        }
        ptr++;
    }

    ptr = array;
}

// questão 7
void questao7()
{
    int A, *B, **C, ***D;

    B = &A;
    C = &B;
    D = &C;

    printf("DIGITE UM VALOR INTEIRO: ");
    scanf("%d", &A);

    printf("\nVALOR DE A: %d", A);
    printf("\nVALOR DE B: %d", *B * 2);
    printf("\nVALOR DE C: %d", **C * 3);
    printf("\nVALOR DE D: %d", ***D * 4);
}

// questão 8

int ordenar(int *v1, int *v2, int *v3);
void questao8()
{
    int v1, v2, v3;
    int resultado;

    printf("\nDIGITE TRES VALORES INTEIROS: ");
    scanf("%d %d %d", &v1, &v2, &v3);

    resultado = ordenar(&v1, &v2, &v3);

    printf("\nVALORES ORDENADOS:\n %d, %d, %d", v1, v2, v3);

    if (resultado == 1)
        printf("\nVALORES IGUAIS.\n");
    else
        printf("\nVALORES DIFERENTES.\n");
}

int ordenar(int *v1, int *v2, int *v3)
{
    int temp;

    if (*v1 == *v2 && *v2 == *v3)
    {
        return 1;
    }

    if (*v1 > *v2)
    {
        temp = *v1;
        *v1 = *v2;
        *v2 = temp;
    }
    if (*v1 > *v3)
    {
        temp = *v1;
        *v1 = *v3;
        *v3 = temp;
    }
    if (*v2 > *v3)
    {
        temp = *v2;
        *v2 = *v3;
        *v3 = temp;
    }
    return 0;
}

// questão 9

void frac(float num, int *inteiro, float *frac);
void questao9()
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
}
void frac(float num, int *inteiro, float *frac)
{
    *inteiro = (int)num;
    *frac = num - *inteiro;
}

// questão 10

int negativos(float *vet, int N);
void questao10()
{
    float array[5] = {-1.2, -1.3, 1.4, 1.5, 1.6};
    float *ptr;

    ptr = array;
    negativos(ptr, 5);
}
int negativos(float *vet, int N)
{
    int contador = 0;
    for (int i = 0; i < N; i++)
    {
        if (*vet < 0)
        {
            contador++;
        }
        vet++;
    }

    printf("\nTOTAL DE NUMEROS NEGATIVOS: %i", contador);
}

// questão 11

#define INF 100000
void min_max(int *v, int min, int max, int N);
void questao11()
{
    int array[5] = {1, 2, 3, 4, 5};
    int *ptr;
    int max, min;

    ptr = array;
    min_max(ptr, min, max, 5);
}
void min_max(int *v, int min, int max, int N)
{
    min = INF;
    max = 0;
    for (int i = 0; i < N; i++)
    {
        if (*v < min)
        {
            min = *v;
        }
        if (*v > max)
        {
            max = *v;
        }
        v++;
    }

    printf("\nValor min: %d", min);
    printf("\nValor max: %d", max);
}

// questão 12

int *uniao(int *x1, int *x2, int n1, int n2, int *qtd);

void questao12()
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

// Questão 13

int *interseccao(int *x1, int *x2, int n1, int n2, int *qtd);
void questao13(void)
{
    int x1[] = {1, 3, 5, 6, 7};
    int x2[] = {1, 3, 4, 6, 8};
    int n1 = 5, n2 = 5, qtd;

    int *x3 = interseccao(x1, x2, n1, n2, &qtd);

    printf("Vetor interseccao (tamanho %d): ", qtd);
    for (int i = 0; i < qtd; i++)
    {
        printf("%d ", x3[i]);
    }
    printf("\n");

    free(x3);
}

int *interseccao(int *x1, int *x2, int n1, int n2, int *qtd)
{
    int *x3 = malloc(n1 * sizeof(int));
    if (x3 == NULL)
    {
        printf("Erro ao alocar memória\n");
        exit(1);
    }

    *qtd = 0;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (x1[i] == x2[j])
            {
                x3[*qtd] = x1[i];
                (*qtd)++;
                break;
            }
        }
    }

    return x3;
}

// questão 14

void lerVetor(int *vetor, int n);
void questao14()
{
    int n;

    printf("INFORME A QUANTIDADE DE ELEMENTOS: ");
    scanf("%d", &n);

    int *vetor = (int *)malloc(n * sizeof(int));

    if (vetor == NULL)
    {
        printf("Erro ao alocar memoria!\n");
        return;
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

// questão 15

void questao15()
{
    int i = 34, j; // inicializando a variável i com valor 34, e declaro a variável j.
    int *p;        // declarando o ponteiro p

    p = &i;      // p recebe o endereço de memória de i
    *p++;        // incrementa o ponteiro, sendo assim, o ponteiro não aponta mais para i
    j = *p + 33; // tenta fazer a soma do endereço apontado por p + 33;

    printf("i = %d\n", i);
    printf("j = %d\n", j);
    printf("p = %p\n", (void *)p); // endereço atual de p
}

// questão 16

// definindo valores inalteráveis
#define Y 2 // Número de linhas da matriz
#define X 2 // Número de colunas da matriz

void questao16()
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
}
