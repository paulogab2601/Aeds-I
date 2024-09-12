//Fiz algo simples de uma maneira complexa, POG | Programação Orientada a Gambiarra

#include <iostream>
#include <stdlib.h>

int main()
{

    double nota = 0, soma = 0, count = -1; // Começa o contador como -1, para dar espaço para a 1° nota

    while (nota >= 0)
    {

        std::cout << "Digite a nota num " << count + 2 << " (Para sair digite um num negativo): ";
        std::cin >> nota;

        if (nota > 10)
        {
            std::cout << "Notas devem estar no intervalo de 0-10!\n\n";
            system("PAUSE");
            system("CLS");
        }
        else
        {
            if (nota < 0)
            {
                nota = 0;
                break;
            }
            count++;
            soma += nota;
        }
    }
    if (count + 1 == 0)
    {
        std::cout << "Nenhuma nota valida foi inserida!\n\n";
        exit(0);
    }

    std::cout << "Media = " << soma / (count + 1); // Ajusta o contador

    return 0;
}