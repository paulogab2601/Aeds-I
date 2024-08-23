//Primeiro exercicio no verde

#include <stdlib.h>
#include <stdio.h>


int main(){

    double fix, vendas;
    char *nome = (char *) malloc(sizeof(char));

    scanf(" %s", nome);
    scanf("%lf", &fix);
    scanf("%lf", &vendas);

    vendas = vendas * 0.15;

    fix = fix + vendas;

    printf("TOTAL = R$ %.2lf", fix);


}