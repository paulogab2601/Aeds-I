#include <iostream>

using namespace std;

int fibonacci(int n);

int fibonacci(int n)
{
    int aux;

    if (n == 0) //Se for 0, retorna 0
        return 0;

    if (n == 1)//Se for 1 retorna 1
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2); //faz o fibonacci 2x 
}