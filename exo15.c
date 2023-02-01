#include<stdio.h>
int main()
{
    int nb,i,som,n;
    int compteur=0;
    n=0;
        do
        {
            printf("Donner un nombre: \n");
            scanf("%d",&nb);
        }
        while(nb<=0);
        printf("Voici les %d premiers nombre premier:\n",nb);
        while(compteur<=nb)
        {
            som=0;
            n=n+1;
            for(i=1;i<=n;i++)
            {

                if( n%i == 0 )
                {
                    som=som+1;
                }
            }

            if( som == 2 )
            {
                printf("%d \n",n);
                compteur=compteur+1;
            }
        }
}
