// Online C compiler to run C program online
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
    for(int x = 0; x < 16; x++) 
    {
        if(x < 10)
        {
            putchar(x+'0');
        }else
        {
            putchar(87+x);
        }
        
    }
	return (0);
}
