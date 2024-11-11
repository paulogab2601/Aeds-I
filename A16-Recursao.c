#include <stdio.h>
#include <stdlib.h>

void imprimeVetor(int *vetor, int num_array); // Imprime o vetor de forma invertida

int main()
{

    int *vetor = malloc(10 * sizeof(int));
    int num_array = 9;

    for (int i = 1; i < 10; i++)
    {
        vetor[i - 1] = i;
    }

    imprimeVetor(vetor, num_array);

    return 0;
}

void imprimeVetor(int *vetor, int num_array)
{
    if (num_array > 1)
    {
        printf("%d", vetor[num_array]);
        imprimeVetor(vetor, num_array - 1);
        return;
    }
    printf("%d", num_array);
    return;
}