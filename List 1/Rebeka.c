#include <stdio.h>
int main()
{
    int porcentagem1, porcentagem2, porcentagem3;
    int total;
    int dinheiro = 3;
    float homem1;
    float homem2;
    float homem3;
    scanf("%d", &total);
    scanf("%d", &porcentagem1);
    scanf("%d", &porcentagem2);
    scanf("%d", &porcentagem3);

    homem1 = (porcentagem1 / 100.0) * total;
    homem2 = (porcentagem2 / 100.0) * total;
    homem3 = (porcentagem3 / 100.0) * total;

    if ((porcentagem1 * total) % 100 == 0 && (porcentagem2 * total) % 100 == 0 && (porcentagem3 * total) % 100 == 0)
    {
        printf("Cada homem ficou com %0.f, %0.f e %0.f reais, respectivamente\n", homem1, homem2, homem3);
        dinheiro += total - homem1 - homem2 - homem3;
    }
    else
    {
        total = total + 1;
        dinheiro = dinheiro - 1;
        homem1 = (porcentagem1 / 100.0) * total;
        homem2 = (porcentagem2 / 100.0) * total;
        homem3 = (porcentagem3 / 100.0) * total;
        if ((porcentagem1 * total) % 100 == 0 && (porcentagem2 * total) % 100 == 0 && (porcentagem3 * total) % 100 == 0)
        {
            if (total - homem1 - homem2 - homem3 >= 2)
            {
                dinheiro += total - homem1 - homem2 - homem3;
                printf("Cada homem ficou com %0.f, %0.f e %0.f reais, respectivamente\n", homem1, homem2, homem3);
            }
            else
            {
                printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
            }
        }

        else
        {
            total = total + 1;
            dinheiro = dinheiro - 1;
            homem1 = (porcentagem1 / 100.0) * total;
            homem2 = (porcentagem2 / 100.0) * total;
            homem3 = (porcentagem3 / 100.0) * total;
            if ((porcentagem1 * total) % 100 == 0 && (porcentagem2 * total) % 100 == 0 && (porcentagem3 * total) % 100 == 0)
            {
                if (total - homem1 - homem2 - homem3 >= 3)
                {
                    dinheiro += total - homem1 - homem2 - homem3;
                    char a, b, c;
                    scanf(" %c %c %c", &a, &b, &c);
                    int soma;
                    printf("Cada homem ficou com %0.f, %0.f e %0.f reais, respectivamente\n", homem1, homem2, homem3);
                    soma = (a - '`') + (b - '`') + (c - '`');
                    printf("%d\n", soma);
                }
                else
                {
                    printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
                }
            }

            else
            {
                total = total + 1;
                dinheiro = dinheiro - 1;
                homem1 = (porcentagem1 / 100.0) * total;
                homem2 = (porcentagem2 / 100.0) * total;
                homem3 = (porcentagem3 / 100.0) * total;
                if ((porcentagem1 * total) % 100 == 0 && (porcentagem2 * total) % 100 == 0 && (porcentagem3 * total) % 100 == 0)
                {
                    if (total - homem1 - homem2 - homem3 >= 4)
                    {
                        dinheiro += total - homem1 - homem2 - homem3;
                        int idade1, idade2, idade3;
                        int somaId = 0;
                        scanf("%d %d %d", &idade1, &idade2, &idade3);
                        printf("Cada homem ficou com %0.f, %0.f e %0.f reais, respectivamente\n", homem1, homem2, homem3);
                        if (idade1 % 3 == 0)
                        {
                            somaId = somaId + idade1 / 3;
                        }
                        if (idade2 % 3 == 0)
                        {
                            somaId = somaId + idade2 / 3;
                        }
                        if (idade3 % 3 == 0)
                        {
                            somaId = somaId + idade3 / 3;
                        }
                        if (somaId != 0)
                        {
                            printf("%d\n", somaId);
                        }
                        else
                        {
                            printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
                        }
                    }
                    else
                    {
                        printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
                    }
                }
                else
                {
                    printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
                }
            }
        }
    }
    if (dinheiro >= 7)
    {
        printf("Ela conseguiu! Rebeka voltou para casa e apanhou da mae por sumir noite passada!\n");
    }
    else
    {
        printf("E parece que Rebeka vai ter que voltar andando...\n");
    }
    return 0;
}