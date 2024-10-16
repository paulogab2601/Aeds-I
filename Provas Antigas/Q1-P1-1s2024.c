#include <stdio.h>
#include <string.h>

void strFunc2(char A[], int n);

void strFunc2(char A[], int n)
{
    char t;

    if (n <= 1) // Quando o n for menor ou igual a 1 para a recursão
        return;

    t = A[0];               // T recebe a primeira letra como forma de inicialização
    A[0] = A[n - 1];        // Agora a primeira letra vale a proxima letra;
    A[n - 1] = t;           // A proxima letra agora vale t
    strFunc2(&A[1], n - 2); // Chama a função novamente, formando a recursão
}

int main()
{
    // Substitua as letraas do array pelas 5 primeiras do seu nome

    char nome[5] = {'P', 'R', 'O', 'V', 'A'}; 

    strFunc2(nome, 5); //Após a recursão ter sido concluida o nome inserido foi invertido
}