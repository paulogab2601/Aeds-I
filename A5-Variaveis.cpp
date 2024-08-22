//Codigo escrito para rodar num ".c"

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char v1 = '0';
    float v2 = 0;
    double v3 = 0;
    int v4 = 0;

    printf("Digite char, float, double, int, nessa ordem \n");
    scanf(" %c", &v1);  //Espaço em branco antes do "%c" para remover o caractere inicial
    scanf("%f", &v2);
    scanf("%lf", &v3);
    scanf("%d", &v4); 

    printf("Char = %c \nFloat = %f \nDouble = %lf \nInt = %d\n", v1, v2, v3, v4);

    return 0;
}

    // char *nome =(char *) malloc(sizeof(char));


