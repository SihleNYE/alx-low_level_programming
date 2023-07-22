#include "main.h"


/**
 *main - Entry point
 *
 * Description: ''
 *
 * Return: Always 0 (Success)
 */
	int _abs(int n)
{
	int sign = n * -1;
	
	if (n < 0)
		{
			_putchar(sign);
			return (sign);
		}
        if (n > 0)
		{
			_putchar(n);
			return (n);
		
		}

	_putchar('\n');

	return (0);
}
