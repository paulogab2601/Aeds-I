#include <iostream>
#include <string>

using namespace std;
#define MAX_PAC 50

class paciente
{

public:
    string nome;
    int id;
    char genero;
    int doencas[100];
    int total_doencas = 0;

    paciente(string, int, char);
    void vis_pac();
};

/*&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&*/

void Excluir(paciente *vet_pac, int &t);
paciente Cadastro();

/*&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&*/

paciente::paciente(string nome = " ", int id = 0, char genero = 'x')
{
    this->nome = nome;
    this->genero = genero;
    this->id = id;
}

paciente Cadastro()
{

    paciente newPaciente;
    int comorb = 1;
    char select = 'N';

    cout << "Digite o nome do paciente: ";
    cin.ignore();
    getline(cin, newPaciente.nome); // recebe o metodo de entrada e a variavel para alocação

    cout << "Digite o ID: ";
    cin >> newPaciente.id;

    cout << "Digite o genero (M ou F): ";
    cin >> newPaciente.genero;

    do
    {

        cout << "Paciente possui alguma comorbidade previa? (S - N): ";
        cin >> select;

        if (select != 'S' && select != 's' && select != 'N' && select != 'n')
        {
            cout << "Digite uma opcao valida!";
        }

    } while (select != 'S' && select != 's' && select != 'N' && select != 'n');

    if (select == 'S' || select == 's')
    {
        cout << "Digite o cod da comorbidade; Digite 0 para parar\n";

        int i = 0;

        while (comorb != 0)
        {
            if (comorb != 0)
            {
                cout << "Digite:";
                cin >> comorb;
                newPaciente.doencas[i] = comorb;
                i++;
                newPaciente.total_doencas++;
            }
        }
        newPaciente.total_doencas--;
    }

    cout << "Paciente cadastrado com sucesso!\n";

    return newPaciente;
}

void Excluir(paciente *vet_pac, int &t)
{
    int idEx;
    cout << "Digite o id do paciente a ser excluido: ";
    cin >> idEx;

    bool encontrado = false;
    for (int i = 0; i < t; i++)
    {
        if (vet_pac[i].id == idEx)
        {
            // Excluir o paciente
            vet_pac[i].genero = 'x';
            vet_pac[i].id = 0;
            vet_pac[i].total_doencas = 0;
            vet_pac[i].nome = " ";

            // Zerar as doenças
            for (int j = 0; j < 100; j++)
            {
                vet_pac[i].doencas[j] = 0;
            }

            // Reorganiza o vetor
            for (int j = i; j < t - 1; j++)
            {
                vet_pac[j] = vet_pac[j + 1];
            }

            // Atualiza o tamanho
            t--;
            encontrado = true;
            break; // Encontrou e excluiu, sai do loop
        }
    }

    if (encontrado)
    {
        cout << "Paciente excluido com sucesso!\n"
             << endl;
    }
    else
    {
        cout << "Paciente nao encontrado!\n"
             << endl;
    }
}

void paciente::vis_pac()
{

    cout << "Nome:" << nome << "\nId: " << id << "\nNumero de comorbidades: " << total_doencas << "\n";
}

/*&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&*/

int main()
{
    int selector = 1;
    paciente *vet_pac = new paciente[MAX_PAC]; // Vetor com os pacientes
    int pv_pac = 0, idPac = 0;

    while (selector != 0)
    {
        cout << "1- Cadastro de Paciente\n2- Ver pacientes cadastrados\n3- Ver dados do Paciente\n4- Deletar paciente\n0- Sair\nDigite: ";

        cin >> selector;

        system("CLS");

        switch (selector)
        {
        case 1:
            vet_pac[pv_pac] = Cadastro();
            pv_pac++;

            system("PAUSE");
            system("CLS");
            break;

        case 2:
            cout << "Fichas cadastradas: \n\n";
            for (int i = 0; i < pv_pac; i++)
            {
                vet_pac[i].vis_pac();
                cout << "\n";
            }

            system("PAUSE");
            system("CLS");
            break;
        case 3:
            cout << "Digite o id do paciente: ";
            cin >> idPac;

            for (int i = 0; i < pv_pac; i++)
            {
                if (idPac == vet_pac[i].id)
                {
                    vet_pac[i].vis_pac();
                }
            }

            system("PAUSE");
            system("CLS");

            break;
        case 4:
            Excluir(vet_pac, pv_pac);
            system("PAUSE");
            system("CLS");
            break;
        case 0:
            exit(0);
            break;
        default:
            cout << "Digite uma opcao valida!\n\n";
            break;
        }
    }

    return 0;
}