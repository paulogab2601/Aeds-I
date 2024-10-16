#include <stdio.h>

void F_calculaHora(int horaI, int horaF);

int main()
{

    int horaI = 0, horaF = 0;

    scanf("%d %d", &horaI, &horaF);

    F_calculaHora(horaI, horaF);

    return 0;
}

void F_calculaHora(int horaI, int horaF)
{

    if (horaF <= horaI)
    {
        horaF = (24 - horaI) + horaF;
    }
    else
    {
        horaF = horaF - horaI;
    }

    printf("O JOGO DUROU %d HORA(S)", horaF);
} //Achei facil 