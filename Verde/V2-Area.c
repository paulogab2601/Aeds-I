// Segundo exercicio para o verde
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


#define PI 3.14159

int main()
{

    int raio;
    float resultados;

    scanf("%d", &raio);

    resultados = pow(raio, 2) * PI;

    printf("%.2f ", resultados);

    resultados = 2 * raio * PI;

    printf("%.2f", resultados);

    return 0;
}