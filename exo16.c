#include<stdio.h>
int main()
{
    int hf,ht,lg,nbs,i,j,ns;
    char c;
    do
    {
        printf("Donner le bon symbole \n");
        scanf("%c",&c);
    }
    while( c != '*' && c != '$' && c != '+' && c != 'o');
    do
    {
        printf("Donner la bonne valeur pour l'hauteur du tronc et de la feuille \n");
        scanf("%d",&hf);
        scanf("%d",&ht);
    }
    while(hf<=0 || ht<=0);
    do
    {
        printf("Donner la bonne valeur pour la racine \n");
        scanf("%d",&lg);
    }
    while(lg<=0 || lg%2==0);
    nbs=1;
    for(i=1;i<=hf;i++)
    {
      //  printf("\034[34m");
        for(j=1;j<=hf-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<nbs;j++)
        {
            printf("%c",c);
        }
        nbs=nbs+2;
        printf("%c\n",c);
    }
    for(i=1;i<=ht;i++)
    {
        for(j=1;j<=hf-1;j++)
        {
            printf(" ");
        }
        printf("%c\n",c);
    }
        ns=(hf-1)-(lg/2);
    for(i=1;i<=ns;i++)
    {
        printf(" ");
    }
    for(i=1;i<=lg;i++)
    {
        printf("%c",c);
    }

}
