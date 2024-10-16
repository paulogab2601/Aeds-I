#include <stdio.h>

int main()
{
    int n = 2;
    int s = 1;
    int divide = 1;

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; i++)
        {
            divide *= j;
        }
        s += divide;
    }

    printf("%f", s);

    return 0;
} // Questao errada