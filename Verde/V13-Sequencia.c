#include <stdio.h>

int main()
{

    int array[2], soma = 0, varAux = 0;

    scanf("%d %d", &array[0], &array[1]);

    if (array[0] > array[1])
    {
        varAux = array[0];
        array[0] = array[1];
        array[1] = varAux;
    }

    for (int i = array[0]; i <= array[1]; i++)
    {
        printf("%d ", i);
        soma += i;
    }

    printf("Soma = %d", soma);
    // Ficou feio e ineficiente pra caramba, mas por hj é isso KKKKKKKK

    return 0;
}