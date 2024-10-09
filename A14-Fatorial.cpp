#include <iostream>

int main()
{

    int num = 0;

    int fatorial = 1;
    float soma = 1;

    std::cout << "Digite um numero: ";
    std::cin >> num;

    for (int i = 0; i < num; i++)
    {
        fatorial = 1;
        for (int j = 1; j <= i + 1; j++)
        {
            fatorial *= j;
        }

        soma += 1 / fatorial;
    }

    std::cout << "Resultado: " << soma;

    return 0;
}