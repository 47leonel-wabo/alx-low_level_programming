void print_to_98(int n)
{
    if(n == 0)
    {
        int i;
        for(i=0; i<=98; i++)
        {
            if(i == 98)
            {
                printf("%i", i);
            }
            else
            {
                printf("%i, ", i);
            }
        }
    }
    else if( n == 98)
    {
        printf("%i", n);
    }
    else if(n > 98)
    {
        int j;
        for(j = n; j >= 98; j--)
        {
            if(j == 98)
            {
                printf("%i", j);
            }
            else
            {
                printf("%i, ", j);
            }
        }
    }
    else if(n < 98 && n > 0)
    {
        int k;
        for(k=n; k<=98; k++)
        {
            if(k==98){
                printf("%i", k);
            }
            else
            {
                printf("%i, ", k);
            }
        }
    }
    else 
    {
        int l;
        for(l=n; l<=0; l++)
        {
            if(l == 0)
            {
                print_to_98(l);
            }
            else
            {
                printf("%i, ", l);
            }
        }
    }
}
