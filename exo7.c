#include<stdio.h>
int main()
{
    int nbr,n,pg,i,pos;
    n=3;
    do

    {
        printf("Donner un nombre: ");
        scanf("%d",&nbr);
    }
    while(nbr<0);
        pg=0;

        for(i=1;i<n;i++)
        {
            printf("Donner un nombre: ");
            scanf("%d",&nbr);
                if(nbr>pg)
                {
                    pg=nbr;
                    pos=i+1;
                }
        }
        printf("%d est le plus grand nombre et est a la position %d ",pg,pos);
}