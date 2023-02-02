#include<stdio.h>
int main()
{
        int i,j,choix;
        char tab[12][10]={"Janvier","Avril","Juilet","Octobre","Fevrier","Mai","Aout","Novembre","Mars","Juin","Septembre","Decembre"};
        char Tab[12][10]={"January","April","Julay","October","February","May","August","November","March","June","September"};

            printf("____________________________________\n");
            for(i=0;i<12;i++)
            {
                printf("|");
                printf("%s ",tab[i]);
                if( (i+1) % 4 == 0)
                   {
                        printf("%s\n ",tab[i]);
                        printf("____________________________________\n");
                        printf("|");

                   }

            }
             do
            {
                printf("veuillez choisir un numero: ");
                scanf("%d",&choix);
            }
            while(choix!=1 && choix!=2);
            printf("____________________________________\n");
            for(j=0;j<12;j++)
            {
                if (choix == 1)
                    {
                        printf("%s ",Tab[j]);
                            if( (j+1) % 4 == 0)
                            {
                                printf("%s\n ",Tab[j]);
                                printf("____________________________________\n");
                            }
                    }

            }
            printf("Merci !!!");


}

