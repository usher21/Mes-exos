#include<stdio.h>
#include"fonction.h"

int main()
{
    int jr,m,a;

    do
        {
            printf("Donner un jour, un mois une annee valides: \n");
            scanf("%d %d %d",&jr,&m,&a);
        }
    while ( jr<=0 || jr > 31 || m<1 || m>12 || a<=0);

    int date = date_valide(jr,m,a);

    if(date)
        {
            printf("La date est valide");
        }
    else
        printf("La date n'est pas valide");

}