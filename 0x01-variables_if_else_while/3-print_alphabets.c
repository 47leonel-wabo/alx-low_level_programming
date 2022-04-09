// Online C compiler to run C program online
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	for(int x = 'A'; x <= 'z'; x++) 
    {
        x = tolower(x);
        putchar(x);
        
    }
    for (int c = 65; c <= 90; ++c)
    {
        putchar(c);
    }
	return (0);
}
