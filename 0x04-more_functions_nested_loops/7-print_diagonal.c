int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_diagonal(int n)
{
    if(n <= 0){
        return;
    }else{
        if(n == 1){
            _putchar(92);
            _putchar('\n');
        }else{
            int i = 0;
            while(i < n-1)
            {
                _putchar(' ');
                i++;
            }
            _putchar(92);
            _putchar('\n'); 
        }
    }
}
