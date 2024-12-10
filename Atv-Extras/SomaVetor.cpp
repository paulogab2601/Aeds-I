#include <iostream>

using namespace std;

int somaVetor(int *vetor, int n);

int somaVetor(int *vetor, int n)
{

    if (n < 0)
        return 0;

    return vetor[n] + somaVetor(vetor, n - 1);
}

int main()
{
    // Entrada:
    int *vetor;
    int tam_vet = 0, resultado;

    cout << "Digite o tamanho do vetor: ";
    cin >> tam_vet;

    vetor = (int *)malloc(tam_vet * sizeof(int));

    for (int i = 0; i < tam_vet; i++)
    {
        cin >> vetor[i];
    }

    resultado = somaVetor(vetor, tam_vet - 1);

    // Saida:

    cout << "Soma:" << resultado;

    return 0;
}