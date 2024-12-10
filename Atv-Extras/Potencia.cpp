#include <iostream>

int potenciaRecursiva(int b, int p);

int potenciaRecursiva(int b, int p)
{

    if (p == 0)
    {
        return 1;
    }
    if (b == 0)
        return 0;

    return b * potenciaRecursiva(b, p - 1);
}
 
int main()
{
    int base, expoente;
    std::cout << "Digite a base: ";
    std::cin >> base;
    std::cout << "Digite o expoente: ";
    std::cin >> expoente;

    int resultado = potenciaRecursiva(base, expoente);
    std::cout << "Resultado: " << resultado << std::endl;

    return 0;
}