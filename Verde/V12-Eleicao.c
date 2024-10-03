#include <stdio.h>

int main()
{
    int voto;
    int votos_candidatos[4] = {0, 0, 0, 0}; // Votos para candidatos 1 a 4
    int votos_nulos = 0, votos_brancos = 0, total_votos = 0;

    while (1)
    {
        scanf("%d", &voto);
        if (voto == 0)
            break;

        total_votos++;
        if (voto >= 1 && voto <= 4)
        {
            votos_candidatos[voto - 1]++;
        }
        else if (voto == 5)
        {
            votos_nulos++;
        }
        else if (voto == 6)
        {
            votos_brancos++;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        printf("Candidato %d: %d voto(s)\n", i + 1, votos_candidatos[i]);
    }
    printf("Votos nulos: %d\n", votos_nulos);

    double porcentagem_brancos = (total_votos > 0) ? (double)votos_brancos / total_votos * 100 : 0.0;
    printf("Porcentagem de votos em branco: %.2f%%\n", porcentagem_brancos);

    return 0;
}
