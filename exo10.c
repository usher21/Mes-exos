#include<stdio.h>
int main()
{
    int n1,n2,i,som1,som2;
    som1=0;
    som2=0;
    do
    {
        printf
        ("Donner les deux valeurs :\n");
        scanf("%d",&n1);
        scanf("%d",&n2);
    }
    while(n1<=0 || n2<=0);
    for(i=2;(i<n1 && i<n2);i++)
    {
        if(n1%i == 0)
        {
          //  i=i-1;
            som1=som1+i;
        }
        if(n2%i == 0)
        {
          //  i=i-1;
            som2=som2+i;
        }
    }
    if( som1==n2 && som2==n1 )
    {
        printf("%d et %d sont des nombres amis ",n1,n2);
    }
    else
        printf("%d et %d ne sont pas des nombres amis ",n1,n2);

}