#include<stdio.h>
main()
{
    int n,N,i;
    n=50;
    printf("Donner un nombre: \n");
    scanf("%d",&N);
    while(N<n)
    {
        printf("Donner un nombre: \n");
        scanf("%d",&N);
    }
}
