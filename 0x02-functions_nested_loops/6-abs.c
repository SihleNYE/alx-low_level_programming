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
	
	if (n < 0)
		{
			_putchar(n * -1);
		}
        else
		{
			_putchar(n);
		
		}

	_putchar('\n');

	return (0);
}
