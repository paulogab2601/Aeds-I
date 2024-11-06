#include <stdio.h>

int main()
{

    int x = 0, y = 0;
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
    {
        printf("primeiro");
    }
    if (x < 0 && y > 0)
    {
        printf("segundo");
    }
    if (x < 0 && y < 0)
    {
        printf("terceiro");
    }
    if (x > 0 && y < 0)
    {
        printf("quarto");
    }

    return 0;
}