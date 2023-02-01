#include<stdio.h>
int main()
{
    int prix,som;
    do
    {
        printf("Donner un prix: \n");
        scanf("%d",&prix);
    }
    while(prix < 0);
    som=prix;
    while(prix != 0 )
    {
        printf("Donner un autre prix: ");
        scanf("%d",&prix);
        som=som+prix;
    }
    printf("La somme des prix est %d",som);
}
