#include <stdio.h>

int main()
{

    int n = 0, t = 0;

    scanf("%d", &n);

    for (int i = n; i != 0; i--)
    {
        t++;
        for (int j = 0; j < t; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}