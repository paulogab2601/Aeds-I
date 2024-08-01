// Aula 1 - Hello Word

#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int area = 0, perimetro = 0, selector = 1;
    float pi = 3.14, raio = 0;

    while (selector != 2)
    {
        cout << "1- Calcular area e perimetro\n2- Sair\nDigite: ";
        cin >> selector;
        cin.ignore();
        if (selector == 2)
        {
            return 1;
        }
        else
        {
            cout << "Digite o raio em cm: ";
            cin >> raio;
            cin.ignore();

            if (raio < 0)
            {
                cout << "\nRaio nao pode ser negativo";
                return 0;
            }
            else
            {
                perimetro = 2 * pi * raio;
                area = pow(raio, 2)*pi;

                cout << "Area: " << area << "cm quadrado" << endl;
                cout << "Perimetro " << perimetro << "cm" << endl;
            }
        }
    }

    return 0;
}