#include <stdlib.h>
#include <stdio.h>

int **preencheMatriz(int, int);
int somaBorda(int **, int, int);

int main()
{
    int linhas = 0, colunas = 0, resultado = 0;
    int** matriz;
    scanf("%d", &linhas);
    scanf("%d", &colunas);

    matriz = preencheMatriz(linhas, colunas);

    resultado = somaBorda(matriz, linhas, colunas);
    printf("%d", resultado);

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

int somaBorda(int **matriz, int linhas, int colunas)
{
    int resultado = 0;
    int cantos = matriz[0][0] + matriz[0][colunas-1] + matriz[linhas-1][0] + matriz[0][colunas-1];

    for (int i = 0; i < colunas; i++) // soma toda a parte superior
    {
        resultado += matriz[0][i];
    }
    for (int i = 0; i < colunas; i++)
    {
        resultado += matriz[linhas-1][i]; // soma toda a parte inferior
    }

    for (int i = 0; i < linhas; i++) // soma toda a parte esquerda
    {
        resultado += matriz[0][i];
    }

    for (int i = 0; i < linhas; i++) // soma toda a parte direita
    {
        resultado += matriz[i][colunas-1];
    }


    return resultado - cantos;
}