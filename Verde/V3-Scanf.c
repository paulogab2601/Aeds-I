#include <stdio.h>

int main() {
    int x;
    float y;

    // Leitura dos valores
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    printf("Digite um numero em ponto flutuante: ");
    scanf("%f", &y);

    // Impressão dos valores formatados

    printf("Decimal: %05d\n", x);

    printf("Hexadecimal: %X\n", x);  

    printf("Octal: %o\n", x);

    printf("Caractere: %c\n", x);

    printf("Com 6 casas decimais: %.6f\n", y);

    printf("Com 2 casas decimais: %.2f\n", y);

    printf("Notação cientifica (lower): %.6e\n", y);

    printf("Notação cientifica (upper): %.6E\n", y);

    return 0;
}
