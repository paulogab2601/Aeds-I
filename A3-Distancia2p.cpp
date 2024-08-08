#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{

    int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
    float resultado;

    cout << "Insira as cordenadas do ponto 1: ";
    cin >> x1;
    cin >> y1;

    cout << "\nInsira as cordenadas no ponto 2: ";
    cin >> x2;
    cin >> y2;

    resultado = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "\nA distancia e de " << resultado << "cm";

    return 0;
}