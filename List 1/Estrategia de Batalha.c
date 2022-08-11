#include <stdio.h>

int main()
{
    int soldadosA, tanquesA, avioesA, misseisA;
    int soldadosI, tanquesI, avioesI, misseisI;
    int soldadosR, tanquesR, avioesR, misseisR;
    int soldadosD, tanquesD, avioesD, misseisD;
    /*printf(" A presente a quantidade de soldados, tanques, avios e misseis aliados:\n");*/
    scanf("%d %d %d %d", &soldadosA, &tanquesA, &avioesA, &misseisA);
    /*printf(" A presente a quantidade de soldados, tanques, avios e misseis inimigos:\n");*/
    scanf("%d %d %d %d", &soldadosI, &tanquesI, &avioesI, &misseisI);
    /*printf(" A presente a quantidade de soldados, tanques, avios e misseis dos reforcos:\n");*/
    scanf("%d %d %d %d", &soldadosR, &tanquesR, &avioesR, &misseisR);
    soldadosD = soldadosI + soldadosR;
    tanquesD = tanquesI + tanquesR;
    avioesD = avioesI + avioesR;
    misseisD = misseisI + misseisR;
    /*totalD = soldadosD + tanquesD + avioesD + misseisD;
    totalA = soldadosA + tanquesA + avioesA + misseisA;*/
    if (soldadosA > soldadosD && tanquesA > tanquesD && avioesA > avioesD)
        printf("Avancar");
    else if (soldadosA > soldadosD && tanquesA > tanquesD && misseisA > misseisD)
        printf("Avancar");
    else if (soldadosA > soldadosD && avioesA > avioesD && misseisA > misseisD)
        printf("Avancar");
    else if (tanquesA > tanquesD && avioesA > avioesD && misseisA > misseisD)
        printf("Avancar");
    else if (soldadosA > soldadosD && tanquesA > tanquesD && misseisA > misseisD && avioesA > avioesD)
        printf("Avancar");

    else if (soldadosD > soldadosA && tanquesD > tanquesA && avioesD > avioesA)
        printf("Recuar");
    else if (soldadosD > soldadosA && tanquesD > tanquesA && misseisD > misseisA)
        printf("Recuar");
    else if (soldadosD > soldadosA && avioesD > avioesA && misseisD > misseisA)
        printf("Recuar");
    else if (tanquesD > tanquesA && avioesD > avioesA && misseisD > misseisA)
        printf("Recuar");
    else if (soldadosD > soldadosA && tanquesD > tanquesA && avioesD > avioesA && misseisD > misseisA)
        printf("Recuar");
    else
        printf("Permanecer");

    return 0;
}