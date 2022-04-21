void rev_string(char *s)
{
  char *end,temp;
  end = s;
  while(*end != '\0')
  {
    end++;
  }
  end--;
  for(;s<end;s++,end--)
  {
    temp = *end;
    *end = *s;
    *s = temp; 
  }
}

