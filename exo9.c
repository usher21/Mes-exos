#include <stdio.h>

int main() {
    int N, numbers[100];
    int i, j, k, pos, maxLg, Lg;

    printf("Entrez la valeur de N: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        printf("Entrez un nombre: ");
        scanf("%d", &numbers[i]);
    }

    maxLg = 1;
    pos = 0;

    for (i = 0; i < N-1; i++)
    {
        Lg = 1;
        for (j = i+1; j < N; j++)
        {
            if (numbers[j] > numbers[j-1])
                {
                    Lg++;
                }
            else
                {
                    break;
                }
        }

        if (Lg > maxLg)
        {
            maxLg = Lg;
            pos = i;
        }
    }

    printf("La plus longue séquence croissante est: ");
    for (k = pos; k < pos + maxLg; k++)
    {
        printf("%d ", numbers[k]);
    }
    printf("\nElle commence à la position: %d\n", pos + 1);

    return 0;
}

