#include <iostream>

int busca(int *v, int i, int t);

int busca(int *v, int i, int t)
{
    if (t < 0)
        return -1;
    if (v[t] == i)
        return t;

    return busca(v, i, t - 1);
}