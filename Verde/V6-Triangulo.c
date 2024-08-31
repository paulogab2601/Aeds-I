#include <stdio.h>

int main()
{
    float x, y, z;

    scanf("%f %f %f", &x, &y, &z);
 

    if ((x + y > z) && (x + z > y) && (y + z > x))
    {
        if (x == y && y == z)
        {
            printf("Equilatero");
        }
        else if (x == y || y == z || x == z)
        {
            printf("Isosceles");
        }
        else
        {
            printf("Escaleno\n");
        }
    }
    else
    {
        printf("Triangulo invalido");
    }

    return 0;
}
