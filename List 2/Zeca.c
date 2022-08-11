#include <stdio.h>
#include <math.h>

int main()
{
    int numero1, numero2, p1 = 0, p2 = 0;
    int p3 = 0, total = 0;
    int j = 0, cont1 = 0, cont2 = 0;
    int cont3 = 0, i = 0;
    scanf("%d %d", &numero1, &numero2);

    if (numero1 % 2 == 0)
    {
        numero1++;
    }
    for (i = numero1 - 2; i >= 3; i -= 2)
    {
        cont1 = 0;
        for (j = 3; j <= sqrt(i); j += 2)
        {
            if (i % j == 0)
            {
                cont1++;
                j = i;
            }
        }
        if (cont1 == 0)
        {
            p3 = i;
            i = 0;
        }
    }
    while (numero1 <= numero2)
    {
        cont2 = 0;
        for (j = 3; j <= sqrt(numero1); j += 2)
        {
            if (numero1 % j == 0)
            {
                cont2++;
                j = numero1;
            }
        }
        if (cont2 == 0)
        {
            p1 = p2;
            p2 = p3;
            p3 = numero1;
            if ((p1 + p3) / 2 == p2 && (p1 + p3) % 2 == 0)
            {
                total++;
            }
        }
        numero1 += 2;
    }
    if (numero2 % 2 == 0)
    {
        numero2++;
    }
    for (i = numero2 + 2; i > 2; i += 2)
    {
        cont3 = 0;
        for (j = 3; j <= sqrt(i); j += 2)
        {
            if (i % j == 0)
            {
                cont3++;
                j = i;
            }
        }
        if (cont3 == 0)
        {
            p1 = p2;
            p2 = p3;
            p3 = i;
            i = 0;
            if ((p1 + p3) / 2 == p2 && (p1 + p3) % 2 == 0)
            {
                total++;
            }
        }
    }
    printf("%d\n", total);
    return 0;
}