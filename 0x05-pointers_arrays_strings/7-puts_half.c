int _putchar(char c)
{
	return (write(1, &c, 1));
}

void puts_half(char *str)
{
    int len = _strlen(str);
    int i;
    for(i=len/2; i<len; i++)
    {
        _putchar(str[i]);
    }
}

