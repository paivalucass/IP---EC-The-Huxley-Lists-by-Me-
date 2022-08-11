#include <stdio.h>

int main()
{
    char pao1, pao2;             // p�es
    char carne;                  // carnes
    char extra1, extra2, extra3; // extras
    char molho;                  // molhos
    scanf(" %c%c%c%c%c%c%c", &pao1, &carne, &extra1, &extra2, &extra3, &molho, &pao2);

    if (carne != 'b' && carne != 'f' && carne != 'p' && carne != ' ' && molho == 'P')
    {
        printf("Invalido\n");
    }
    else if (carne != 'b' && carne != 'f' && carne != 'p' && carne != ' ' && molho != 'P')
    {
        printf("Invalido\n");
        printf("...Mas pelo menos ganhou um chute\n");
    }

    else if (extra1 != 'A' && extra1 != 'T' && extra1 != 'C' && extra1 != 'R' && extra1 != ' ' && molho == 'P')
    {
        printf("Invalido\n");
    }
    else if (extra1 != 'A' && extra1 != 'T' && extra1 != 'C' && extra1 != 'R' && extra1 != ' ' && molho != 'P')
    {
        printf("Invalido\n");
        printf("...Mas pelo menos ganhou um chute\n");
    }

    else if (extra2 != 'A' && extra2 != 'T' && extra2 != 'C' && extra2 != 'R' && extra2 != ' ' && molho == 'P')
    {
        printf("Invalido\n");
    }
    else if (extra2 != 'A' && extra2 != 'T' && extra2 != 'C' && extra2 != 'R' && extra2 != ' ' && molho != 'P')
    {
        printf("Invalido\n");
        printf("...Mas pelo menos ganhou um chute\n");
    }

    else if (extra3 != 'A' && extra3 != 'T' && extra3 != 'C' && extra3 != 'R' && extra3 != ' ' && molho == 'P')
    {
        printf("Invalido\n");
    }
    else if (extra3 != 'A' && extra3 != 'T' && extra3 != 'C' && extra3 != 'R' && extra3 != ' ' && molho != 'P')
    {
        printf("Invalido\n");
        printf("...Mas pelo menos ganhou um chute\n");
    }

    else if (molho != 'P')
    {
        printf("Invalido\n");
        printf("...Mas pelo menos ganhou um chute\n");
    }
    else if (pao1 != pao2)
        printf("Invalido\n");

    else
        printf("Valido\n");

    return 0;
}