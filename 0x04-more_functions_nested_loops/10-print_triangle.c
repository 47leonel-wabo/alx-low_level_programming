int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_triangle(int size)
{
    if(size <= 0){
        _putchar('\n');
    }else{
        if(size==1){
            _putchar('#');
        }else{
            int i;
            for(i=0; i<size; i++){
                int j;
                for(j=size-1; j>=0; j--){
                    if(j<=i){
                        _putchar('#');
                    }else{
                        _putchar(' ');
                    }
                }
                _putchar('\n');
            }
        }
    }
    _putchar('\n');
}
