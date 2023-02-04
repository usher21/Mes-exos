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