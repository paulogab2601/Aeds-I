#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    int T = 0, N = 0;
    uint64_t fibonacci[61];

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (int i = 2; i <= 60; i++)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2]; // Soma os 2 anteriores a posição atual
    }

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N);
        // printf("Fib(%d) = %llu\n", N, fibonacci[N]);
    }

    return 0;
}