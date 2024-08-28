#include <iostream>
#include <math.h>

int main()
{

    double a = 0, b = 0, c = 0;
    double resP = 0, resP1;

    std::cout << "Digite os coeficientes A, B e C: ";
    std::cin >> a >> b >> c;

    std::cin.ignore();

    if (a == 0)
    {
        std::cout << "A NÃO PODE SER 0!\n";
    }
    

    if ((pow(b, 2) - 4 * a * c) < 0)
    {
        std::cout << "Não existem raizes";
    }
    else
    {
        resP = (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
        resP1 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;

        std::cout << "A primeira raiz e: " << resP << "\n A segunda raiz e: " << resP1;
    }

    return 0;
}