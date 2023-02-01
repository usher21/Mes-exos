#include<stdio.h>
int main()
{
    int n1,n2;
    do
    {
        printf("Donner un nombre :\n");
        scanf("%d",&n1);
    }
    while(n1<=0);
    printf("verifier si le nombre est correct \n");
    while(n1 != n2)
    {
        //printf("Donner un nombre:\n");
        scanf("%d",&n2);
        if(n1>n2)
        {
            printf("Donner un nombre plus grand: ");
        }
        else
            if(n1<n2)
        {
            printf("Donner un nombre plus petit: ");
        }

    }
    if(n1 == n2)
    {
        printf(" %d est le bon nombre: ",n2);
    }
}