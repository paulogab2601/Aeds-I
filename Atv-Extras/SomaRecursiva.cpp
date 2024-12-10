#include <iostream>

using namespace std;

int somaRecursiva(int n);

int somaRecursiva(int n)
{

    if (n == 0)
    {
        return 0;
    }

    return n + somaRecursiva(n - 1);
}

int main()
{

    int num, resultado;

    cout << "Digite um num inteiro: ";
    cin >> num;

    resultado = somaRecursiva(num);

    cout << "\n"
         << resultado;

    return 0;
}