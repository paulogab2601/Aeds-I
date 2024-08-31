#include <stdio.h>

int main() {
    int x;
    float y;

    // Leitura dos valores
    scanf("%d", &x);
    scanf("%f", &y);

    // Impressão dos valores formatados

    printf("Decimal: %05d\n", x);

    printf("Hexadecimal: %X\n", x);  

    printf("Octal: %o\n", x);

    printf("Char: %c\n", x);

    printf("Com 6 casas decimais: %.6f\n", y);

    printf("Com 2 casas decimais: %.2f\n", y);

    printf("Notação científica (lower): %.6e\n", y);

    printf("Notação científica (upper): %.6E\n", y);

    return 0;
}
