#include<stdio.h>
#include<stdbool.h>
int main()
{
    int nb,i,som;
    som=0;
    do
    {
        printf("Donner un nombre: \n");
        scanf("%d",&nb);
    }
    while(nb<=0);
    for(i=1;i<=nb;i++)
    {
        if(nb%i == 0)
        {
            som=som+i;
        }
    }

    if( som == nb+1 )

            printf("%d est un nombre premier ",nb);
    else
        printf("%d n'est pas un nombre premier ",nb);

    /*    int i,nb;
        bool premier;
        do
        {
            printf("Donner un nombre: \n");
            scanf("%d",&nb);
        }
        while(nb<=0);
        premier=true;
        for(i=2;i<nb;i++)
        {
            if(nb%i == 0)
            {
                premier=false;
                break;
            }
        }
        if(premier == true)
        {
            printf("%d est nombre premier",nb);
        }
        else
            printf("%d n'est pas un nombre premier",nb);
    */
}

