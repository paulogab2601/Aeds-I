#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    double num = 0;

    cout << "Digite um numero real: ";
    cin >> num;

    if (num > 0)
    {
        cout << "Raiz do numero: " << sqrt(num);
    }
    else
    {
        if (num == 0)
        {
            cout << "O numero digitado e 0";
        }
        else
        {
            cout << "Quadrado do numero: " << pow(num, 2);
        }
    }

    return 0;
}//