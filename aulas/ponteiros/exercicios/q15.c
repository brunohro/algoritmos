// Analise o código abaixo e determine o valor das variáveis ao final da execução. int i=34,j; int *p; p = &i; *P++;
// j = *p + 33;

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 34, j; // inicializando a variável i com valor 34, e declaro a variável j.
    int *p;        // declarando o ponteiro p

    p = &i;      // p recebe o endereço de memória de i
    *p++;        // incrementa o ponteiro, sendo assim, o ponteiro não aponta mais para i
    j = *p + 33; // tenta fazer a soma do endereço apontado por p + 33;

    printf("i = %d\n", i);
    printf("j = %d\n", j);
    printf("p = %p\n", (void *)p); // endereço atual de p

    return 0;
}
