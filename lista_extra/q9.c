#include <stdio.h>

#define MAX 4
int main(int argc, char const *argv[])
{
    char nome[MAX] = "IFRN";
    char *ptr;

    ptr = nome;
    for (int i = 0; i < MAX; i++)
    {
        printf("%c\n", *ptr);
        ptr++;
    }
    return 0;
}
