int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main() {
    char term[8] = "_putchar";
    int i;
    for(i=0; i < sizeof(term); i++){
        _putchar(term[i]);
    }
    _putchar('\n');
    
    return 0;
}
