#include <stdio.h>
#include <stdlib.h>

void trocaVetor(int *);

int main()
{

    int *vetor;
    vetor = (int *)malloc(20 * sizeof(int));

    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &vetor[i]);
    }

    trocaVetor(vetor);

    for (int i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i + 1, vetor[i]);
    }

    return 0;
}

void trocaVetor(int *vetor)
{
    int varAux = 0;

    for (int i = 0; i < 10; i++)
    {
        varAux = vetor[i];
        vetor[i] = vetor[19 - i];
        vetor[19 - i] = varAux;
    }

    return;
}