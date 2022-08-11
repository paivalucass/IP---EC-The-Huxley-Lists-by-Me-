#include <stdio.h>

int main()
{
    int A, B, C;
    int quadrado1, quadrado2, resto, multi, div, soma, sub;
    scanf("%d %d %d", &A, &B, &C);
    quadrado1 = A * A;
    /*quadrado2 = B * B;*/
    resto = A % B;
    multi = A * B;
    div = A / B;
    soma = A + B;
    sub = A - B;
    if (quadrado1 == C || C == resto || C == multi || C == div || C == soma || C == sub)
    {
        if (quadrado1 == C)
        {
            printf("Quadrado Vitoris\n");
            if (C == resto)
                printf("tambem Resto\n");
            if (C == multi)
                printf("tambem Multi\n");
            if (C == div)
                printf("tambem Div\n");
            if (C == soma)
                printf("tambem Soma\n");
            if (C == sub)
                printf("tambem Sub\n");
        }
        else if (C == resto)
        {
            printf("Resto Vitoris\n");
            if (quadrado1 == C)
                printf("tambem Quadrado\n");
            if (C == multi)
                printf("tambem Multi\n");
            if (C == div)
                printf("tambem Div\n");
            if (C == soma)
                printf("tambem Soma\n");
            if (C == sub)
                printf("tambem Sub\n");
        }
        else if (C == multi)
        {
            printf("Multi Vitoris\n");
            if (quadrado1 == C)
                printf("tambem Quadrado\n");
            if (C == resto)
                printf("tambem Resto\n");
            if (C == div)
                printf("tambem Div\n");
            if (C == soma)
                printf("tambem Soma\n");
            if (C == sub)
                printf("tambem Sub\n");
        }
        else if (C == div)
        {
            printf("Div Vitoris\n");
            if (quadrado1 == C)
                printf("tambem Quadrado\n");
            if (C == resto)
                printf("tambem Resto\n");
            if (C == multi)
                printf("tambem Multi\n");
            if (C == soma)
                printf("tambem Soma\n");
            if (C == sub)
                printf("tambem Sub\n");
        }
        else if (C == soma)
        {
            printf("Soma Vitoris\n");
            if (quadrado1 == C)
                printf("tambem Quadrado\n");
            if (C == resto)
                printf("tambem Resto\n");
            if (C == multi)
                printf("tambem Multi\n");
            if (C == div)
                printf("tambem Div\n");
            if (C == sub)
                printf("tambem Sub\n");
        }
        else if (C == sub)
        {
            printf("Sub Vitoris\n");
            if (quadrado1 == C)
                printf("tambem Quadrado\n");
            if (C == resto)
                printf("tambem Resto\n");
            if (C == multi)
                printf("tambem Multi\n");
            if (C == div)
                printf("tambem Div\n");
            if (C == soma)
                printf("tambem Soma\n");
        }
    }
    else
        printf("Impossivel vitores\n");

    return 0;
}
