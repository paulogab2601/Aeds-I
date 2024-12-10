#include <iostream>

using namespace std;

int fatorial(int n);

int fatorial(int n)
{

    if (n != 0)
        return n * fatorial(n - 1);
    return 1;
}

int main()
{

    int resultado = 0, num;

    cout << "Digite um numero e saiba seu fatorial: ";
    cin >> num;

    resultado = fatorial(num);

    cout << "Fatorial: " << resultado;

    return 0;
}