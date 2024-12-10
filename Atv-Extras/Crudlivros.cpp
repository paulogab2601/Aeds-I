#include <iostream>
#include <string>
#include <string>

using namespace std;

class Livro
{
public:
    Livro();
    Livro(string, int, string); // Construtor para criação do livro

    void CriaLivro();
    void VerLivro() const; // apenas mostra os livros
    void EditaLivro();

    // membros dos livros
    string nome;
    string autor;
    int ano;
};

// Construtor padrão
Livro::Livro() : nome(""), autor(""), ano(0) {}

// Construtor parametrizado
Livro::Livro(string titulo, int ano, string autor) : nome(titulo), ano(ano), autor(autor) {}

// Método para criar um livro
void Livro::CriaLivro()
{
    cout << "Digite o nome do livro: ";
    cin.ignore();
    getline(cin, nome); // Deve ser utilizado o getline para pegar toda a linha ao inves de utilizar o cout

    cout << "Digite o autor do livro: ";
    getline(cin, autor);

    cout << "Digite o ano de lançamento: ";
    cin >> ano;
}

// Método para visualizar um livro
void Livro::VerLivro() const
{
    cout << "\n--- Livro ---\n";
    cout << "Nome: " << nome << "\nAutor: " << autor << "\nAno: " << ano << endl;
}

// Método para editar um livro
void Livro::EditaLivro()
{
    cout << "Editar informações do livro:\n";
    cout << "Novo nome (atual: " << nome << "): ";
    cin.ignore();
    getline(cin, nome);

    cout << "Novo autor (atual: " << autor << "): ";
    getline(cin, autor);

    cout << "Novo ano (atual: " << ano << "): ";
    cin >> ano;
}

int main()
{
    Livro *vet_livro = new Livro[50]; // Vetor dinâmico para armazenar os livros usando o construtor padrao
    int vet_livro_p = 0;              // Quantidade atual de livros
    int selector = 1;

    while (selector != 0)
    {
        cout << "\n--- Menu ---\n";
        cout << "1 - Criar novo livro\n";
        cout << "2 - Visualizar lista de livros\n";
        cout << "3 - Atualizar livro\n";
        cout << "4 - Deletar livro\n";
        cout << "0 - Sair\n";
        cout << "Escolha uma opção: ";
        cin >> selector;

        switch (selector)
        {
        case 1:
        { // Criar um novo livro
            vet_livro[vet_livro_p].CriaLivro();
            vet_livro_p++;
            break;
        }
        case 2:
        { // Visualizar livros cadastrados
            if (vet_livro_p == 0)
            {
                cout << "Nenhum livro cadastrado!\n";
            }
            else
            {
                for (int i = 0; i < vet_livro_p; i++)
                {
                    cout << "Livro [" << i + 1 << "]:";
                    vet_livro[i].VerLivro();
                }
            }
            break;
        }
        case 3:
        { // Atualizar um livro
            if (vet_livro_p == 0)
            {
                cout << "Nenhum livro para editar!\n";
            }
            else
            {
                int indice;
                cout << "Digite o número do livro que deseja editar (1 a " << vet_livro_p << "): ";
                cin >> indice;

                if (indice < 1 || indice > vet_livro_p)
                {
                    cout << "Índice inválido!\n";
                }
                else
                {
                    vet_livro[indice - 1].EditaLivro();
                }
            }
            break;
        }
        case 4:
        { // Deletar um livro
            if (vet_livro_p == 0)
            {
                cout << "Nenhum livro para deletar!\n";
            }
            else
            {
                int indice;
                cout << "Digite o número do livro que deseja deletar (1 a " << vet_livro_p << "): ";
                cin >> indice;

                if (indice < 1 || indice > vet_livro_p)
                {
                    cout << "Índice inválido!\n";
                }
                else
                {
                    // Deslocar os elementos para "apagar" o livro
                    for (int i = indice - 1; i < vet_livro_p - 1; i++)
                    {
                        vet_livro[i] = vet_livro[i + 1];
                    }
                    vet_livro_p--; // Reduzir a contagem de livros
                    cout << "Livro deletado com sucesso!\n";
                }
            }
            break;
        }
        case 0:
            cout << "Saindo do programa.\n";
            break;
        default:
            cout << "Opção inválida!\n";
        }
    }

    delete[] vet_livro; // Libera a memória alocada dinamicamente
    return 0;
}
