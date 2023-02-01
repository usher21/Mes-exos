#include<stdio.h>
int main()
{
    int n1,n2,pgcd;
    do
    {
        printf("Donner les deux nombres :\n");
        scanf("%d",&n1);
        scanf("%d",&n2);
    }
    while(n1<0 || n2<0);
    while(n1 != n2)
    {
        if(n1<n2)
        {
            n2=n2-n1;
        }
        else
        {
             n1=n1-n2;
        }
    }
    pgcd = n1;
            printf("Le pgcd est %d",pgcd);
return 0;

}
