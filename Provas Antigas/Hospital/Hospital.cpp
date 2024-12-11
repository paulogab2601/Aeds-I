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

paciente Excluir(paciente *vet_pac);
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

    return newPaciente;
}

paciente Excluir(paciente *vet_pac)
{
    
}

void paciente::vis_pac()
{

    cout << "Nome:" << nome << "\nId: " << id << "\nNumero de comorbidades: " << total_doencas;
}

/*&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&*/

int main()
{
    int selector = 1;
    paciente *vet_pac = new paciente[MAX_PAC]; // Vetor com os pacientes
    int pv_pac = 0;

    while (selector != 0)
    {
        cout << "1- Cadastro de Paciente\n2- Ver pacientes cadastrados\n3- Ver dados do Paciente\n4- Deletar paciente\n0- Sair\nDigite: ";

        cin >> selector;

        switch (selector)
        {
        case 1:
            vet_pac[pv_pac] = Cadastro();
            pv_pac++;
            break;

        case 2:
            cout << "\nFichas cadastradas: \n";
            for (int i = 0; i < pv_pac; i++)
            {
                vet_pac[i].vis_pac();
                cout << "\n";
            }
            break;
        case 3:

        default:
            cout << "Digite uma opcao valida!\n\n";
            break;
        }
    }

    return 0;
}