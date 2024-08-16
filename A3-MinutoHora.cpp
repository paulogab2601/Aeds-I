// Aula 03 Conversor de minutos para horas

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int minutos = 0, minuto = 0;
    float hora = 0;

    cout << "Digite um valor em minutos e ele sera convertido para horas: ";
    cin >> minutos;
    cout << endl;

    hora = minutos / 60;
    hora = round(hora);
    minuto = minutos - (hora * 60);

    cout << hora << " hora(s) e " << minuto << " minuto(s)." << endl;

    return 0;
}
