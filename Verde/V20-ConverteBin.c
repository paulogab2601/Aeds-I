#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int converteBin(int *, int);

int main()
{

    int *vetor;
    int n_bits = 0;

    scanf("%d", &n_bits);
    vetor = (int *)malloc(n_bits * sizeof(int));

    for (int i = 0; i < n_bits; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("%d", converteBin(vetor, n_bits));

    return 0;
}

int converteBin(int *vetor, int n_bit)
{

    int resultado = 0;

    for (int i = 0; i < n_bit; i++)
    {
        resultado += vetor[(n_bit - 1) - i] * (1 << i); //bitwise
    }

    return resultado;
}
