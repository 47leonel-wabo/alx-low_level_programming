int _putchar(char c)
{
    return (write(1, &c, 1));
}

void puts2(char *str)
{
    int i;
    for(i=0; i<_strlen(str); i++)
    {
        if(i%2 == 0)
        {
            _putchar(str[i]);
        }
    }
    _putchar('\n');
}

