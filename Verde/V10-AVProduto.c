#include <stdio.h>

int main()
{
    int idade, gostei;
    char genero;
    int total_gostaram_m = 0, total_gostaram_f = 0;
    int idade_mais_velho_m = -1, idade_mais_novo_f = 101;
    int total_respostas = 0, total_nao_gostaram = 0;

    while (1)
    {
        scanf("%d", &idade);
        if (idade < 0)
            break;
        scanf(" %c", &genero);
        scanf("%d", &gostei);

        total_respostas++;
        if (gostei == 1)
        {
            if (genero == 'M')
            {
                total_gostaram_m++;
                if (idade > idade_mais_velho_m)
                {
                    idade_mais_velho_m = idade;
                }
            }
            else if (genero == 'F')
            {
                total_gostaram_f++;
            }
        }
        else
        {
            total_nao_gostaram++;
            if (genero == 'F' && idade < idade_mais_novo_f)
            {
                idade_mais_novo_f = idade;
            }
        }
    }

    printf("Masculino: %d \n", total_gostaram_m);
    printf("Feminino: %d \n", total_gostaram_f);
    printf("%d anos\n", idade_mais_velho_m);
    printf("%d anos\n", idade_mais_novo_f == 101 ? -1 : idade_mais_novo_f);

    double percentual_nao_gostaram = (double)total_nao_gostaram / total_respostas * 100;
    printf("%.2f%\n", percentual_nao_gostaram);

    return 0;
}
