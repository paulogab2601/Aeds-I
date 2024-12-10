#include <iostream>

void Imprime_Vet(int *v, int t);

void Imprime_Vet(int *v, int t)
{

    if (t < 0)
        return;

    std::cout << v[t] << " ";

    return Imprime_Vet(v, t - 1);
}

int main() {
    int v[] = {1, 2, 3, 4, 5};
    int t = 4;  // O índice do último elemento (tamanho do vetor - 1)
    
    Imprime_Vet(v, t);

    return 0;
}