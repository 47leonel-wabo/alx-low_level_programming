int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_line(int n)
{
    if(n <= 0)
    {
        return;
    }else{
        int i=0;
        while(i <= n)
        {
            _putchar('_');
            i++;
        }
        _putchar('\n');
    }
}
