#include "main.h"


/**
 *main - Entry point
 *
 * Description: ''
 *
 * Return: Always 0 (Success)
 */
	
	int print_sign(int n)
{

if (n > 0)
		{
		
			_putchar('+');
			return (1);
		}
if (n = 0)
		{
			_putchar('0');
			return (0);
		}

if (n < 0)		{

			_putchar('-');
			return (- 1);
		}
			
			_putchar('\n');
}
