// Conversao de bases

#include <iostream>

using namespace std;

string converteBin(int num);

int main()
{

    int num;
    cout << "Digite o numero na base decimal e ele sera convertido para binario!\n";
    cin >> num;

    string bin = converteBin(num);

    cout << bin << endl;
    cout << "\n";

    return 0;
}

string converteBin(int num)
{

    string bin;
    int x;
    
    while (num > 0)
    {
        x = num % 2; // Aqui é onde acontece a operação de conversao
        num = num/2; // Atualizando o num a cada loop 

        if (x == 1)
        {
            bin.insert(bin.begin(), '1'); //Adicionando o numero ao incio do array (string = array de char)
        }
        else
        {
            bin.insert(bin.begin(),'0'); //Adicionando o numero ao incio do array (string = array de char)
        }
    }

    return bin;
}