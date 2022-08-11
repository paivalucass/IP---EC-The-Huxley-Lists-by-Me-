#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, num3;
    int primo1, primo2;
    int i, j, k;
    int eprimo;

    scanf("%d__%d-%d", &num1, &num2, &num3);
    if (num1 != 0 && num2 != 0)
    {
        for (i = 2; i <= 99; i++)
        {
            primo1 = i / num1;
            primo2 = i / num2;
            if ((primo1 % 2 != 0 && primo1 != 1) || primo1 == 2)
            {
                eprimo = 1;
                for (j = 3; j <= sqrt(primo1); j += 2)
                {
                    if (primo1 % j == 0)
                    {
                        j = primo1;
                        eprimo = 0;
                    }
                }
                if (eprimo == 1)
                {
                    if ((primo2 % 2 != 0 && primo2 != 1) || primo2 == 2)
                    {
                        eprimo = 1;
                        for (k = 3; k <= sqrt(primo2); k += 2)
                        {
                            if (primo2 % k == 0)
                            {
                                k = primo2;
                                eprimo = 0;
                            }
                        }
                        if (eprimo == 1)
                        {
                            printf("%d%02d%d-%d\n", num1, i, num2, num3);
                        }
                    }
                }
            }
        }
    }
    else
        printf("Marquinhos esta louco!\n");
    return 0;
}