#include <stdio.h>

/**
 *main - Entry point
 *
 * Description: 'Looping numbers with putchar and ASCII	  '
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	/* local variable definition */
	int a;
	a  = 0;

   /* while loop execution */

	while( a < 10 )
	{
	putchar(a +('0'));
	a++; 
	}	
	putchar('\n');

	return (0);
}
