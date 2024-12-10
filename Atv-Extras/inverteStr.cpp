#include <iostream>
#include <string>

using namespace std;

void inverteSring(char *, int, int);

void inverteSring(char *s, int i, int f)
{

    if (i >= f)
        return;

    char varAux;
    varAux = s[i];
    s[i] = s[f];
    s[f] = varAux;

    return inverteSring(s, i + 1, f - 1);
}