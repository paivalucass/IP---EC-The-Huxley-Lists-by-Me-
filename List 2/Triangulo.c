
#include <stdio.h>
#include <math.h>

int main()
{
    char letra;
    int loops;
    int controle = 1;
    int i, j, k;

    scanf("%c", &letra);
    loops = letra - 64;

    for (i = 0; i < loops; i++)
    {
        for (j = loops - 2; j >= i; j--)
        {
            printf(".");
        }
        for (k = 0; k < controle; k++)
        {
            printf("%c", k + 65);
        }
        k -= 1;
        for (; k >= 1; k--)
        {
            printf("%c", k + 64);
        }
        for (j = loops - 2; j >= i; j--)
        {
            printf(".");
        }
        controle += 1;
        printf("\n");
    }

    return 0;
}
