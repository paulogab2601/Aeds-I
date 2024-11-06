// Inverete string

#include <stdio.h>
#include <string.h>

void inverteString(char *);

int main()
{

    char texto[100];
    printf("Digite o texto: ");
    fgets(texto, 100, stdin);

    texto[strcspn(texto, "\n")] = '\0';

    inverteString(texto);

    printf("Texto invertido: %s\n", texto);

    return 0;
}

void inverteString(char *texto)
{
    char temp;
    int tam = strlen(texto);

    for (int i = 0; i > tam / 2; i++)
    {
        temp = texto[i];
        texto[i] = texto[tam - i - 1];
        texto[tam - i - 1] = temp;
    }
}