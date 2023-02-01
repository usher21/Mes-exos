#include<stdio.h>
int main()
{
    int a,b,c,d;

    do
    {
        printf("Donner les deux valeurs :\n");
        scanf("%d",&a);
        scanf("%d",&b);
    }
    while(a<=0 || b<=0);
        c=a;
        d=b;
    while(a != b)
        {
            if(a>b)
            {
                b=b+d;
            }
            else
                a=a+c;
        }
    printf("Le ppcm de %d et %d est : %d",c,d,b);
}
