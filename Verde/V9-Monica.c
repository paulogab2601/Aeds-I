#include <stdio.h>

int main()
{
    int M; // Monica
    int A; // F a
    int B; // F b

    scanf("%d", &M);

    scanf("%d", &A);
    scanf("%d", &B);

    int C = M - A - B;

    int maisVelho = A;
    if (B > maisVelho)
    {
        maisVelho = B;
    }
    if (C > maisVelho)
    {
        maisVelho = C;
    }

    printf("%d\n", maisVelho);

    return 0;
}
