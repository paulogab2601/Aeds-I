#include <stdio.h>

int strleng(FILE *, int *);

int main()
{
    int num_chars = 0, count_A = 0;
    FILE *arquivo = fopen("texto.txt", "r");

    num_chars = strleng(arquivo, &count_A);

    fclose(arquivo);

    printf("Chars: %d, A: %d", num_chars, count_A);

    return 0;
}
int strleng(FILE *texto, int *count_A)
{

    int count = 0;
    char c;

    while ((c = fgetc(texto)) != EOF)
    {
        if (c != '\n')
        {
            count++;
            if (c == 'a' || c == 'A')
            {
                (*count_A)++;
            }
        }
    }

    return count;
}
