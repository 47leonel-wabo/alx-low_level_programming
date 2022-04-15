void times_tables()
{
    int i;
    int j;
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            if(j == 9)
            {
                printf("%i", i * j);
            }
            else
            {
               printf("%i, ", i * j); 
            }
        }
        printf("\n");
    }
}
