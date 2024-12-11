#include <iostream>

double media(int *v, int t)
{
    if (t < 0)
        return 0;

    return v[t] + media(v, t - 1);
}
int main()
{
    int n[] = {1, 2, 3, 2, 4, 2, 5};        // Vetor de exemplo
    int tamanho = sizeof(n) / sizeof(n[0]); // Tamanho do vetor

    std::cout << media(n, tamanho - 1) / tamanho << std::endl;

    return 0;
}