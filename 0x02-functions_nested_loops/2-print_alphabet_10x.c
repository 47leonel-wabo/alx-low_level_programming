int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet() {
    int i;
    for(i=97; i <= 122; i++){
        _putchar(i);
    }
    _putchar('\n');
}

void print_alphabet_10x() {
    int i;
    for(i=0; i <= 10; i++){
        print_alphabet();
    }
}
