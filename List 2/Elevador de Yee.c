#include <stdio.h>

int main()
{
    int N, M;
    int i = 0, quarto, l = 0;
    int x, y, z;
    int contx = 0, conty = 0, contz = 0, somamovimento = 0;
    scanf("%d %d", &N, &M);
    for (i = 1; i <= (N * 4); i++)
    {
        scanf("%d", &quarto);
        z = quarto % 10;
        y = quarto % 100;
        y = y / 10;
        x = quarto / 100;
        if (contx < x)
        {
            for (l = contx; l < x; l++)
            {
                printf("d");
                contx++;
                somamovimento++;
            }
        }
        else
        {
            for (l = contx; l > x; l--)
            {
                printf("e");
                contx--;
                somamovimento++;
            }
        }
        if (conty < y)
        {
            for (l = conty; l < y; l++)
            {
                printf("c");
                conty++;
                somamovimento++;
            }
        }
        else
        {
            for (l = conty; l > y; l--)
            {
                printf("b");
                conty--;
                somamovimento++;
            }
        }
        if (contz < z)
        {
            for (l = contz; l < z; l++)
            {
                printf("f");
                contz++;
                somamovimento++;
            }
        }
        else
        {
            for (l = contz; l > z; l--)
            {
                printf("t");
                contz--;
                somamovimento++;
            }
        }
        printf("\nEntregue %d no quarto %03d com %d movimentos\n", i, quarto, somamovimento);
        if (somamovimento > M)
        {
            printf("Faltou combustivel e foram entregues %d pessoas.", i);
            break;
        }
    }
    if (somamovimento <= M)
    {
        printf("Todas as pessoas foram entregues.");
    }
    printf("\nFim do teste. Obrigado Kanye West!");

    return 0;
}