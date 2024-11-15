#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// Função para converter uma string para minúsculas
void para_minusculas(char *str)
{
    for (int i = 0; str[i]; i++)
    {
        str[i] = tolower(str[i]);
    }
}

int main()
{
    int n, contador = 0;
    char alvo[100];
    char str[100];

    scanf("%d", &n);

    scanf("%s", alvo);
    para_minusculas(alvo);

    for (int i = 0; i < n; i++)
    {
        getchar();
        fgets(str, 100, stdin);

        str[strcspn(str, "\n")] = 0;

        para_minusculas(str); // Converte a string para minúsculas

        if (strstr(str, alvo) != NULL)
        {
            contador++;
        }
    }
    printf("%d\n", contador + 1);

    return 0;
}
