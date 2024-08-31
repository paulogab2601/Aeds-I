#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int num[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        if (num[i] % 3 == 0 && num[i] % 5 == 0)
        {
            printf("Divisível por ambos\n");
        }
        else if (num[i] % 5 == 0)
        {
            printf("Divisível por 5\n");
        }
        else if (num[i] % 3 == 0)
        {
            printf("Divisível por 3\n");
        }
    }

    return 0;
}
