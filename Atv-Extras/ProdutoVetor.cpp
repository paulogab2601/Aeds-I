#include <iostream>

using namespace std;

int ProdutoVet(int *, int);

int ProdutoVet(int *vet, int n)
{

    if (n < 0)
        return 1;

    return vet[n] * ProdutoVet(vet, n - 1);
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

    resultado = ProdutoVet(vetor, tam_vet - 1);

    cout << "Resultado: " << resultado;

    return 0;
}