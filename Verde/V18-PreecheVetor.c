#include <stdio.h>
#include <stdlib.h>

void preencheVetor(int *, int);

int main()
{

    int num = 0;
    int *vetor = malloc(10 * sizeof(int));

    scanf("%d", &num);

    preencheVetor(vetor, num);

    for (int i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n", i + 1, vetor[i]);
    }

    return 0;
}

void preencheVetor(int *vetor, int num_inicial)
{

    for (int i = 0; i < 10; i++)
    {
        vetor[i] = num_inicial;
        num_inicial = num_inicial * 2;
    }

    return;
}