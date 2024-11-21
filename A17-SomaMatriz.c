#include <stdio.h>
#include <stdlib.h>
// Tá mais ou menos, mas o caminho é esse ai
int **somaMatriz(int **matriz1, int **matriz2, int coluna1, int linha2);

int main()
{
    int n_linhas1, n_colunas1, n_linhas2, n_colunas2;
    int **matriz1, **matriz2;

    printf("Numero de linhas da primeira matriz: ");
    scanf("%d", &n_linhas1);
    printf("\nNumero de colunas da primeira matriz: ");
    scanf("%d", &n_colunas1);

    printf("\nNumero de linhas da segunda matriz: ");
    scanf("%d", &n_linhas2);
    printf("\nNumero de colunas da segunda matriz: ");
    scanf("%d", &n_colunas2);

    if (n_colunas1 != n_linhas2)
    {
        printf("Impossivel somar a matriz!");
        exit(0);
    }

    matriz1 = (int **)malloc(n_linhas1 * sizeof(int *));
    matriz2 = (int **)malloc(n_linhas2 * sizeof(int *));
    for (int i = 0; i < n_linhas1; i++)
    {
        matriz1[i] = (int *)malloc(n_colunas1 * sizeof(int));
        matriz2[i] = (int *)malloc(n_colunas1 * sizeof(int));
    }

    printf("Preencha a matriz 1: ");
    for (int i = 0; i < n_linhas1; i++)
    {
        for (int j = 0; j < n_colunas1; j++)
        {
            printf("Linha %d Coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Preencha a matriz 2: ");
    for (int i = 0; i < n_linhas2; i++)
    {
        for (int j = 0; j < n_colunas2; j++)
        {
            printf("Linha %d Coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz2[i][j]);
        }
    }

    int **matriz3 = somaMatriz(matriz1, matriz2, n_colunas1, n_linhas2);

    for (int i = 0; i < n_colunas2; i++)
    {
        for (int j = 0; j < n_linhas1; j++)
        {
            printf("Linha %d e Coluna %d = %d", i + 1, j + 1, matriz3[i][j]);
        }
    }

    free(matriz1);
    free(matriz2);

    return 0;
}

#include <stdlib.h>

int **somaMatriz(int **matriz1, int **matriz2, int coluna, int linha)
{
    int **matriz3 = (int **)malloc(linha * sizeof(int *));
    for (int i = 0; i < linha; i++)
    {
        matriz3[i] = (int *)malloc(coluna * sizeof(int));
    }

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    return matriz3;
}
