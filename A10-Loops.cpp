#include <iostream>

int main(){

    int n;
    double soma;

    std::cout << "Digite o valor de N e obtenha a serie harmonica: ";
    std::cin >> n;
    std::cin.ignore();

    for (int i = 1; i <= n; i++)
    {
        soma+= (double) 1/i;
    }
    
    std::cout << "Serie harmonica  =  " << soma;

    return 0;
}