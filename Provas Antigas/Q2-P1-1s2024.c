#include <stdio.h>

void somaVetor(float a[], float b[], int tamA, int tamB)
{
    int tamResultado = tamA > tamB ? tamA : tamB; // Determina o tamanho do vetor resultante
    float resultado[tamResultado];                // Cria o vetor resultado

    // Inicializa o vetor resultado com 0
    for (int i = 0; i < tamResultado; i++)
    {
        resultado[i] = 0;
    }

    // Soma os vetores
    for (int i = 0; i < tamA; i++)
    {
        resultado[i] += a[i];
    }
    for (int i = 0; i < tamB; i++)
    {
        resultado[i] += b[i];
    }

    // Imprime o vetor resultado
    printf("Resultado da soma: ");
    for (int i = 0; i < tamResultado; i++)
    {
        printf("%.2f ", resultado[i]);
    }
    printf("\n");
}

int main()
{
    float a[] = {1.0, 2.0, 3.0};
    float b[] = {4.0, 5.0};

    int tamA = sizeof(a) / sizeof(a[0]);
    int tamB = sizeof(b) / sizeof(b[0]);

    somaVetor(a, b, tamA, tamB); // Chama a função com os tamanhos

    return 0;
}
