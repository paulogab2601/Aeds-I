#include <stdio.h>

int main()
{

    FILE *arquivo = fopen("numeros.txt", "r");
    char s[101];

    int count = 0;

    while (fgets(s, 100 * sizeof(char), arquivo) != NULL)
    {
        count++;
        printf("%s", s);
    }

    printf("Num de linhas: %d", count);
    fclose(arquivo);

    return 0;
}
