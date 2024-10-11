#include <stdlib.h>
#include <iostream>
//A14
int main()
{

    int array[100];

    for (int i = 0; i < 100; i++)
    {
        array[i] = i;
        std::cout << array[i] << std::endl;
    }

    return 0;
}