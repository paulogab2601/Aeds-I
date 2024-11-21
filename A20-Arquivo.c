#include <stdio.h>
#include <stdlib.h>

int main()
{

    char *texto = malloc(1001 * sizeof(char));
    FILE *arquivo;

    printf("Digite um texto de até 1000 caracteres: ");

    arquivo = fopen("texto.txt", "w");

    fgets(texto, 1000, stdin);

    fprintf(arquivo, texto);

    fclose(arquivo);

    return 0;
}