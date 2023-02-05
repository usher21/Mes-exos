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

int nbrjour(int m,int an)
{
    int jr;
    int bis=bissextile(an);

        if (m == 2)
        {
            if(bis)
            {
                jr=29;
            }
            else
            {
                jr=28;
            }
        }
        else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        {
            jr=31;
        }
        else
            jr=30;
    return jr;
}

int date_valide (int jr,int m,int a)
{
    int jour;

    if(jr <= nbrjour(m,a))
    {
        jour=1;
    }
    else
        jour=0;
        
    return jour;
}

int date_suivante(int jr,int m,int an)
{
    int jour,mois,a;

        if(date_valide(jr,m,an))
        {
            if(m == 2)
            {
                jour=1;
                mois=3;
            }
            else
            {
                jour=29;
            }
            if( m == 12 && jr == 31)
            {
                jour=1;
                mois=1;
                a++;
            }
            else if (m == 4 || m == 6 || m == 9 || (m == 11 && jr == 30))
            {
                jour=1;
                mois++;
            }
            else if (m == 3 || m == 5 || m == 7 || m == 8 || (m == 10 && jr == 31))
            {
                jour=1;
                mois++;
            }
            else
                jour++;     
        }
     return jour,mois,a; 
}
