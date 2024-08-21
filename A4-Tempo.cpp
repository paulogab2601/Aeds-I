#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    int segundos, minutos, horas, varAux;
    segundos = 0;

    while (segundos <= 0)
    {
        cout << "Digite o tempo em segundos (Tempo deve ser maior que 0!): ";

        cin >> segundos;
    }

    cout << "\n";

    horas = segundos / 3600;
    varAux = segundos % 3600;
    minutos = varAux / 60;
    segundos = varAux - (minutos * 60);

    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << minutos << endl;
    cout << "Segundos: " << segundos << endl;

    return 0;
}