#include <stdio.h>

int main()
{

    int p1 = 0, p12 = 0, p2 = 0, p21 = 0;
    double d1 = 0, d2 = 0;

    scanf("%d %d %lf", &p1, &p12, &d1);
    scanf("%d %d %lf", &p2, &p21, &d2);

    d1 = (p12 * d1) + (p21 * d2);

    printf("VALOR A PAGAR: R$ %.2lf", d1);

    return 0;
}