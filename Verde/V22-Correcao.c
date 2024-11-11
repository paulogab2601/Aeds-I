#include <stdio.h>
#include <stdlib.h>

void cadastrarRespostas(int n_alunos, int n_questoes, char **respostas);
void cadastrarGabarito(int n_questoes, char gabarito[]);
int *calcularPontuacao(int n_alunos, int n_questoes, char **respostas, char gabarito[]);

int main()
{

    int n_alunos = 0;
    int n_questoes = 0, *pontuacao;
    char **matriz_alunos;
    char *gabarito;

    scanf("%d", &n_alunos);
    scanf("%d", &n_questoes);

    matriz_alunos = malloc(n_alunos * sizeof(char *));
    gabarito = malloc(n_questoes * sizeof(char));

    if (gabarito == NULL) // Defesa para alocação de memória
    {
        return 1;
    }

    if (matriz_alunos == NULL) // Defesa para alocação de memória
    {
        return 1;
    }

    for (int i = 0; i < n_alunos; i++)
    {
        matriz_alunos[i] = malloc(n_questoes * sizeof(char)); // Aloca memória para as questões
        if (matriz_alunos[i] == NULL)                         // Se nao tiver memória retorna erro
        {
            return 1;
        }
    }

    cadastrarRespostas(n_alunos, n_questoes, matriz_alunos);
    cadastrarGabarito(n_questoes, gabarito);
    pontuacao = calcularPontuacao(n_alunos, n_questoes, matriz_alunos, gabarito);

    for (int i = 0; i < n_alunos; i++)
    {
        printf("%d ", pontuacao[i]);
    }

    for (int i = 0; i < n_alunos; i++)
    {
        free(matriz_alunos[i]);
    }

    free(gabarito);
    free(pontuacao);

    return 0;
}

void cadastrarRespostas(int n_alunos, int n_questoes, char **respostas) // Matriz com as respostas
{

    for (int i = 0; i < n_alunos; i++)
    {
        for (int j = 0; j < n_questoes; j++)
        {
            scanf(" %c", &respostas[i][j]);
        }
    }
    return;
}

void cadastrarGabarito(int n_questoes, char gabarito[])
{

    for (int i = 0; i < n_questoes; i++)
    {
        scanf(" %c", &gabarito[i]);
    }

    return;
}

int *calcularPontuacao(int n_alunos, int n_questoes, char **respostas, char gabarito[])
{
    int *pontuacao = malloc(n_alunos * sizeof(int));

    for (int i = 0; i < n_alunos; i++)
    {
        pontuacao[i] = 0;
        for (int j = 0; j < n_questoes; j++)
        {
            if (respostas[i][j] == gabarito[j])
            {
                pontuacao[i] += 1;
            }
        }
    }

    return pontuacao;
}
