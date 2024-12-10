#include <iostream>

int elementos(int *n, int t, int e);

int elementos(int *n, int t, int e) // Conta quantas vezes um numero aparece no vetor
{

    if (t < 0)
        return 0;

    if (n[t] != e)
        return elementos(n, t - 1, e);

    return 1 + elementos(n, t - 1, e);
}

int main()
{
    int n[] = {0, 2, 3, 2, 4, 2, 5};        // Vetor de exemplo
    int tamanho = sizeof(n) / sizeof(n[0]); // Tamanho do vetor
    int e = 2;                              // Número que queremos contar

    std::cout << "O numero " << e << " aparece " << elementos(n, tamanho - 1, e) << " vezes no vetor." << std::endl;

    return 0;
}