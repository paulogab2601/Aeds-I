#include <iostream>

using namespace std;

class vendedor
{

private:
    float salario;
    string nome;

public:
    float getSalario(float fixo, float vendas);
    string getNome();
    vendedor(string nome1);
};

float vendedor::getSalario(float fixo, float vendas)
{

    salario = fixo + 0.04 * vendas;
    return salario;
}

string vendedor::getNome(){
    return nome;
}

vendedor::vendedor(string nome1)
{
    nome1 = nome;
}

int main()
{

    float fix, vendas;

    vendedor *v1 = new vendedor("Paulo Gabriel");

    cout << "DIgite o salario fixo do vendedor: ";
    cin >> fix;

    cout << "Digite o valor das vendas: ";
    cin >> vendas;

    cout << "\nO salario do vendedor " << v1->getNome() << " foi de: " << v1->getSalario(fix, vendas) << endl;

    return 0;
}