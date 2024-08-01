//Aula 1 - Troca de Valores

#include <iostream>

using namespace std;

void trocaVar(int *pnt, int *pnt2);

int main(){

    int x = 0, y = 0, *pntx, *pnty;

    cout << "Digite o primeiro numero: ";
    cin >> x;
    cout << "Digite o segundo numero: ";
    cin >> y;

    pntx = &x;
    pnty = &y;

    trocaVar(pntx, pnty);

    cout << "Primeiro numero: "<< x << "\n";
    cout << "Segundo numero: "<< y << "\n";

    return 0;
}

void trocaVar(int *pnt, int *pnt2){

    int varAux = 0;

    varAux = *pnt;
    *pnt = *pnt2;
    *pnt2 = varAux;

}