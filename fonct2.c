#include<stdio.h>

int nbrjour(int m,int an)
{
    int jr;
        if(m == 2)
        {
            if( an%400 == 0 || ( an%4 == 0 && an%100 != 0))
            {
                jr=29;
            }
            else
                jr=28;
        }
        else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        {
            jr=31;
        }
        else
            jr=30;
    return jr;
}
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

