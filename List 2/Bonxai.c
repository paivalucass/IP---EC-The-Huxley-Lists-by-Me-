#include <stdio.h>
int main()
{
    int cont1 = 0, cont2 = 0;
    long int cont3 = 0, cont4 = 0;
    int n, teste = 0, soma = 0;
    int saida = 0, i = 0;
    char caracter;
    while (saida == 0)
    {

        scanf("%c", &caracter);
        if (caracter == ' ' || caracter == '\n' || caracter < 65 || (caracter > 90 && caracter < 97) || caracter > 122)
        {
            saida = 1;
        }
        else
        {
            cont1 += caracter;
        }
        caracter = 0;
    }
    if (cont1 % 17 == 0)
    {
        printf("Agora estou Putin, Bonxai!");
    }
    else
    {
        n = cont1;
        while (cont1 % 2 == 0)
        {
            cont2 = 0;
            cont2++;
            cont1 = cont1 / 2;
        }
        cont3 += cont2;
        for (int i = 3; i <= n; i += 2)
        {
            cont2 = 0;
            while (cont1 % i == 0)
            {
                cont1 /= i;
                cont2 = 0;
                cont2++;
            }
            cont4 += cont2;
        }
        cont3 += cont4;
        if (cont1 != 1)
        {
            cont2 = 0;
            cont2++;
        }
        cont3 += cont2;
        if (cont3 >= 3)
        {
            n = n * 3;
        }
        for (int i = 1; i <= 6; i++)
        {
            scanf("%d", &teste);
            soma += teste;
            if (soma == n)
            {
                printf("Parabueins! Voce ajudou Bonxai a escapar.");
                break;
            }
            if (soma > n)
            {
                printf("Agora voce passou dos limites!");
                break;
            }
        }
        if (soma < n)
        {
            printf("Bonxai foi de base.");
        }
    }
    return 0;
}