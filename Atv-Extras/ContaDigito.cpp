#include <iostream>

using namespace std;

int contaDigito(int);

int contaDigito(int n)
{

    if (n < 10)
        return 1;

    return 1 + contaDigito(n / 10);
}

int main()
{
    int num;

    cout << "Digite o numero: ";
    cin >> num;

    num = contaDigito(num);

    cout << num;

    return 0;
}