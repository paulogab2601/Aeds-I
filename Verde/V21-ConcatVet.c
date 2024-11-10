#include <stdio.h>
#include <stdlib.h>

int *Concat(int *, int *, int, int);

int main()
{

    int *vetorA, *vetorB, *vetorC;
    int tam_A = 0, tam_B = 0;

    scanf("%d", &tam_A);
    scanf("%d", &tam_B);

    vetorA = malloc(tam_A * sizeof(int));
    vetorB = malloc(tam_B * sizeof(int));
    vetorC = malloc((tam_A + tam_B) * sizeof(int));

    for (int i = 0; i < tam_A; i++)
    {
        scanf("%d", &vetorA[i]);
    }

    for (int i = 0; i < tam_B; i++)
    {
        scanf("%d", &vetorB[i]);
    }

    vetorC = Concat(vetorA, vetorB, tam_A, tam_B);

    for (int i = 0; i < tam_A + tam_B; i++)
    {
        printf("%d ", vetorC[i]);
    }

    free(vetorA);
    free(vetorB);
    free(vetorC);

    return 0;
}

int *Concat(int *vA, int *vB, int tA, int tB)
{

    int *vC = malloc((tA + tB) * sizeof(int));

    for (int i = 0; i < tA; i++)
    {
        vC[i] = vA[i];
    }

    for (int i = 0; i < tB; i++)
    {
        vC[tA + i] = vB[i];
    }

    return vC;
}
