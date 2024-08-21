#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{

    int segundos, minutos, horas;

    cout << "Digite o tempo em segundos: ";
    cin >> segundos;

    horas = segundos / (60 * 60);
    minutos = segundos / 60 - horas * 60;
    segundos = segundos - minutos * 60;

    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << minutos << endl;
    cout << "Segundos: " << segundos << endl;

    return 0;
}