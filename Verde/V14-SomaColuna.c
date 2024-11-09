#include <stdio.h>
#include <stdlib.h>

int **preencheMatriz(int, int);
int *retornaVetor(int **, int, int);

int main()
{
    int linhas = 0, colunas = 0;
    scanf("%d %d", &linhas, &colunas);

    int **matriz = preencheMatriz(linhas, colunas);
    int *vetorResultado = retornaVetor(matriz, linhas, colunas);

    for (int i = 0; i < colunas; i++)
    {
        printf("%d ", vetorResultado[i]);
    }
    printf("\n");
    return 0;
}

int **preencheMatriz(int linhas, int colunas)
{
    int **matriz = (int **)malloc(linhas * sizeof(int *));

    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
        for (int j = 0; j < colunas; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    return matriz;
}

int *retornaVetor(int **matriz, int linhas, int colunas)
{
    int *vetorResultado = (int *)malloc(colunas * sizeof(int));

    for (int j = 0; j < colunas; j++)
    {
        vetorResultado[j] = 0;
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            vetorResultado[j] += matriz[i][j];
        }
    }

    return vetorResultado;
}
