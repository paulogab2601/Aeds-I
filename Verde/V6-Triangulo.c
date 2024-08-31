#include <stdio.h>

int main()
{
    float x, y, z;

    scanf("%f %f %f", &x, &y, &z);
 

    if ((x + y > z) && (x + z > y) && (y + z > x))
    {
        if (x == y && y == z)
        {
            printf("Triangulo equilatero");
        }
        else if (x == y || y == z || x == z)
        {
            printf("Triangulo isosceles");
        }
        else
        {
            printf("Triangulo escaleno\n");
        }
    }
    else
    {
        printf("Triangulo invalido");
    }

    return 0;
}
