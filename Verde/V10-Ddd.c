#include <stdio.h>

int main()
{

    int ddd = 0;
    scanf("%d", &ddd);

    switch (ddd)
    {
    case 11:
        printf("Brasilia");
        break;

    case 21:
        printf("Rio de janeiro");
        break;

    case 31:
        printf("Belo Horizonte");
        break;
    case 27:
        printf("Vitoria");
        break;
    case 35:
        printf("Lavras");
        break;
    case 71:
        printf("Salvador");
        break;

    case 19:
        printf("Campinas");
        break;

    default:
        printf("DDD nao cadastrado");
        break;
    }

    return 0;
}