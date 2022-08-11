#include <stdio.h>

int main()
{
    float Yverd, Yverm, Yrox, Yama;
    float Vverd = 80, Vverm = 100, Vrox = 120, Vama = 80;
    int Pverd, Pverm, Prox, Pama;
    int Din;
    scanf("%d", &Din);
    scanf("%d %d %d %d", &Pverd, &Pverm, &Prox, &Pama);
    Yverd = Vverd / Pverd;
    Yverm = Vverm / Pverm;
    Yrox = Vrox / Prox;
    Yama = Vama / Pama;
    if (Din >= Pverd || Din >= Pverm || Din >= Prox || Din >= Pama)
    {
        if (Yverd > Yverm && Yverd > Yrox && Yverd > Yama)
            printf("Verde");
        else if (Yverm > Yverd && Yverm > Yrox && Yverm > Yama)
            printf("Vermelho");
        else if (Yrox > Yverd && Yrox > Yverm && Yrox > Yama)
            printf("Roxo");
        else if (Yama > Yverd && Yama > Yverm && Yama > Yrox)
            printf("Amarelo");

        else if (Yverd == Yverm && Yverd == Yrox && Yverd == Yama)
            printf("Verde");
        else if (Yverd == Yverm && Yrox < Yverd && Yama < Yverd)
            printf("Verde");
        else if (Yverd == Yrox && Yverm < Yverd && Yama < Yverd)
            printf("Verde");
        else if (Yverd == Yama && Yverm < Yverd && Yrox < Yverd)
            printf("Verde");

        else if (Yverm == Yrox && Yama < Yverm && Yverd < Yverm)
            printf("Vermelho");
        else if (Yverm == Yama && Yrox < Yverm && Yverd < Yverm)
            printf("Vermelho");

        else if (Yrox == Yama && Yverm < Yrox && Yverd < Yrox)
            printf("Roxo");
    }
    else
        printf("Acho que vou a pe :(");

    return 0;
}