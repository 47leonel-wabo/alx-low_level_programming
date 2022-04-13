int print_last_digit(int n)
{
    if(n<0)
    {
        n = -1 * n;
    }
    return n%10;
}
