// Aula 1 - Consumo

#include <iostream>
#include <string>

using namespace std;

int main()
{

    float distancia, tempo, combustivel;
    char *nome;
    cout << "Insira  o nome do veiculo: ";

    nome = (char *) malloc(sizeof(char));
    gets(nome);

    cout << "Digite a distancia percorrida em km: ";
    cin >> distancia;
    
    cout << "Digite o tempo gasto em horas: ";
    cin >> tempo;

    cout << "Digite a quantidade de combustivel gasto em litros: ";
    cin >> combustivel;

    cout << "A velocidade media no percurso foi de: " << distancia / tempo << "km/h\n";
    cout << "O consumo medio do(a) " << nome << " foi de "<< distancia / combustivel << "km/Litro\n";


    return 0;
}