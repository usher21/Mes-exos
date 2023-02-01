#include<stdio.h>
int main()
{
    int i,nbr,som;
    som=0;
    do
    {
        printf("Donner un nombre: ");
        scanf("%d",&nbr);
    }
    while(nbr<=0);

    for(i=1;i<nbr;i++)
    {
        if( nbr % i == 0 )
        {
            som=som+i;
        }
    }
    if( som == nbr)
    {
        printf("%d est un nombre parfait",nbr);
    }
    else
        printf("%d n'est pas un nombre parfait",nbr);
return 0;
}
