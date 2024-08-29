#include <iostream>

using namespace std;

int main()
{

    int num = 0;
    cout << "Digite um numero inteiro, e saiba se é divisivel por 3 e por 5: ";
    cin >> num;

    if (num%3 == 0 && num%5 == 0)
    {
        cout << "O numero e divisivel por tres e por cinco ao mesmo tempo!";
    }else{
        cout << "O numero NAO e dvisivel por 3 e por 5 ao mesmo tempo";
    }
    
    return 0;
}