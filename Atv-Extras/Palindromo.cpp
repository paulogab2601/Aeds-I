#include <iostream>

bool palindromo(char *, int, int);

bool palindromo(char *n, int i, int f)
{
    if (i >= f)
        return true;

    if (n[i] != n[f])
        return false;

    return palindromo(n, i + 1, f - 1);
}