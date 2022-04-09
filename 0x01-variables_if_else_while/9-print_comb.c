// Online C compiler to run C program online
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
    for(int x = 0; x < 10; x++) 
    {
        putchar('0'+x);
        if(x != 9)
        {
           putchar(','); 
           putchar(' ');
        }
    }
	return (0);
}
