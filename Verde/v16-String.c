#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int strleng(char *string);

int main()
{

    int n_strings = 0;
    char *maior = malloc(50 * sizeof(char));
    char *lexografia = malloc(50 * sizeof(char));

    scanf("%d", &n_strings);

    char **strings = malloc(n_strings * sizeof(char *));

    for (int i = 0; i < n_strings; i++)
    {
        strings[i] = malloc(50 * sizeof(char));

        scanf("%49s", strings[i]);
    }

    maior = strings[0];
    lexografia = strings[0];

    for (int i = 0; i < n_strings; i++)
    {
        if (strleng(strings[0]) < strleng(strings[i])) // Era pra ser strlen mas a função já existia em string.h, entao coloquei leng
        {
            maior = strings[i];
        }
        if (strcmp(strings[i], lexografia) > 0)
        {
            lexografia = strings[i];
        }
    }

    printf("%s \n", maior);
    printf("%s", lexografia);

    return 0;
}

int strleng(char *string)
{

    int i = 0;
    while (string[i] != '\0')
    {
        i++;
    }

    return i;
}
