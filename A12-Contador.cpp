#include <iostream>
#include <stdlib.h>

int F_validaNota(float nota);

int main()
{

    double nota = 0, soma = 0, count = -1; // Começa o contador como -1, para dar espaço para a 1° nota

    while (nota >= 0)
    {

        std::cout << "Digite a nota num " << count + 2 << " (Para sair digite um num negativo): ";
        std::cin >> nota;

        nota = F_validaNota(nota);

        if (nota != -1 && nota != 0) // Pega o resultado de nota e toma decisão
        {
            count++;
            soma += nota;
        }
    }

    std::cout << "Media = " << soma / (count + 1); // Ajusta o contador

    return 0;
}

int F_validaNota(float nota)
{

    if (nota > 10)
    {
        std::cout << "Notas devem estar no intervalo de 0-10!\n\n";
        system("PAUSE");
        system("CLS");
        return 0;
    }
    else
    {
        if (nota <= -1)
        {
            return -1;
        }
        return nota;
    }
}