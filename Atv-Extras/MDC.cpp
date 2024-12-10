#include <iostream>

int func_mdc(int n, int m);

int func_mdc(int n, int m)
{
    if (m == 0)
        return n;

    return func_mdc(m, n % m);
}

using namespace std;

int main()
{
    int n1, n2, resultado;

    cout << "Digite o 1 numero: ";
    cin >> n1;
    cout << "Digite o 2 numero: ";
    cin >> n2;

    resultado = func_mdc(n1, n2);

    cout << "Resultado:" << resultado;

    return 0;
}