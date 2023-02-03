#include<stdio.h>
int bissextile(int a)
{
    int bis;

        if( a%400 == 0 || (a%4 == 0 && a%100 != 0))
        {
           bis=1;
        }
        else
            bis=0;

    return bis;
}
int main()
{
    int a,bis;
    printf("Donner une annee: ");
    scanf("%d",&a);
    bis=bissextile(a);
        if(bis)
        {
            printf("L'annee est bissextile");
        }
        else
            printf("L'annee n'est pas bissextile");

}