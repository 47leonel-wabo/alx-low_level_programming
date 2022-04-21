int _strlen(char *s)
{
    int i, len = 0;
    for(i=0;;i++)
    {
        if(s[i] == '\0')
        {
            return len;
        }
        len++;
    }
}
