#include <iostream>

int main()
{
    int mes = 1;

    while (mes != 0)
    {
        std::cout << "Digite o mes (0 para sair): ";
        std::cin >> mes;

        if (mes == 0)
            break;

        switch (mes)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            std::cout << "31 dias\n\n";
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            std::cout << "30 dias\n\n";
            break;
        case 2:
            std::cout << "28 dias\n\n";
            break;
        default:
            std::cout << "Valor inválido\n\n";
            break;
        }
    }

    return 0;
}
