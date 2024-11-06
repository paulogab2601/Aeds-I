// Conta letras
#include <stdio.h>

int contaLetras(char *, char);

int main()
{
    char texto[100];
    char letra;

    printf("Digite o texto: ");
    fgets(texto, 100, stdin);

    printf("Digite a letra: ");
    scanf("%c", &letra);

    printf("O numero de letras '%c' eh: %d", letra, contaLetras(texto, letra));

    return 0;
}

int contaLetras(char *vet, char x)
{
    int cont = 0;

    for (int i = 0; i < 100; i++)
    {
        if (*vet == x)
        {
            cont++;
        }
        vet++;
    }
    return cont;
}