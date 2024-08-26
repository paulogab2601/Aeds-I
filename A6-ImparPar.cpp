#include <iostream>

using namespace std;

int main(){

    cout << "Digite um numero: ";
    int numero = 0;
    cin >> numero;
    
    cout << "\n";

    if (numero%2 == 0)
    {
        cout << "O numero e par" << endl;
    }else{
        cout << "O numero e impar" << endl;
    }
    
    return 0;
}