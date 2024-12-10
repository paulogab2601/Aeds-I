#include <iostream>

int somaSuc(int, int);

int somaSuc(int a, int b)
{

    if (b == 0)
        return 0;

    return a + somaSuc(a, b - 1);
}

int main()
{
    int a = 5, b = 7;

    std::cout << "Resultado da soma repetida de " << a << " por " << b << " vezes e: " << somaSuc(a, b) << std::endl;

    return 0;
}