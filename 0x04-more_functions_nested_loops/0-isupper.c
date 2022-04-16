int _isupper(int letter)
{
    int i;
    char c = letter;
    if(c >= 65 && c <= 90)
    {
        return 1;
    }else if(c >= 97 && c <= 122)
    {
        return 0;
    }
}
