#include <stdio.h>

int main()
{
    int vitorias = 0;
    char resultado;

    for (int i = 0; i < 6; i++)
    {
        scanf(" %c", &resultado);
        if (resultado == 'V')
        {
            vitorias++;
        }
    }

    if (vitorias == 6 || vitorias == 5)
    {
        printf("1\n");
    }
    else if (vitorias == 4 || vitorias == 3)
    {
        printf("2\n");
    }
    else if (vitorias == 2 || vitorias == 1)
    {
        printf("3\n");
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}
