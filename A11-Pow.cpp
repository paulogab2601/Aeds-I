#include <iostream>

double pow(double x, double y);

int main()
{

    double x = 0, y = 0;

    std::cout << "Digite a base e o expoente, nessa ordem: ";
    std::cin >> x >> y;
    std::cin.ignore(1, '\n');

    std::cout << pow(x, y);

    return 0;
}

double pow(double x, double y)
{

    double resultado = 1;

    for (int i = 0; i < y; i++)
    {
        resultado = resultado * x;
    }

    if (y == 0)
    {
        return 1.0;
    }

    return resultado;
}//Função POW de math.h (copia)