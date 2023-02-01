#include<stdio.h>
int main()
{
    int a,b,i;
    i=0;
    do
    {
        printf("Donner les deux valeurs :\n");
        scanf("%d",&a);
        scanf("%d",&b);
     }
     while(a<0 || b<=0);
        while(a != b )
            {
            if(a>b)
               {
                a = a-b;
                i=i+1;
               }
               else
               {
                b=b-a;
                i=i+1;
               }

            }
   printf("Le resultat de la division est: %d",i+1);
return 0;
}
