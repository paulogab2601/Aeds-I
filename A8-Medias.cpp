#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{

    int num1, num2, num3, selector = 1;
    float resultado = 0;

    while (selector != 0)
    {

        cout << "1- Aritmetica\n2- Geometrica\n3- Harmonica\n4- Ponderada\n0- SAIR\n\nInsira: ";
        cin >> selector;

        system("CLS");

        cout << "Digite os 3 numeros: ";
        cin >> num1 >> num2 >> num3;

        switch (selector)
        {
        case 1:
            resultado = (num1 + num2 + num3) / 3;
            cout << "Aritmetica: " << resultado;
            break;
        case 2:
            resultado = pow(num1 * num2 * num3, 1 / 3);
            cout << "Geometrica: " << resultado << "\n\n";
            break;
        case 3:
            resultado = 3 / (1 / num1) + (1 / num2) + (1 / num3);
            cout << "Harmonica: " << resultado << "\n\n";
            break;
        case 4:
            resultado = num1 + num2 * 2 + num3 * 3;
            cout << "Ponderada: " << resultado << "\n\n";
            break;
        case 0:
            exit(0);
            break;
        default:
            cout << "Digite um valor valido!\n";
            break;
        }
    }

    return 0;
}