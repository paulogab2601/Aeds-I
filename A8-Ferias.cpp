#include <iostream>

using namespace std;

int main()
{

    double distancia, chuva;
    cout << "Digite a distancia e a probabilidade de chuva (0 -100): ";
    cin >> distancia >> chuva;
    cout << "\n";

    if (distancia < 500)
    {
        if (distancia > 300 && chuva > 58)
        {
            cout << "A viagem nao é viavel";
            exit(0);
        }
        else
        {
            cout << "A viagem e viavel!\nVoce vai gastar " << (float)((distancia / 12) * 6.40) << "R$ com combustivel";
            exit(0);
        }
    }
    cout << "A viagem nao e viavel";

    return 0;
}