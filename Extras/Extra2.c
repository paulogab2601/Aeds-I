#include <stdio.h>

int main(){

    int tempo = 0, segundo, min0, minuto, hora;

    scanf("%i", &tempo);

    hora = tempo/ 3600;
    min0 = tempo % 3600;
    minuto = min0 / 60;
    min0 = min0 - (60*minuto);
    segundo = min0;

    printf("%d, %d, %d", hora, minuto, segundo);


//Teste de mesa do exercicio da A4

    return 0;
}