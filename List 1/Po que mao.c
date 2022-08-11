#include <stdio.h>

int main()
{
    int doces;
    int pk1, pk2, pk3;
    int pk12, pk13, pk23, pk123;
    scanf("%d", &doces);
    scanf("%d", &pk1);
    scanf("%d", &pk2);
    scanf("%d", &pk3);
    pk12 = pk1 + pk2;
    pk13 = pk1 + pk3;
    pk23 = pk2 + pk3;
    pk123 = pk1 + pk2 + pk3;
    if (doces >= pk1 || doces >= pk2 || doces >= pk3)
    {
        if (pk123 <= doces)
            printf("3");
        else if (pk12 > doces && pk13 > doces && pk23 > doces)
            printf("1");
        else if (pk12 <= doces || pk13 <= doces || pk23 <= doces)
            printf("2");
        else if (pk123 > doces)
            printf("0");
        else
            printf("0");
    }
    else
        printf("0");
    return 0;
}