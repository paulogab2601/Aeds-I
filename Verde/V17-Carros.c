#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct carro
{
    char marca[50];
    int ano;
    double valor;
} carro;

carro newCarro();
void selectCarro(carro *, double, int);

int main()
{
    int n_carros = 0;
    carro *vet_carros;
    double MAX_preco;
    scanf("%d", &n_carros);

    vet_carros = malloc(n_carros * sizeof(carro));

    for (int i = 0; i < n_carros; i++)
    {
        vet_carros[i] = newCarro();
    }

    scanf("%lf", &MAX_preco);

    selectCarro(vet_carros, MAX_preco, n_carros);

    free(vet_carros);

    return 0;
}

carro newCarro()
{

    carro c;
    getchar();
    fgets(c.marca, sizeof(c.marca), stdin);
    c.marca[strcspn(c.marca, "\n")] = 0; // Remove o newline
    scanf("%d", &c.ano);
    scanf("%lf", &c.valor);

    return c;
}

void selectCarro(carro *vet_carro, double max_preco, int n_carros)
{
    printf("Carros com preco menor que %.2lf: \n", max_preco);
    for (int i = 0; i < n_carros; i++)
    {
        if (vet_carro[i].valor < max_preco)
        {
            printf("Marca: %s, Ano: %d, Preco: %.2lf \n", vet_carro[i].marca, vet_carro[i].ano, vet_carro[i].valor);
        }
    }

    return;
}
