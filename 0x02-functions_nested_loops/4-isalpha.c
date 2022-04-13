int _putchar(char c)
{
	return (write(1, &c, 1));
}
int _isalpha(char c)
{
    int i;
    for(i=97; i <= 122; i++)
    {
        if(c == i)
        {
            return 1;
        }
    }
    for(i=65; i <= 90; i++)
    {
        if(c == i)
        {
            return 1;
        }
    }
    return 0;
}
