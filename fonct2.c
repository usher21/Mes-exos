#include<stdio.h>
#include"fonction.h"

int main()
{
    int m,an;

        do
        {
            printf("Donner un mois et une annee valides: \n");
            scanf("%d %d",&m,&an);
        }
        while (m<1 || m>12 || an<=0);

    int jr = nbrjour(m,an);

        printf("Voici le nombre de jour de ce mois dans cette annee: %d",jr);
}

