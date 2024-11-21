#include <stdio.h>

int main(){

    FILE *file;

    file = fopen("numeros.txt", "w");

    for (int i = 0; i < 11; i++)
    {
        fprintf(file, "%d\n", i);
    }
    
    fclose(file);

    return 0;
}