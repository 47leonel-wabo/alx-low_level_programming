int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_square(int size)
{
    if(size <= 0){
        return;
    }else{
        int i=0;
        while(i < size)
        {
            int j = 0;
            while(j < size){
                _putchar('#');
                j++;
            }
            _putchar('\n');
            i++;
        }
    }
}

