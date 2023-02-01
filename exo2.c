#include<stdio.h>
int main()
{
    int nbr,som,i;
    som=0;
    do
    {
        printf("Donner un nombre: ");
        scanf("%d",&nbr);
    }
    while(nbr<0);
        for(i=1; i<=nbr; i++)
        {
            som=som+i;
        }
        printf("La somme des entiers jusqu'a %d est: %d",nbr,som);

return 0;
}
