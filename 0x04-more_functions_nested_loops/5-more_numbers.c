
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void more_numbers()
{
    int i;
    for(i=0; i<=10; i++)
    {
        int j = 0;
        while(j <= 14)
        {
            if(j >= 10){
               _putchar(j/10 + '0'); 
            }
             _putchar(j%10 + '0');
            j++;
        }
        _putchar('\n');
    }
}
