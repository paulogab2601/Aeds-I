#include <stdio.h>
typedef struct product
{
    int id;
    int qnt;
    double preco;
    char nome[100];
} Produto;

void registraVenda();
Produto cadastroProduto();
double precoMedio(Produto *prod, int n);

int main()
{
    char prodVend[100];
    int n;
    double precoMedio;

    printf("Quantidade de produtos: ");
    scanf("%d", &n);

    Produto produtos[n];
    for (int i = 0; i < n; i++)
    {
        produtos[i] = cadastroProduto();
    }

}

Produto cadastroProduto()
{
    Produto prod;
    printf("Digite o nome do produto: ");
    fgets(prod.nome, 100, stdin);

    printf("\n");

    printf("Digite o id: ");
    scanf("%d", &prod.id);

    printf("Digite o preco: ");
    scanf("%d", &prod.preco);

    printf("Digite a quantidade: ");
    scanf("%d", &prod.qnt);

    return prod;
}

double precoMedio(Produto *prod, int n)
{

    double soma = 0;
    for (int i = 0; i < n; i++)
    {
        soma = soma + prod->preco;
    }
    return soma / n;
}

void registraVenda();