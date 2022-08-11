#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;
    int a, b;
    int n, m;
    int denominador;
    scanf("(%d, %d)", &x, &y);
    scanf("%d*x^%d - %d*y^%d", &a, &n, &b, &m);
    denominador = ((a * (pow(x, n))) - (b * (pow(y, m))));
    if (denominador == 0)
        printf("a fun��o n�o est� definida em (%d,%d) .-.", x, y);

    else
        printf("a fun��o est� definida em (%d,%d)", x, y);

    return 0;
}