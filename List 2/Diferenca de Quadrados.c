#include <stdio.h>

int main()
{
    int numero1, numero2;
    int quadrado1 = 0, quadrado2 = 0;

    for (int impar = 1; impar != 0;)
    {

        scanf("%d", &impar);
        numero1 = 1;
        numero2 = 0;
        if (impar == 0)
        {
            break;
        }

        for (int sub = 0; sub != impar;)
        {

            quadrado1 = numero1 * numero1;
            quadrado2 = numero2 * numero2;
            sub = quadrado1 - quadrado2;
            numero1++;
            numero2++;
            if (sub == impar)
            {
                printf("%d - %d\n", quadrado1, quadrado2);
            }
        }
    }

    return 0;
}