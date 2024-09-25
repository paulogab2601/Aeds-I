#include <iostream>

int mdc(int a, int b);

int main()
{
    int a, b;

    std::cout << "Digite 2 numeros: ";
    std::cin >> a;
    std::cin >> b;
    std::cout << "O MDC entre eles eh: " << mdc(a, b);
}

int mdc(int a, int b) // Maximo divisor comum
{
    int resto, aux;

    if (a < b) // Caso a seja menor que b, ele inverte os valores
    {
        aux = b;
        a = b;
        b = aux;
    }

    while (b != 0)
    {
        resto = a % b; // Resto da divisao de a por b
        a = b;         // a = ao valor antigo de b
        b = resto;     // b agora é o resto
    }
    return a;
}