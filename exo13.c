#include<stdio.h>
int main()
{
    int n,i,ns,N,som;
    N=0; ns=0;
   // Np=0;
    do

    {
        printf("Donner un nombre: \n");
        scanf("%d",&n);
    }
    while( n<0 );

    while(n != 0)
    {
        som=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            if( n%i == 0)
            {
                som=som+1;
            }

        }

        if( som == 2 )
        {
            printf("%d est un nombre premier: ",n);
            ns=ns+1;
        }
        N=N+1;
    }
    printf("%d est le nombre de nombre premier \n",ns);
    printf("%d est le nombre d'entier saisi \n",N);


}
