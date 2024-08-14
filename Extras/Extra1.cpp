#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float num = 0;
    float x = 0;

    cout << "Digite um valor real (use ponto, nao virgula!)\n";
        cin >> num;

    x = sqrt((num/9)/M_PI);

    cout << "O raio para um nono da area e: " << x << endl;
    
    return 0;
}