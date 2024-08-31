#include <stdio.h>

int main()
{

    int segundos = 0, minutos = 0, horas = 0;
    scanf("%d", &segundos);

    horas = segundos / (60 * 60);
    segundos = segundos % (60 * 60);
    minutos = segundos / 60;
    segundos = segundos % 60;

    printf("%02d:%02d:%02d", horas, minutos, segundos);

    return 0;
}